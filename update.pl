#!/usr/bin/env perl

use strict;
use warnings;

use Cwd qw(abs_path getcwd);
use File::Copy qw(copy);
use File::Path qw(make_path remove_tree);
use File::Spec;

sub usage {
    die <<"USAGE";
usage:
  $0 stldir=<path> version=<version> target=<target>

example:
  $0 stldir=/opt/gcc/libstdc++-v3 version=15.2.0 target=s390x-ibm-linux-gnu
USAGE
}

sub die_missing {
    my ($path) = @_;
    die "error: required file does not exist: $path\n";
}

sub require_file {
    my ($path) = @_;
    die_missing($path) unless -f $path;
}

sub require_dir {
    my ($path) = @_;
    die "error: required directory does not exist: $path\n"
        unless -d $path;
}

sub install_file {
    my ($src, $dst) = @_;

    require_file($src);

    my ($volume, $directories, undef) = File::Spec->splitpath($dst);
    my $dir = File::Spec->catpath($volume, $directories, '');

    make_path($dir) unless -d $dir;

    copy($src, $dst)
        or die "error: failed to copy '$src' -> '$dst': $!\n";
}

sub read_file {
    my ($path) = @_;

    open(my $fh, '<', $path)
        or die "error: cannot read '$path': $!\n";

    local $/;
    my $contents = <$fh>;

    close($fh)
        or die "error: cannot close '$path': $!\n";

    return $contents;
}

sub write_file {
    my ($path, $contents) = @_;

    open(my $fh, '>', $path)
        or die "error: cannot write '$path': $!\n";

    print {$fh} $contents
        or die "error: failed writing '$path': $!\n";

    close($fh)
        or die "error: cannot close '$path': $!\n";
}

sub patch_stdcxx {
    my ($path) = @_;

    my $contents = read_file($path);

    my @lines = split(/(?<=\n)/, $contents);
    my @out;

    for (my $i = 0; $i < @lines; ++$i) {
        my $line = $lines[$i];

        if ($line =~ /^#include\s+<([^>]+)>\s*$/) {
            my $header = $1;

            if (@out >= 1 && $out[-1] =~ /^#if\s+__has_include\(<\Q$header\E>\)\s*$/) {
                push @out, $line;
                next;
            }

            push @out, "#if __has_include(<$header>)\n";
            push @out, "  $line";
            push @out, "#endif\n";
            next;
        }

        push @out, $line;
    }

    my $patched = join('', @out);

    write_file($path, $patched);
}

my %args;

for my $arg (@ARGV) {
    my ($key, $value) = split(/=/, $arg, 2);

    usage() unless defined($key) && defined($value) && length($key);

    $args{$key} = $value;
}

for my $required (qw(stldir version target)) {
    usage() unless exists($args{$required}) && length($args{$required});
}

my $stldir = abs_path($args{stldir});
die "error: cannot resolve stldir '$args{stldir}'\n"
    unless defined($stldir);

my $version = $args{version};
my $target  = $args{target};

my $base = abs_path(getcwd());

die "error: cannot determine project root\n"
    unless defined($base);

require_dir($stldir);

my $std_generator = File::Spec->catdir(
    $base,
    'include',
    'c++',
    $version,
    'generator',
);

if (-f $std_generator) {
    unlink($std_generator)
        or die "error: failed to remove file '$std_generator': $!\n";
}

my $include_root = File::Spec->catdir(
    $base,
    'include',
    'c++',
    $version,
);

my $target_root = File::Spec->catdir(
    $include_root,
    $target,
);

my $bits_root = File::Spec->catdir(
    $include_root,
    'bits',
);

install_file(
    File::Spec->catfile($base, 'patchset', 'std.cc'),
    File::Spec->catfile($bits_root, 'std.cc'),
);

my $stdcxx_h = File::Spec->catfile(
    $target_root,
    'bits',
    'stdc++.h',
);

require_file($stdcxx_h);
patch_stdcxx($stdcxx_h);

my $generic_root = File::Spec->catdir(
    $stldir,
    'config',
    'os',
    'generic',
);

require_dir($generic_root);

for my $file (qw(
    ctype_base.h
    ctype_inline.h
    os_defines.h
)) {
    install_file(
        File::Spec->catfile($generic_root, $file),
        File::Spec->catfile($target_root, 'bits', $file),
    );
}

for my $file (qw(
    funcwrap.h
    funcref_impl.h
    indirect.h
)) {
    install_file(
        File::Spec->catfile($stldir, 'include', 'bits', $file),
        File::Spec->catfile($bits_root, $file),
    );
}

my $cmake_path = File::Spec->catfile(
    $base,
    'zxlibstdc++.cmake',
);

my $cmake = <<"CMAKE";
set(ZXLIBSTDCXX_BASE "\${CMAKE_CURRENT_LIST_DIR}")

set(ZXLIBSTDCXX_INCLUDE
        "\${ZXLIBSTDCXX_BASE}/include/c++/${version}"
        "\${ZXLIBSTDCXX_BASE}/include/c++/${version}/${target}"
)

set(ZXLIBSTDCXX_MODULES
        "\${ZXLIBSTDCXX_BASE}/include/c++/${version}/bits/std.cc"
)

add_library(zxlibstdc++ STATIC IMPORTED GLOBAL)
add_library(zxlibsupc++ STATIC IMPORTED GLOBAL)

set_target_properties(zxlibstdc++ PROPERTIES
        IMPORTED_LOCATION
        "\${ZXLIBSTDCXX_BASE}/lib64/libstdc++.a"
        INTERFACE_INCLUDE_DIRECTORIES
        "\${ZXLIBSTDCXX_INCLUDE}"
)

set_target_properties(zxlibsupc++ PROPERTIES
        IMPORTED_LOCATION
        "\${ZXLIBSTDCXX_BASE}/lib64/libsupc++.a"
        INTERFACE_INCLUDE_DIRECTORIES
        "\${ZXLIBSTDCXX_INCLUDE}"
)
CMAKE

write_file($cmake_path, $cmake);

print "libstdc++ update completed successfully.\n";
