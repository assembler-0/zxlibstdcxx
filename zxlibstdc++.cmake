set(ZXLIBSTDCXX_BASE "/home/assembler-0/workspace/zxlibstdcxx")

set(ZXLIBSTDCXX_INCLUDE
        "${ZXLIBSTDCXX_BASE}/include/c++/17.0.0"
        "${ZXLIBSTDCXX_BASE}/include/c++/17.0.0/s390x-ibm-linux-gnu"
)

set(ZXLIBSTDCXX_MODULES
        "${ZXLIBSTDCXX_BASE}/include/c++/17.0.0/bits/std.cc"
)

add_library(zxlibstdc++ STATIC IMPORTED GLOBAL)
add_library(zxlibsupc++ STATIC IMPORTED GLOBAL)

set_target_properties(zxlibstdc++ PROPERTIES
        IMPORTED_LOCATION
        "${ZXLIBSTDCXX_BASE}/lib64/libstdc++.a"
        INTERFACE_INCLUDE_DIRECTORIES
        "${ZXLIBSTDCXX_INCLUDE}"
)

set_target_properties(zxlibsupc++ PROPERTIES
        IMPORTED_LOCATION
        "${ZXLIBSTDCXX_BASE}/lib64/libsupc++.a"
        INTERFACE_INCLUDE_DIRECTORIES
        "${ZXLIBSTDCXX_INCLUDE}"
)
