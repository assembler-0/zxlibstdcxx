// -*- C++ -*- [std.modules] module std

// Copyright The GNU Toolchain Authors.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

module;

#include <bits/stdc++.h>

// stdc++.h doesn't include <execution> because of TBB issues;
// FIXME for now let's avoid the problem by suppressing TBB.
#ifdef _PSTL_PAR_BACKEND_TBB
#undef _PSTL_PAR_BACKEND_TBB
#define _PSTL_PAR_BACKEND_SERIAL
#endif
// #include <execution>

// Module std does include deprecated library interfaces.
#undef __DEPRECATED
// #include <strstream>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreserved-module-identifier"
#pragma GCC diagnostic ignored "-Wcxx-attribute-extension"

export module std;

// C library exports are appended from std-clib.cc.in.

// 27.4 <algorithm>
export namespace std
{
  namespace ranges
  {
    using std::ranges::in_found_result;
    using std::ranges::in_fun_result;
    using std::ranges::in_in_out_result;
    using std::ranges::in_in_result;
    using std::ranges::in_out_out_result;
    using std::ranges::in_out_result;
    using std::ranges::min_max_result;
  }
  using std::all_of;
  namespace ranges
  {
    using std::ranges::all_of;
  }
  using std::any_of;
  namespace ranges
  {
    using std::ranges::any_of;
  }
  using std::none_of;
  namespace ranges
  {
    using std::ranges::none_of;
  }
  using std::for_each;
  namespace ranges
  {
    using std::ranges::for_each;
    using std::ranges::for_each_result;
  }
  using std::for_each_n;
  namespace ranges
  {
    using std::ranges::for_each_n;
    using std::ranges::for_each_n_result;
  }
  using std::find;
  using std::find_if;
  using std::find_if_not;
  namespace ranges
  {
    using std::ranges::find;
    using std::ranges::find_if;
    using std::ranges::find_if_not;
  }
  using std::find_end;
  namespace ranges
  {
    using std::ranges::find_end;
  }
  using std::find_first_of;
  namespace ranges
  {
    using std::ranges::find_first_of;
  }
  using std::adjacent_find;
  namespace ranges
  {
    using std::ranges::adjacent_find;
  }
  using std::count;
  using std::count_if;
  namespace ranges
  {
    using std::ranges::count;
    using std::ranges::count_if;
  }
  using std::mismatch;
  namespace ranges
  {
    using std::ranges::mismatch;
    using std::ranges::mismatch_result;
  }
  using std::equal;
  namespace ranges
  {
    using std::ranges::equal;
  }
  using std::is_permutation;
  namespace ranges
  {
    using std::ranges::is_permutation;
  }
  using std::search;
  namespace ranges
  {
    using std::ranges::search;
  }
  using std::search_n;
  namespace ranges
  {
    using std::ranges::search_n;
  }
  namespace ranges
  {}
  using std::copy;
  namespace ranges
  {
    using std::ranges::copy;
    using std::ranges::copy_result;
  }
  using std::copy_n;
  namespace ranges
  {
    using std::ranges::copy_n;
    using std::ranges::copy_n_result;
  }
  using std::copy_if;
  namespace ranges
  {
    using std::ranges::copy_if;
    using std::ranges::copy_if_result;
  }
  using std::copy_backward;
  namespace ranges
  {
    using std::ranges::copy_backward;
    using std::ranges::copy_backward_result;
  }
  using std::move;
  namespace ranges
  {
    using std::ranges::move;
    using std::ranges::move_result;
  }
  using std::move_backward;
  namespace ranges
  {
    using std::ranges::move_backward;
    using std::ranges::move_backward_result;
  }
  using std::swap_ranges;
  namespace ranges
  {
    using std::ranges::swap_ranges;
    using std::ranges::swap_ranges_result;
  }
  using std::iter_swap;
  using std::transform;
  namespace ranges
  {
    using std::ranges::binary_transform_result;
    using std::ranges::transform;
    using std::ranges::unary_transform_result;
  }
  using std::replace;
  using std::replace_if;
  namespace ranges
  {
    using std::ranges::replace;
    using std::ranges::replace_if;
  }
  using std::replace_copy;
  using std::replace_copy_if;
  namespace ranges
  {
    using std::ranges::replace_copy;
    using std::ranges::replace_copy_if;
    using std::ranges::replace_copy_if_result;
    using std::ranges::replace_copy_result;
  }
  using std::fill;
  using std::fill_n;
  namespace ranges
  {
    using std::ranges::fill;
    using std::ranges::fill_n;
  }
  using std::generate;
  using std::generate_n;
  namespace ranges
  {
    using std::ranges::generate;
    using std::ranges::generate_n;
  }
  using std::remove;
  using std::remove_if;
  namespace ranges
  {
    using std::ranges::remove;
    using std::ranges::remove_if;
  }
  using std::remove_copy;
  using std::remove_copy_if;
  namespace ranges
  {
    using std::ranges::remove_copy;
    using std::ranges::remove_copy_if;
    using std::ranges::remove_copy_if_result;
    using std::ranges::remove_copy_result;
  }
  using std::unique;
  namespace ranges
  {
    using std::ranges::unique;
  }
  using std::unique_copy;
  namespace ranges
  {
    using std::ranges::unique_copy;
    using std::ranges::unique_copy_result;
  }
  using std::reverse;
  namespace ranges
  {
    using std::ranges::reverse;
  }
  using std::reverse_copy;
  namespace ranges
  {
    using std::ranges::reverse_copy;
    using std::ranges::reverse_copy_result;
  }
  using std::rotate;
  namespace ranges
  {
    using std::ranges::rotate;
  }
  using std::rotate_copy;
  namespace ranges
  {
    using std::ranges::rotate_copy;
    using std::ranges::rotate_copy_result;
  }
  using std::sample;
  namespace ranges
  {
    using std::ranges::sample;
  }
  using std::shuffle;
  namespace ranges
  {
    using std::ranges::shuffle;
  }
  using std::shift_left;
  using std::shift_right;
#if __cpp_lib_shift >= 202202L // >= C++23
  namespace ranges
  {
    using std::ranges::shift_left;
    using std::ranges::shift_right;
  }
#endif
  using std::sort;
  namespace ranges
  {
    using std::ranges::sort;
  }
  using std::stable_sort;
  namespace ranges
  {
    using std::ranges::stable_sort;
  }
  using std::partial_sort;
  namespace ranges
  {
    using std::ranges::partial_sort;
  }
  using std::partial_sort_copy;
  namespace ranges
  {
    using std::ranges::partial_sort_copy;
    using std::ranges::partial_sort_copy_result;
  }
  using std::is_sorted;
  using std::is_sorted_until;
  namespace ranges
  {
    using std::ranges::is_sorted;
    using std::ranges::is_sorted_until;
  }
  using std::nth_element;
  namespace ranges
  {
    using std::ranges::nth_element;
  }
  using std::lower_bound;
  namespace ranges
  {
    using std::ranges::lower_bound;
  }
  using std::upper_bound;
  namespace ranges
  {
    using std::ranges::upper_bound;
  }
  using std::equal_range;
  namespace ranges
  {
    using std::ranges::equal_range;
  }
  using std::binary_search;
  namespace ranges
  {
    using std::ranges::binary_search;
  }
  using std::is_partitioned;
  namespace ranges
  {
    using std::ranges::is_partitioned;
  }
  using std::partition;
  namespace ranges
  {
    using std::ranges::partition;
  }
  using std::partition_copy;
  namespace ranges
  {
    using std::ranges::partition_copy;
    using std::ranges::partition_copy_result;
  }
  using std::partition_point;
  namespace ranges
  {
    using std::ranges::partition_point;
  }
  using std::merge;
  namespace ranges
  {
    using std::ranges::merge;
    using std::ranges::merge_result;
  }
  using std::inplace_merge;
  namespace ranges
  {
    using std::ranges::inplace_merge;
  }
  using std::includes;
  namespace ranges
  {
    using std::ranges::includes;
  }
  using std::set_union;
  namespace ranges
  {
    using std::ranges::set_union;
    using std::ranges::set_union_result;
  }
  using std::set_intersection;
  namespace ranges
  {
    using std::ranges::set_intersection;
    using std::ranges::set_intersection_result;
  }
  using std::set_difference;
  namespace ranges
  {
    using std::ranges::set_difference;
    using std::ranges::set_difference_result;
  }
  using std::set_symmetric_difference;
  namespace ranges
  {
    using std::ranges::set_symmetric_difference;
    using std::ranges::set_symmetric_difference_result;
  }
  using std::push_heap;
  namespace ranges
  {
    using std::ranges::push_heap;
  }
  using std::pop_heap;
  namespace ranges
  {
    using std::ranges::pop_heap;
  }
  using std::make_heap;
  namespace ranges
  {
    using std::ranges::make_heap;
  }
  using std::sort_heap;
  namespace ranges
  {
    using std::ranges::sort_heap;
  }
  using std::is_heap;
  namespace ranges
  {
    using std::ranges::is_heap;
  }
  using std::is_heap_until;
  namespace ranges
  {
    using std::ranges::is_heap_until;
  }
  using std::min;
  namespace ranges
  {
    using std::ranges::min;
  }
  using std::max;
  namespace ranges
  {
    using std::ranges::max;
  }
  using std::minmax;
  namespace ranges
  {
    using std::ranges::minmax;
    using std::ranges::minmax_result;
  }
  using std::min_element;
  namespace ranges
  {
    using std::ranges::min_element;
  }
  using std::max_element;
  namespace ranges
  {
    using std::ranges::max_element;
  }
  using std::minmax_element;
  namespace ranges
  {
    using std::ranges::minmax_element;
    using std::ranges::minmax_element_result;
  }
  using std::clamp;
  namespace ranges
  {
    using std::ranges::clamp;
  }
  using std::lexicographical_compare;
  namespace ranges
  {
    using std::ranges::lexicographical_compare;
  }
  using std::lexicographical_compare_three_way;
  using std::next_permutation;
  namespace ranges
  {
    using std::ranges::next_permutation;
    using std::ranges::next_permutation_result;
  }
  using std::prev_permutation;
  namespace ranges
  {
    using std::ranges::prev_permutation;
    using std::ranges::prev_permutation_result;
  }
  namespace ranges
  {
#if __cpp_lib_ranges_contains
    using ranges::contains;
    using ranges::contains_subrange;
#endif
#if __cpp_lib_ranges_fold
    using ranges::fold_left;
    using ranges::fold_left_first;
    using ranges::fold_left_first_with_iter;
    using ranges::fold_left_first_with_iter_result;
    using ranges::fold_left_with_iter;
    using ranges::fold_left_with_iter_result;
    using ranges::fold_right;
    using ranges::fold_right_last;
    using ranges::in_value_result;
    using ranges::out_value_result;
#endif
#if __cpp_lib_ranges_find_last
    using ranges::find_last;
    using ranges::find_last_if;
    using ranges::find_last_if_not;
#endif
#if __cpp_lib_ranges_starts_ends_with
    using ranges::starts_with;
    using ranges::ends_with;
#endif
  }
}

// 22.7.2 <any>
export namespace std
{
  using std::swap;
}

// 24.3.2 <array>
export namespace std
{
  using std::array;
  using std::operator==;
  using std::operator<=>;
  using std::get;
  using std::swap;
  using std::to_array;
  using std::tuple_element;
  using std::tuple_size;
}

// 33.5.2 <atomic>
export namespace std
{
  using std::atomic;
  using std::atomic_bool;
  using std::atomic_char;
  using std::atomic_char16_t;
  using std::atomic_char32_t;
  using std::atomic_char8_t;
  using std::atomic_compare_exchange_strong;
  using std::atomic_compare_exchange_strong_explicit;
  using std::atomic_compare_exchange_weak;
  using std::atomic_compare_exchange_weak_explicit;
  using std::atomic_exchange;
  using std::atomic_exchange_explicit;
  using std::atomic_fetch_add;
  using std::atomic_fetch_add_explicit;
  using std::atomic_fetch_and;
  using std::atomic_fetch_and_explicit;
  using std::atomic_fetch_or;
  using std::atomic_fetch_or_explicit;
  using std::atomic_fetch_sub;
  using std::atomic_fetch_sub_explicit;
  using std::atomic_fetch_xor;
  using std::atomic_fetch_xor_explicit;
  using std::atomic_flag;
  using std::atomic_flag_clear;
  using std::atomic_flag_clear_explicit;
  using std::atomic_flag_test;
  using std::atomic_flag_test_and_set;
  using std::atomic_flag_test_and_set_explicit;
  using std::atomic_flag_test_explicit;
  using std::atomic_init;
  using std::atomic_int;
  using std::atomic_int16_t;
  using std::atomic_int32_t;
  using std::atomic_int64_t;
  using std::atomic_int8_t;
  using std::atomic_int_fast16_t;
  using std::atomic_int_fast32_t;
  using std::atomic_int_fast64_t;
  using std::atomic_int_fast8_t;
  using std::atomic_int_least16_t;
  using std::atomic_int_least32_t;
  using std::atomic_int_least64_t;
  using std::atomic_int_least8_t;
  using std::atomic_intmax_t;
  using std::atomic_intptr_t;
  using std::atomic_is_lock_free;
  using std::atomic_llong;
  using std::atomic_load;
  using std::atomic_load_explicit;
  using std::atomic_long;
  using std::atomic_ptrdiff_t;
  using std::atomic_ref;
  using std::atomic_schar;
  using std::atomic_short;
  using std::atomic_signal_fence;
#ifdef __cpp_lib_atomic_lock_free_type_aliases
  using std::atomic_signed_lock_free;
#endif
  using std::atomic_size_t;
  using std::atomic_store;
  using std::atomic_store_explicit;
  using std::atomic_thread_fence;
  using std::atomic_uchar;
  using std::atomic_uint;
  using std::atomic_uint16_t;
  using std::atomic_uint32_t;
  using std::atomic_uint64_t;
  using std::atomic_uint8_t;
  using std::atomic_uint_fast16_t;
  using std::atomic_uint_fast32_t;
  using std::atomic_uint_fast64_t;
  using std::atomic_uint_fast8_t;
  using std::atomic_uint_least16_t;
  using std::atomic_uint_least32_t;
  using std::atomic_uint_least64_t;
  using std::atomic_uint_least8_t;
  using std::atomic_uintmax_t;
  using std::atomic_uintptr_t;
  using std::atomic_ullong;
  using std::atomic_ulong;
#ifdef __cpp_lib_atomic_lock_free_type_aliases
  using std::atomic_unsigned_lock_free;
#endif
  using std::atomic_ushort;
  using std::atomic_wchar_t;
  using std::kill_dependency;
  using std::memory_order;
  using std::memory_order_acq_rel;
  using std::memory_order_acquire;
  using std::memory_order_consume;
  using std::memory_order_relaxed;
  using std::memory_order_release;
  using std::memory_order_seq_cst;
  // ATOMIC_*_LOCK_FREE not exported
}

// 33.9.3 <barrier>
#if __cpp_lib_barrier
export namespace std
{
  using std::barrier;
}
#endif

// 22.15 <bit>
export namespace std
{
  using std::bit_cast;
  using std::bit_ceil;
  using std::bit_floor;
  using std::bit_width;
  using std::countl_one;
  using std::countl_zero;
  using std::countr_one;
  using std::countr_zero;
  using std::endian;
  using std::has_single_bit;
  using std::popcount;
  using std::rotl;
  using std::rotr;
#if __cpp_lib_byteswap // >= C++23
  using std::byteswap;
#endif
}

// 22.9 <bitset>
export namespace std
{
  using std::bitset;
  using std::operator&;
  using std::operator|;
  using std::operator^;
  using std::operator>>;
  using std::operator<<;
  using std::hash;
}

// 22.13 <charconv>
export namespace std
{
  using std::operator&;
  using std::operator&=;
  using std::operator^;
  using std::operator^=;
  using std::operator|;
  using std::operator|=;
  using std::operator~;
}

// 29.2 <chrono>
export namespace std
{
  using std::common_type;
}

// 17.11.1 <compare>
export namespace std
{
  using std::common_comparison_category;
  using std::common_comparison_category_t;
  using std::compare_three_way;
  using std::compare_three_way_result;
  using std::compare_three_way_result_t;
  using std::is_eq;
  using std::is_gt;
  using std::is_gteq;
  using std::is_lt;
  using std::is_lteq;
  using std::is_neq;
  using std::partial_ordering;
  using std::strong_ordering;
  using std::three_way_comparable;
  using std::three_way_comparable_with;
  using std::weak_ordering;
  using std::compare_partial_order_fallback;
  using std::compare_strong_order_fallback;
  using std::compare_weak_order_fallback;
  using std::partial_order;
  using std::strong_order;
  using std::weak_order;
#if __glibcxx_type_order >= 202506L
  using std::type_order;
  using std::type_order_v;
#endif
}

// 28.4 <complex>
export namespace std
{
  using std::operator+;
  using std::operator-;
  // using std::operator*;
  // using std::operator/;
  using std::operator==;
  using std::operator>>;
  using std::operator<<;
#if __cpp_lib_tuple_like >= 202311L
  using std::tuple_element;
  using std::tuple_element_t;
  using std::tuple_size;
  using std::tuple_size_v;
  using std::get;
#endif
}

// 18 <concepts>
export namespace std
{
  using std::assignable_from;
  using std::common_reference_with;
  using std::common_with;
  using std::convertible_to;
  using std::derived_from;
  using std::floating_point;
  using std::integral;
  using std::same_as;
  using std::signed_integral;
  using std::unsigned_integral;
  namespace ranges
  {
    using std::ranges::swap;
  }
  using std::constructible_from;
  using std::copy_constructible;
  using std::copyable;
  using std::default_initializable;
  using std::destructible;
  using std::equality_comparable;
  using std::equality_comparable_with;
  using std::equivalence_relation;
  using std::invocable;
  using std::movable;
  using std::move_constructible;
  using std::predicate;
  using std::regular;
  using std::regular_invocable;
  using std::relation;
  using std::semiregular;
  using std::strict_weak_order;
  using std::swappable;
  using std::swappable_with;
  using std::totally_ordered;
  using std::totally_ordered_with;
}

// 17.12.2 <coroutine>
#if __cpp_lib_coroutine
export namespace std
{
  using std::coroutine_handle;
  using std::coroutine_traits;
  using std::operator==;
  using std::operator<=>;
  using std::hash;
  using std::noop_coroutine;
  using std::noop_coroutine_handle;
  using std::noop_coroutine_promise;
  using std::suspend_always;
  using std::suspend_never;
}
#endif // __cpp_lib_coroutine

// 24.3 <deque>
export namespace std
{
  using std::operator==;
  using std::operator<=>;
  using std::swap;
}

// 17.9.2 <exception>
export namespace std
{
  using std::bad_exception;
  using std::current_exception;
  using std::exception;
  using std::exception_ptr;
  using std::get_terminate;
  using std::make_exception_ptr;
  using std::nested_exception;
  using std::rethrow_exception;
  using std::rethrow_if_nested;
  using std::set_terminate;
  using std::terminate;
  using std::terminate_handler;
  using std::throw_with_nested;
  using std::uncaught_exception;
  using std::uncaught_exceptions;
#if __cpp_lib_exception_ptr_cast >= 202506L
  using std::exception_ptr_cast;
#endif
}

// 34.4 <execution>
#if __cpp_lib_execution
export namespace std
{
  using std::is_execution_policy;
  using std::is_execution_policy_v;
  namespace execution
  {
    using std::execution::sequenced_policy;
    using std::execution::parallel_policy;
    using std::execution::parallel_unsequenced_policy;
    using std::execution::unsequenced_policy;
    using std::execution::seq;
    using std::execution::par;
    using std::execution::par_unseq;
    using std::execution::unseq;
  }
#if __cpp_lib_senders
  using std::forwarding_query_t;
  using std::get_allocator_t;
  using std::get_stop_token_t;
  using std::forwarding_query;
  using std::get_allocator;
  using std::get_stop_token;
  using std::stop_token_of_t;
  namespace execution
  {
    using std::execution::get_domain_t;
    using std::execution::get_scheduler_t;
    using std::execution::get_delegation_scheduler_t;
    using std::execution::get_forward_progress_guarantee_t;
    using std::execution::get_completion_scheduler_t;
    using std::execution::get_domain;
    using std::execution::get_scheduler;
    using std::execution::get_delegation_scheduler;
    using std::execution::forward_progress_guarantee;
    using std::execution::get_forward_progress_guarantee;
    using std::execution::get_completion_scheduler;
    using std::execution::empty_env;
    using std::execution::get_env_t;
    using std::execution::get_env;
    using std::execution::env_of_t;
    using std::execution::default_domain;
    using std::execution::scheduler_t;
    using std::execution::scheduler;
    using std::execution::receiver_t;
    using std::execution::receiver;
    using std::execution::receiver_of;
    using std::execution::set_value_t;
    using std::execution::set_error_t;
    using std::execution::set_stopped_t;
    using std::execution::set_value;
    using std::execution::set_error;
    using std::execution::set_stopped;
    using std::execution::operation_state_t;
    using std::execution::operation_state;
    using std::execution::start_t;
    using std::execution::start;
    using std::execution::sender_t;
    using std::execution::sender;
    using std::execution::sender_in;
    using std::execution::sender_to;
    using std::execution::get_completion_signatures_t;
    using std::execution::get_completion_signatures;
    using std::execution::completion_signatures_of_t;
    using std::execution::value_types_of_t;
    using std::execution::error_types_of_t;
    using std::execution::sends_stopped;
    using std::execution::tag_of_t;
    using std::execution::transform_sender;
    using std::execution::transform_env;
    using std::execution::apply_sender;
    using std::execution::connect_t;
    using std::execution::connect;
    using std::execution::connect_result_t;
    using std::execution::just_t;
    using std::execution::just_error_t;
    using std::execution::just_stopped_t;
    using std::execution::schedule_t;
    using std::execution::just;
    using std::execution::just_error;
    using std::execution::just_stopped;
    using std::execution::schedule;
    using std::execution::read_env;
    using std::execution::schedule_result_t;
    using std::execution::sender_adaptor_closure;
    using std::execution::starts_on_t;
    using std::execution::continues_on_t;
    using std::execution::on_t;
    using std::execution::schedule_from_t;
    using std::execution::then_t;
    using std::execution::upon_error_t;
    using std::execution::upon_stopped_t;
    using std::execution::let_value_t;
    using std::execution::let_error_t;
    using std::execution::let_stopped_t;
    using std::execution::bulk_t;
    using std::execution::split_t;
    using std::execution::when_all_t;
    using std::execution::when_all_with_variant_t;
    using std::execution::into_variant_t;
    using std::execution::stopped_as_optional_t;
    using std::execution::stopped_as_error_t;
    using std::execution::starts_on;
    using std::execution::continues_on;
    using std::execution::on;
    using std::execution::schedule_from;
    using std::execution::then;
    using std::execution::upon_error;
    using std::execution::upon_stopped;
    using std::execution::let_value;
    using std::execution::let_error;
    using std::execution::let_stopped;
    using std::execution::bulk;
    using std::execution::split;
    using std::execution::when_all;
    using std::execution::when_all_with_variant;
    using std::execution::into_variant;
    using std::execution::stopped_as_optional;
    using std::execution::stopped_as_error;
    using std::execution::completion_signatures;
    using std::execution::transform_completion_signatures;
    using std::execution::transform_completion_signatures_of;
    using std::execution::run_loop;
  }
  namespace this_thread
  {
    using std::this_thread::sync_wait_t;
    using std::this_thread::sync_wait_with_variant_t;
    using std::this_thread::sync_wait;
    using std::this_thread::sync_wait_with_variant;
  }
#endif // __cpp_lib_senders
}
#endif // __cpp_lib_execution

// 22.8 <expected>
#if __cpp_lib_expected
export namespace std
{
  using std::unexpected;
  using std::bad_expected_access;
  using std::unexpect_t;
  using std::unexpect;
  using std::expected;
}
#endif

// <filesystem>
#if __cpp_lib_filesystem
export namespace std::filesystem
{
  using std::filesystem::begin;
  using std::filesystem::copy_options;
  using std::filesystem::directory_entry;
  using std::filesystem::directory_iterator;
  using std::filesystem::directory_options;
  using std::filesystem::end;
  using std::filesystem::file_status;
  using std::filesystem::file_time_type;
  using std::filesystem::file_type;
  using std::filesystem::filesystem_error;
  using std::filesystem::hash_value;
  using std::filesystem::path;
  using std::filesystem::perm_options;
  using std::filesystem::perms;
  using std::filesystem::recursive_directory_iterator;
  using std::filesystem::space_info;
  using std::filesystem::swap;
  using std::filesystem::operator&;
  using std::filesystem::operator&=;
  using std::filesystem::operator^;
  using std::filesystem::operator^=;
  using std::filesystem::operator|;
  using std::filesystem::operator|=;
  using std::filesystem::operator~;
  using std::filesystem::absolute;
  using std::filesystem::canonical;
  using std::filesystem::copy;
  using std::filesystem::copy_file;
  using std::filesystem::copy_symlink;
  using std::filesystem::create_directories;
  using std::filesystem::create_directory;
  using std::filesystem::create_directory_symlink;
  using std::filesystem::create_hard_link;
  using std::filesystem::create_symlink;
  using std::filesystem::current_path;
  using std::filesystem::equivalent;
  using std::filesystem::exists;
  using std::filesystem::file_size;
  using std::filesystem::hard_link_count;
  using std::filesystem::is_block_file;
  using std::filesystem::is_character_file;
  using std::filesystem::is_directory;
  using std::filesystem::is_empty;
  using std::filesystem::is_fifo;
  using std::filesystem::is_other;
  using std::filesystem::is_regular_file;
  using std::filesystem::is_socket;
  using std::filesystem::is_symlink;
  using std::filesystem::last_write_time;
  using std::filesystem::permissions;
  using std::filesystem::proximate;
  using std::filesystem::read_symlink;
  using std::filesystem::relative;
  using std::filesystem::remove;
  using std::filesystem::remove_all;
  using std::filesystem::rename;
  using std::filesystem::resize_file;
  using std::filesystem::space;
  using std::filesystem::status;
  using std::filesystem::status_known;
  using std::filesystem::symlink_status;
  using std::filesystem::temp_directory_path;
  using std::filesystem::u8path;
  using std::filesystem::weakly_canonical;
}
#endif // __cpp_lib_filesystem

// <flat_map>
#if __cpp_lib_flat_map
export namespace std
{
  using std::sorted_equivalent;
  using std::sorted_equivalent_t;
  using std::sorted_unique;
  using std::sorted_unique_t;
}
#endif

// <flat_set>
#if __cpp_lib_flat_set
export namespace std
{
  using std::sorted_equivalent;
  using std::sorted_equivalent_t;
  using std::sorted_unique;
  using std::sorted_unique_t;
}
#endif

// <format>
export namespace std
{
#if __cpp_lib_format_ranges
  using std::formattable;
#endif
#ifdef __cpp_lib_format_ranges
  using std::format_kind;
  using std::range_format;
  using std::range_formatter;
#endif
}

// <forward_list>
export namespace std
{
  using std::operator==;
  using std::operator<=>;
  using std::swap;
}

// <fstream>
export namespace std
{
  using std::swap;
}

// <functional>
export namespace std
{
  using std::bind;
  using std::bind_front;
#if __cpp_lib_bind_back
  using std::bind_back;
#endif
  using std::bit_and;
  using std::bit_not;
  using std::bit_or;
  using std::bit_xor;
  using std::compare_three_way;
  using std::cref;
  using std::divides;
  using std::equal_to;
  using std::greater;
  using std::greater_equal;
  using std::identity;
  using std::invoke;
#if __cpp_lib_invoke_r
  using std::invoke_r;
#endif
  using std::is_bind_expression;
  using std::is_bind_expression_v;
  using std::is_placeholder;
  using std::is_placeholder_v;
  using std::less;
  using std::less_equal;
  using std::logical_and;
  using std::logical_not;
  using std::logical_or;
  using std::minus;
  using std::modulus;
#if __cpp_lib_move_only_function
  using std::move_only_function;
#endif
#if __cpp_lib_copyable_function
  using std::copyable_function;
#endif
#if __cpp_lib_function_ref
  using std::function_ref;
#endif
  using std::multiplies;
  using std::negate;
  using std::not_equal_to;
  using std::not_fn;
  using std::plus;
  using std::ref;
  using std::reference_wrapper;
  namespace placeholders
  {
    using std::placeholders::_1;
    using std::placeholders::_10;
    using std::placeholders::_2;
    using std::placeholders::_3;
    using std::placeholders::_4;
    using std::placeholders::_5;
    using std::placeholders::_6;
    using std::placeholders::_7;
    using std::placeholders::_8;
    using std::placeholders::_9;
  }
  using std::bad_function_call;
  using std::function;
  using std::mem_fn;
  using std::swap;
  using std::operator==;
  using std::default_searcher;
  using std::hash;
  namespace ranges
  {
    using std::ranges::equal_to;
    using std::ranges::greater;
    using std::ranges::greater_equal;
    using std::ranges::less;
    using std::ranges::less_equal;
    using std::ranges::not_equal_to;
  }
}

// <future>
export namespace std
{
  using std::operator&;
  using std::operator&=;
  using std::operator^;
  using std::operator^=;
  using std::operator|;
  using std::operator|=;
  using std::operator~;
  using std::swap;
  using std::uses_allocator;
}

#if __cpp_lib_generator
export namespace std
{
  using std::generator;
}
#endif

// <hazard_pointer> FIXME

// 17.10.2 <initializer_list>
export namespace std
{
  using std::begin;
  using std::end;
  using std::initializer_list;
}

// <ios>
export namespace std
{
  using std::operator!=;
  using std::operator-;
  using std::operator==;
}

// <istream>
export namespace std
{
  using std::operator>>;
}

// <iterator>
export namespace std
{
  using std::incrementable_traits;
  using std::indirectly_readable_traits;
  using std::iter_difference_t;
  using std::iter_reference_t;
  using std::iter_value_t;
  using std::iterator_traits;
  // _Cpo is an implementation detail we can't avoid exposing; if we do the
  // using in ranges directly, it conflicts with any friend functions of the
  // same name, which is why the customization points are in an inline
  // namespace in the first place.
  namespace ranges::inline _Cpo
  {
    using _Cpo::iter_move;
    using _Cpo::iter_swap;
  }
  using std::advance;
  using std::bidirectional_iterator;
  using std::bidirectional_iterator_tag;
  using std::contiguous_iterator;
  using std::contiguous_iterator_tag;
  using std::disable_sized_sentinel_for;
  using std::distance;
  using std::forward_iterator;
  using std::forward_iterator_tag;
  using std::incrementable;
  using std::indirect_binary_predicate;
  using std::indirect_equivalence_relation;
  using std::indirect_result_t;
  using std::indirect_strict_weak_order;
  using std::indirect_unary_predicate;
  using std::indirectly_comparable;
  using std::indirectly_copyable;
  using std::indirectly_copyable_storable;
  using std::indirectly_movable;
  using std::indirectly_movable_storable;
  using std::indirectly_readable;
  using std::indirectly_regular_unary_invocable;
  using std::indirectly_swappable;
  using std::indirectly_unary_invocable;
  using std::indirectly_writable;
  using std::input_iterator;
  using std::input_iterator_tag;
  using std::input_or_output_iterator;
  using std::iter_common_reference_t;
  using std::iter_rvalue_reference_t;
  using std::mergeable;
  using std::next;
  using std::output_iterator;
  using std::output_iterator_tag;
  using std::permutable;
  using std::prev;
  using std::projected;
  using std::random_access_iterator;
  using std::random_access_iterator_tag;
  using std::sentinel_for;
  using std::sized_sentinel_for;
  using std::sortable;
  using std::weakly_incrementable;
  namespace ranges
  {
    using std::ranges::advance;
    using std::ranges::distance;
    using std::ranges::next;
    using std::ranges::prev;
  }
  using std::reverse_iterator;
  using std::operator==;
  using std::operator!=;
  using std::operator<;
  using std::operator>;
  using std::operator<=;
  using std::operator>=;
  using std::operator<=>;
  using std::operator-;
  using std::operator+;
  using std::back_insert_iterator;
  using std::back_inserter;
  using std::begin;
  using std::cbegin;
  using std::cend;
  using std::common_iterator;
  using std::counted_iterator;
  using std::crbegin;
  using std::crend;
  using std::data;
  using std::default_sentinel;
  using std::default_sentinel_t;
  using std::empty;
  using std::end;
  using std::front_insert_iterator;
  using std::front_inserter;
  using std::insert_iterator;
  using std::inserter;
  using std::iterator;
  using std::make_move_iterator;
  using std::make_reverse_iterator;
  using std::move_iterator;
  using std::move_sentinel;
  using std::rbegin;
  using std::rend;
  using std::size;
  using std::ssize;
  using std::unreachable_sentinel;
  using std::unreachable_sentinel_t;
#if __glibcxx_ranges_as_const // >= C++23
  using std::iter_const_reference_t;
  using std::basic_const_iterator;
  using std::const_iterator;
  using std::const_sentinel;
  using std::make_const_iterator;
  using std::make_const_sentinel;
#endif
#if __glibcxx_algorithm_default_value_type // >= C++26
  using std::projected_value_t;
#endif
}

// 17.3.3 <limits> [limits.syn]
export namespace std
{
  using std::float_denorm_style; // deprecated in C++23
  using std::float_round_style;
  using std::numeric_limits;
}

// FIXME <linalg>

// <list>
export namespace std
{
  using std::operator==;
  using std::operator<=>;
  using std::swap;
}

// <map>
export namespace std
{
  using std::operator==;
  using std::operator<=>;
  using std::swap;
}

// <mdspan>
#if __glibcxx_mdspan
export namespace std
{
  using std::extents;
  using std::dextents;
#if __glibcxx_mdspan >= 202406L
  using std::dims;
#endif
  using std::layout_left;
  using std::layout_right;
  using std::layout_stride;
  using std::default_accessor;
#if __glibcxx_aligned_accessor
  using std::aligned_accessor;
#endif
  using std::mdspan;
#if __glibcxx_padded_layouts
  using std::layout_left_padded;
  using std::layout_right_padded;
  using std::full_extent_t;
  using std::full_extent;
  using std::submdspan_mapping_result;
#endif
  // FIXME submdspan_extents, mdsubspan
}
#endif

// 20.2 <memory>
export namespace std
{
  using std::align;
  using std::allocator;
  using std::allocator_arg;
  using std::allocator_arg_t;
  using std::allocator_traits;
  using std::assume_aligned;
#if __glibcxx_is_sufficiently_aligned
  using std::is_sufficiently_aligned;
#endif  
  using std::make_obj_using_allocator;
  using std::pointer_traits;
  using std::to_address;
  using std::uninitialized_construct_using_allocator;
  using std::uses_allocator;
  using std::uses_allocator_construction_args;
  using std::uses_allocator_v;
  using std::operator==;
  using std::addressof;
  using std::uninitialized_default_construct;
  using std::uninitialized_default_construct_n;
  namespace ranges
  {
    using std::ranges::uninitialized_default_construct;
    using std::ranges::uninitialized_default_construct_n;
  }
  using std::uninitialized_value_construct;
  using std::uninitialized_value_construct_n;
  namespace ranges
  {
    using std::ranges::uninitialized_value_construct;
    using std::ranges::uninitialized_value_construct_n;
  }
  using std::uninitialized_copy;
  using std::uninitialized_copy_n;
  namespace ranges
  {
    using std::ranges::uninitialized_copy;
    using std::ranges::uninitialized_copy_n;
    using std::ranges::uninitialized_copy_n_result;
    using std::ranges::uninitialized_copy_result;
  }
  using std::uninitialized_move;
  using std::uninitialized_move_n;
  namespace ranges
  {
    using std::ranges::uninitialized_move;
    using std::ranges::uninitialized_move_n;
    using std::ranges::uninitialized_move_n_result;
    using std::ranges::uninitialized_move_result;
  }
  using std::uninitialized_fill;
  using std::uninitialized_fill_n;
  namespace ranges
  {
    using std::ranges::uninitialized_fill;
    using std::ranges::uninitialized_fill_n;
  }
  using std::construct_at;
  namespace ranges
  {
    using std::ranges::construct_at;
  }
  using std::destroy;
  using std::destroy_at;
  using std::destroy_n;
  namespace ranges
  {
    using std::ranges::destroy;
    using std::ranges::destroy_at;
    using std::ranges::destroy_n;
  }
  using std::default_delete;
  using std::unique_ptr;
  using std::operator<;
  using std::operator>;
  using std::operator<=;
  using std::operator>=;
  using std::operator<=>;
  using std::operator<<;
  using std::allocate_shared;
  using std::bad_weak_ptr;
  using std::const_pointer_cast;
  using std::dynamic_pointer_cast;
  using std::make_shared;
  using std::reinterpret_pointer_cast;
  using std::shared_ptr;
  using std::static_pointer_cast;
  using std::swap;
  using std::get_deleter;
  using std::atomic_compare_exchange_strong;
  using std::atomic_compare_exchange_strong_explicit;
  using std::atomic_compare_exchange_weak;
  using std::atomic_compare_exchange_weak_explicit;
  using std::atomic_exchange;
  using std::atomic_exchange_explicit;
  using std::atomic_is_lock_free;
  using std::atomic_load;
  using std::atomic_load_explicit;
  using std::atomic_store;
  using std::atomic_store_explicit;
  using std::enable_shared_from_this;
  using std::hash;
  using std::owner_less;
  using std::weak_ptr;
#if __cpp_lib_out_ptr
  using std::out_ptr;
  using std::inout_ptr;
  using std::out_ptr_t;
  using std::inout_ptr_t;
#endif
#if __cpp_lib_indirect
  using std::indirect;
  namespace pmr { using std::pmr::indirect; }
#endif
#if __cpp_lib_polymorphic
  using std::polymorphic;
  namespace pmr { using std::pmr::polymorphic; }
#endif
#if __cpp_lib_smart_ptr_owner_equality
  using std::owner_equal;
  using std::owner_hash;
#endif
#if __cpp_lib_start_lifetime_as
  using std::start_lifetime_as;
  using std::start_lifetime_as_array;
#endif
}

// <mutex>
export namespace std
{
  using std::swap;
}

// 17.6.2 <new> [new.syn]
export namespace std
{
  using std::align_val_t;
  using std::bad_alloc;
  using std::bad_array_new_length;
  using std::destroying_delete;
  using std::destroying_delete_t;
  using std::get_new_handler;
  using std::hardware_destructive_interference_size;
  using std::hardware_constructive_interference_size;
  using std::launder;
  using std::new_handler;
  using std::nothrow;
  using std::nothrow_t;
  using std::set_new_handler;
}
export
{
  using ::operator new;
  using ::operator delete;
  using ::operator new[];
  using ::operator delete[];
}

// <numbers>
export namespace std::numbers
{
  using std::numbers::e;
  using std::numbers::e_v;
  using std::numbers::egamma;
  using std::numbers::egamma_v;
  using std::numbers::inv_pi;
  using std::numbers::inv_pi_v;
  using std::numbers::inv_sqrt3;
  using std::numbers::inv_sqrt3_v;
  using std::numbers::inv_sqrtpi;
  using std::numbers::inv_sqrtpi_v;
  using std::numbers::ln10;
  using std::numbers::ln10_v;
  using std::numbers::ln2;
  using std::numbers::ln2_v;
  using std::numbers::log10e;
  using std::numbers::log10e_v;
  using std::numbers::log2e;
  using std::numbers::log2e_v;
  using std::numbers::phi;
  using std::numbers::phi_v;
  using std::numbers::pi;
  using std::numbers::pi_v;
  using std::numbers::sqrt2;
  using std::numbers::sqrt2_v;
  using std::numbers::sqrt3;
  using std::numbers::sqrt3_v;
}

// <numeric>
export namespace std
{
  using std::accumulate;
  using std::adjacent_difference;
  using std::exclusive_scan;
  using std::inclusive_scan;
  using std::inner_product;
  using std::iota;
  using std::partial_sum;
  using std::reduce;
  using std::transform_exclusive_scan;
  using std::transform_inclusive_scan;
  using std::transform_reduce;
  using std::gcd;
  using std::lcm;
  using std::midpoint;
#if __cpp_lib_ranges_iota
  namespace ranges
  {
    using ranges::iota;
    using ranges::iota_result;
  }
#endif
}

// <optional>
export namespace std
{
  using std::bad_optional_access;
  using std::nullopt;
  using std::nullopt_t;
  using std::optional;
  using std::operator==;
  using std::operator!=;
  using std::operator<;
  using std::operator>;
  using std::operator<=;
  using std::operator>=;
  using std::operator<=>;
  using std::hash;
  using std::make_optional;
  using std::swap;
}

// <ostream>
export namespace std
{
  using std::operator<<;
}

// <queue>
export namespace std
{
  using std::operator==;
  using std::operator!=;
  using std::operator<;
  using std::operator>;
  using std::operator<=;
  using std::operator>=;
  using std::operator<=>;
  using std::swap;
  using std::uses_allocator;
}

// <random>
export namespace std
{
  using std::uniform_int_distribution;
  using std::uniform_random_bit_generator;
}

// <ranges>
export namespace std
{
  namespace ranges
  {
    using std::ranges::begin;
    using std::ranges::cbegin;
    using std::ranges::cdata;
    using std::ranges::cend;
    using std::ranges::crbegin;
    using std::ranges::crend;
    using std::ranges::data;
    using std::ranges::empty;
    using std::ranges::end;
    using std::ranges::rbegin;
    using std::ranges::rend;
    using std::ranges::size;
    using std::ranges::ssize;
    using std::ranges::bidirectional_range;
    using std::ranges::borrowed_range;
    using std::ranges::common_range;
    using std::ranges::contiguous_range;
    using std::ranges::disable_sized_range;
    using std::ranges::enable_borrowed_range;
    using std::ranges::enable_view;
    using std::ranges::forward_range;
    using std::ranges::get;
    using std::ranges::input_range;
    using std::ranges::iterator_t;
    using std::ranges::output_range;
    using std::ranges::random_access_range;
    using std::ranges::range;
    using std::ranges::range_common_reference_t;
    using std::ranges::range_difference_t;
    using std::ranges::range_reference_t;
    using std::ranges::range_rvalue_reference_t;
    using std::ranges::range_size_t;
    using std::ranges::range_value_t;
    using std::ranges::sentinel_t;
    using std::ranges::sized_range;
    using std::ranges::subrange;
    using std::ranges::subrange_kind;
    using std::ranges::view;
    using std::ranges::view_base;
    using std::ranges::view_interface;
    using std::ranges::viewable_range;
  }
  using std::ranges::get;
  namespace ranges
  {
    using std::ranges::borrowed_iterator_t;
    using std::ranges::borrowed_subrange_t;
    using std::ranges::dangling;
    using std::ranges::empty_view;
    namespace views
    {
      using std::ranges::views::empty;
    }
    using std::ranges::single_view;
    namespace views
    {
      using std::ranges::views::single;
    }
    using std::ranges::iota_view;
    namespace views
    {
      using std::ranges::views::iota;
    }
    namespace views
    {
      using std::ranges::views::all;
      using std::ranges::views::all_t;
    }
    using std::ranges::filter_view;
    using std::ranges::owning_view;
    using std::ranges::ref_view;
    namespace views
    {
      using std::ranges::views::filter;
    }
    using std::ranges::transform_view;
    namespace views
    {
      using std::ranges::views::transform;
    }
    using std::ranges::take_view;
    namespace views
    {
      using std::ranges::views::take;
    }
    using std::ranges::take_while_view;
    namespace views
    {
      using std::ranges::views::take_while;
    }
    using std::ranges::drop_view;
    namespace views
    {
      using std::ranges::views::drop;
    }
    using std::ranges::drop_while_view;
    namespace views
    {
      using std::ranges::views::drop_while;
    }
    using std::ranges::join_view;
    namespace views
    {
      using std::ranges::views::join;
    }
    using std::ranges::lazy_split_view;
    using std::ranges::split_view;
    namespace views
    {
      using std::ranges::views::lazy_split;
      using std::ranges::views::split;
    }
    namespace views
    {
      using std::ranges::views::counted;
    }
    using std::ranges::common_view;
    namespace views
    {
      using std::ranges::views::common;
    }
    using std::ranges::reverse_view;
    namespace views
    {
      using std::ranges::views::reverse;
    }
    using std::ranges::elements_view;
    using std::ranges::keys_view;
    using std::ranges::values_view;
    namespace views
    {
      using std::ranges::views::elements;
      using std::ranges::views::keys;
      using std::ranges::views::values;
    }
#if __cpp_lib_ranges >= 202202L
    using ranges::range_adaptor_closure;
#endif
  }
  namespace views = ranges::views;
  using std::tuple_element;
  using std::tuple_size;
  namespace ranges
  {
#if __glibcxx_ranges_as_const // >= C++23
    using ranges::constant_range;
    using ranges::const_iterator_t;
    using ranges::const_sentinel_t;
    using ranges::range_const_reference_t;
    using ranges::as_const_view;
    namespace views { using views::as_const; }
#endif
#ifdef __glibcxx_generator  // C++ >= 23 && __glibcxx_coroutine
    using ranges::elements_of;
#endif
#ifdef __cpp_lib_ranges_as_rvalue // C++ >= 23
    using ranges::as_rvalue_view;
    namespace views { using views::as_rvalue; }
#endif
#ifdef __cpp_lib_ranges_chunk // C++ >= 23
    using ranges::chunk_view;
    namespace views { using views::chunk; }
#endif
#ifdef __cpp_lib_ranges_slide // C++ >= 23
    using ranges::slide_view;
    namespace views { using views::slide; }
#endif
#ifdef __cpp_lib_ranges_zip // C++ >= 23
    using ranges::zip_view;
    using ranges::zip_transform_view;
    using ranges::adjacent_view;
    using ranges::adjacent_transform_view;
    namespace views {
      using views::zip;
      using views::zip_transform;
      using views::adjacent;
      using views::adjacent_transform;
      using views::pairwise;
      using views::pairwise_transform;
    }
#endif
#ifdef __cpp_lib_ranges_chunk_by // C++ >= 23
    using ranges::chunk_by_view;
    namespace views { using views::chunk_by; }
#endif
#ifdef __cpp_lib_ranges_join_with // C++ >= 23
    using ranges::join_with_view;
    namespace views { using views::join_with; }
#endif
#ifdef __cpp_lib_ranges_repeat // C++ >= 23
    using ranges::repeat_view;
    namespace views { using views::repeat; }
#endif
#ifdef __cpp_lib_ranges_stride // C++ >= 23
    using ranges::stride_view;
    namespace views { using views::stride; }
#endif
#ifdef __cpp_lib_ranges_cartesian_product // C++ >= 23
    using ranges::cartesian_product_view;
    namespace views { using views::cartesian_product; }
#endif
#ifdef __cpp_lib_ranges_enumerate // C++ >= 23
    using ranges::enumerate_view;
    namespace views { using views::enumerate; }
#endif
#if __cpp_lib_ranges_concat // C++ >= C++26
    using ranges::concat_view;
    namespace views { using views::concat; }
#endif
#if __cpp_lib_ranges_cache_latest // C++ >= C++26
    using ranges::cache_latest_view;
    namespace views { using views::cache_latest; }
#endif
#if __glibcxx_ranges_to_input // C++ >= 26
    using ranges::to_input_view;
    namespace views { using views::to_input; }
#endif
  }
#if __glibcxx_ranges_to_container // C++ >= 23
  namespace ranges { using ranges::to; }
  using std::from_range_t;
  using std::from_range;
#endif
}

// <ratio>
export namespace std
{
  using std::atto;
  using std::centi;
  using std::deca;
  using std::deci;
  using std::exa;
  using std::femto;
  using std::giga;
  using std::hecto;
  using std::kilo;
  using std::mega;
  using std::micro;
  using std::milli;
  using std::nano;
  using std::peta;
  using std::pico;
  using std::ratio;
  using std::ratio_add;
  using std::ratio_divide;
  using std::ratio_equal;
  using std::ratio_equal_v;
  using std::ratio_greater;
  using std::ratio_greater_equal;
  using std::ratio_greater_equal_v;
  using std::ratio_greater_v;
  using std::ratio_less;
  using std::ratio_less_equal;
  using std::ratio_less_equal_v;
  using std::ratio_less_v;
  using std::ratio_multiply;
  using std::ratio_not_equal;
  using std::ratio_not_equal_v;
  using std::ratio_subtract;
  using std::tera;
}

// FIXME <rcu>

// <regex>
export namespace std
{
  using std::swap;
  using std::operator==;
  using std::operator<=>;
  using std::operator<<;
}

// 20.5 <scoped_allocator>
export namespace std
{
  using std::scoped_allocator_adaptor;
  using std::operator==;
}

// <set>
export namespace std
{
  using std::operator==;
  using std::operator<=>;
  using std::swap;
}

// <shared_mutex>
export namespace std
{
  using std::swap;
}

// 17.8.1 <source_location>
export namespace std
{
  using std::source_location;
}

// 17.6.5 Contracts
export namespace std
{
  namespace contracts
  {
    using std::contracts::contract_violation;
  }
}

// <span>
export namespace std
{
  using std::dynamic_extent;
  using std::span;
  namespace ranges
  {
    using std::ranges::enable_borrowed_range;
    using std::ranges::enable_view;
  }
  using std::as_bytes;
  using std::as_writable_bytes;
}

#if __cpp_lib_spanstream
// <spanstream>
export namespace std
{
  using std::basic_spanbuf;
  using std::spanbuf;
  using std::wspanbuf;
  using std::basic_ispanstream;
  using std::ispanstream;
  using std::wispanstream;
  using std::basic_ospanstream;
  using std::ospanstream;
  using std::wospanstream;
  using std::basic_spanstream;
  using std::spanstream;
  using std::wspanstream;
}
#endif

// <sstream>
export namespace std
{
  using std::swap;
}

// <stack>
export namespace std
{
  using std::operator==;
  using std::operator!=;
  using std::operator<;
  using std::operator>;
  using std::operator<=;
  using std::operator>=;
  using std::operator<=>;
  using std::swap;
  using std::uses_allocator;
}

// <string>
export namespace std
{
  using std::char_traits;
  using std::operator+;
  using std::operator==;
  using std::operator<=>;
  using std::swap;
  using std::operator>>;
  using std::operator<<;
  using std::hash;
}

// <string_view>
export namespace std
{
  using std::basic_string_view;
  namespace ranges
  {
    using std::ranges::enable_borrowed_range;
    using std::ranges::enable_view;
  }
  using std::operator==;
  using std::operator<=>;
  using std::operator<<;
  using std::hash;
  using std::string_view;
  using std::u16string_view;
  using std::u32string_view;
  using std::u8string_view;
  using std::wstring_view;
}
export namespace std::inline literals::inline string_view_literals
{
  using string_view_literals::operator""sv;
}

export
{
  using std::literals::string_view_literals::operator""sv;
}

// <syncstream>
export namespace std
{
#ifdef __cpp_lib_syncbuf
  using std::swap;
#endif
}

// 19.5 <system_error>
export namespace std
{
  using std::operator<<;
  using std::operator==;
  using std::operator<=>;
  using std::hash;
}

// <text_encoding>
#if __cpp_lib_text_encoding
export namespace std
{
  using std::text_encoding;
}
#endif

// <thread>
export namespace std
{
  using std::swap;
  using std::operator==;
  using std::operator<=>;
  using std::operator<<;
  using std::hash;
}

// <tuple>
export namespace std
{
  using std::apply;
  using std::forward_as_tuple;
  using std::get;
  using std::ignore;
  using std::make_from_tuple;
  using std::make_tuple;
  using std::tie;
  using std::tuple;
  using std::tuple_cat;
  using std::tuple_element;
  using std::tuple_element_t;
  using std::tuple_size;
  using std::operator==;
  using std::operator<=>;
  using std::swap;
  using std::tuple_size_v;
  using std::uses_allocator;
}

// <type_traits>
export namespace std
{
  using std::add_const;
  using std::add_const_t;
  using std::add_cv;
  using std::add_cv_t;
  using std::add_lvalue_reference;
  using std::add_lvalue_reference_t;
  using std::add_pointer;
  using std::add_pointer_t;
  using std::add_rvalue_reference;
  using std::add_rvalue_reference_t;
  using std::add_volatile;
  using std::add_volatile_t;
  using std::aligned_storage;
  using std::aligned_storage_t;
  using std::aligned_union;
  using std::aligned_union_t;
  using std::alignment_of;
  using std::alignment_of_v;
  using std::basic_common_reference;
  using std::bool_constant;
  using std::common_reference;
  using std::common_reference_t;
  using std::common_type;
  using std::common_type_t;
  using std::conditional;
  using std::conditional_t;
  using std::conjunction;
  using std::conjunction_v;
#if __cpp_lib_constant_wrapper
  using std::constant_wrapper;
  using std::cw;
#endif
  using std::decay;
  using std::decay_t;
  using std::disjunction;
  using std::disjunction_v;
  using std::enable_if;
  using std::enable_if_t;
  using std::extent;
  using std::extent_v;
  using std::false_type;
  using std::has_unique_object_representations;
  using std::has_unique_object_representations_v;
  using std::has_virtual_destructor;
  using std::has_virtual_destructor_v;
  using std::integral_constant;
  using std::invoke_result;
  using std::invoke_result_t;
  using std::is_abstract;
  using std::is_abstract_v;
  using std::is_aggregate;
  using std::is_aggregate_v;
  using std::is_arithmetic;
  using std::is_arithmetic_v;
  using std::is_array;
  using std::is_array_v;
  using std::is_assignable;
  using std::is_assignable_v;
  using std::is_base_of;
  using std::is_base_of_v;
  using std::is_bounded_array;
  using std::is_bounded_array_v;
  using std::is_class;
  using std::is_class_v;
  using std::is_compound;
  using std::is_compound_v;
  using std::is_const;
  using std::is_const_v;
  using std::is_constant_evaluated;
  using std::is_constructible;
  using std::is_constructible_v;
  using std::is_convertible;
  using std::is_convertible_v;
  using std::is_copy_assignable;
  using std::is_copy_assignable_v;
  using std::is_copy_constructible;
  using std::is_copy_constructible_v;
  using std::is_default_constructible;
  using std::is_default_constructible_v;
  using std::is_destructible;
  using std::is_destructible_v;
  using std::is_empty;
  using std::is_empty_v;
  using std::is_enum;
  using std::is_enum_v;
  using std::is_final;
  using std::is_final_v;
  using std::is_floating_point;
  using std::is_floating_point_v;
  using std::is_function;
  using std::is_function_v;
  using std::is_fundamental;
  using std::is_fundamental_v;
  using std::is_integral;
  using std::is_integral_v;
  using std::is_invocable;
  using std::is_invocable_r;
  using std::is_invocable_r_v;
  using std::is_invocable_v;
  using std::is_lvalue_reference;
  using std::is_lvalue_reference_v;
  using std::is_member_function_pointer;
  using std::is_member_function_pointer_v;
  using std::is_member_object_pointer;
  using std::is_member_object_pointer_v;
  using std::is_member_pointer;
  using std::is_member_pointer_v;
  using std::is_move_assignable;
  using std::is_move_assignable_v;
  using std::is_move_constructible;
  using std::is_move_constructible_v;
  using std::is_nothrow_assignable;
  using std::is_nothrow_assignable_v;
  using std::is_nothrow_constructible;
  using std::is_nothrow_constructible_v;
  using std::is_nothrow_convertible;
  using std::is_nothrow_convertible_v;
  using std::is_nothrow_copy_assignable;
  using std::is_nothrow_copy_assignable_v;
  using std::is_nothrow_copy_constructible;
  using std::is_nothrow_copy_constructible_v;
  using std::is_nothrow_default_constructible;
  using std::is_nothrow_default_constructible_v;
  using std::is_nothrow_destructible;
  using std::is_nothrow_destructible_v;
  using std::is_nothrow_invocable;
  using std::is_nothrow_invocable_r;
  using std::is_nothrow_invocable_r_v;
  using std::is_nothrow_invocable_v;
  using std::is_nothrow_move_assignable;
  using std::is_nothrow_move_assignable_v;
  using std::is_nothrow_move_constructible;
  using std::is_nothrow_move_constructible_v;
  using std::is_nothrow_swappable;
  using std::is_nothrow_swappable_v;
  using std::is_nothrow_swappable_with;
  using std::is_nothrow_swappable_with_v;
  using std::is_null_pointer;
  using std::is_null_pointer_v;
  using std::is_object;
  using std::is_object_v;
  using std::is_pod;
  using std::is_pod_v;
  using std::is_pointer;
  using std::is_pointer_v;
  using std::is_polymorphic;
  using std::is_polymorphic_v;
  using std::is_reference;
  using std::is_reference_v;
  using std::is_rvalue_reference;
  using std::is_rvalue_reference_v;
  using std::is_same;
  using std::is_same_v;
  using std::is_scalar;
  using std::is_scalar_v;
  using std::is_signed;
  using std::is_signed_v;
  using std::is_standard_layout;
  using std::is_standard_layout_v;
  using std::is_swappable;
  using std::is_swappable_v;
  using std::is_swappable_with;
  using std::is_swappable_with_v;
  using std::is_trivial;
  using std::is_trivial_v;
  using std::is_trivially_assignable;
  using std::is_trivially_assignable_v;
  using std::is_trivially_constructible;
  using std::is_trivially_constructible_v;
  using std::is_trivially_copy_assignable;
  using std::is_trivially_copy_assignable_v;
  using std::is_trivially_copy_constructible;
  using std::is_trivially_copy_constructible_v;
  using std::is_trivially_copyable;
  using std::is_trivially_copyable_v;
  using std::is_trivially_default_constructible;
  using std::is_trivially_default_constructible_v;
  using std::is_trivially_destructible;
  using std::is_trivially_destructible_v;
  using std::is_trivially_move_assignable;
  using std::is_trivially_move_assignable_v;
  using std::is_trivially_move_constructible;
  using std::is_trivially_move_constructible_v;
  using std::is_unbounded_array;
  using std::is_unbounded_array_v;
  using std::is_union;
  using std::is_union_v;
  using std::is_unsigned;
  using std::is_unsigned_v;
#if __cpp_lib_is_virtual_base_of
  using std::is_virtual_base_of;
  using std::is_virtual_base_of_v;
#endif
  using std::is_void;
  using std::is_void_v;
  using std::is_volatile;
  using std::is_volatile_v;
  using std::make_signed;
  using std::make_signed_t;
  using std::make_unsigned;
  using std::make_unsigned_t;
  using std::negation;
  using std::negation_v;
  using std::rank;
  using std::rank_v;
  using std::remove_all_extents;
  using std::remove_all_extents_t;
  using std::remove_const;
  using std::remove_const_t;
  using std::remove_cv;
  using std::remove_cv_t;
  using std::remove_cvref;
  using std::remove_cvref_t;
  using std::remove_extent;
  using std::remove_extent_t;
  using std::remove_pointer;
  using std::remove_pointer_t;
  using std::remove_reference;
  using std::remove_reference_t;
  using std::remove_volatile;
  using std::remove_volatile_t;
  using std::true_type;
  using std::type_identity;
  using std::type_identity_t;
  using std::underlying_type;
  using std::underlying_type_t;
  using std::unwrap_ref_decay;
  using std::unwrap_ref_decay_t;
  using std::unwrap_reference;
  using std::unwrap_reference_t;
  using std::void_t;
#if __cpp_lib_reference_from_temporary
  using std::reference_converts_from_temporary;
  using std::reference_converts_from_temporary_v;
  using std::reference_constructs_from_temporary;
  using std::reference_constructs_from_temporary_v;
#endif
#if __cpp_lib_is_layout_compatible
  using std::is_corresponding_member;
  using std::is_layout_compatible;
  using std::is_layout_compatible_v;
#endif
#if __cpp_lib_is_pointer_interconvertible
  using std::is_pointer_interconvertible_base_of;
  using std::is_pointer_interconvertible_base_of_v;
  using std::is_pointer_interconvertible_with_class;
#endif
#if __cpp_lib_is_scoped_enum
  using std::is_scoped_enum;
  using std::is_scoped_enum_v;
#endif
#if __cpp_lib_is_implicit_lifetime
  using std::is_implicit_lifetime;
  using std::is_implicit_lifetime_v;
#endif
}

// <typeindex>
export namespace std
{
  using std::hash;
  using std::type_index;
}

// 17.7.2 <typeinfo> [typeinfo.syn]
export namespace std
{
  using std::bad_cast;
  using std::bad_typeid;
  using std::type_info;
}

// <unordered_map>
export namespace std
{
  using std::operator==;
  using std::swap;
}

// <unordered_set>
export namespace std
{
  using std::operator==;
  using std::swap;
}

// <utility>
export namespace std
{
  using std::as_const;
  using std::cmp_equal;
  using std::cmp_greater;
  using std::cmp_greater_equal;
  using std::cmp_less;
  using std::cmp_less_equal;
  using std::cmp_not_equal;
  using std::declval;
  using std::exchange;
  using std::forward;
#if __cpp_lib_forward_like
  using std::forward_like;
#endif
  using std::in_range;
  using std::index_sequence;
  using std::index_sequence_for;
  using std::integer_sequence;
  using std::make_index_sequence;
  using std::make_integer_sequence;
  using std::move;
  using std::move_if_noexcept;
  using std::pair;
  using std::swap;
  using std::operator==;
  using std::operator<=>;
  using std::get;
  using std::in_place;
  using std::in_place_index;
  using std::in_place_index_t;
  using std::in_place_t;
  using std::in_place_type;
  using std::in_place_type_t;
  using std::make_pair;
  using std::piecewise_construct;
  using std::piecewise_construct_t;
#if __cpp_lib_to_underlying
  using std::to_underlying;
#endif
  using std::tuple_element;
  using std::tuple_size;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
  namespace rel_ops
  {
    using std::rel_ops::operator!=;
    using std::rel_ops::operator>;
    using std::rel_ops::operator<=;
    using std::rel_ops::operator>=;
  }
#pragma GCC diagnostic pop
#if __cpp_lib_unreachable
  using std::unreachable;
#endif
#if __cpp_lib_observable_checkpoint
  using std::observable_checkpoint;
#endif
}

// <valarray>
export namespace std
{
  using std::swap;
  using std::valarray;
  // using std::operator*;
  // using std::operator/;
  // using std::operator%;
  using std::operator+;
  using std::operator-;
  using std::operator^;
  using std::operator&;
  using std::operator|;
  using std::operator<<;
  using std::operator>>;
  // using std::operator&&;
  // using std::operator||;
  using std::operator==;
  using std::operator!=;
  using std::operator<;
  using std::operator>;
  using std::operator<=;
  using std::operator>=;
  using std::begin;
  using std::end;
}

// <variant>
export namespace std
{
  using std::get;
  using std::get_if;
  using std::holds_alternative;
  using std::variant;
  using std::variant_alternative;
  using std::variant_alternative_t;
  using std::variant_npos;
  using std::variant_size;
  using std::variant_size_v;
  using std::operator==;
  using std::operator!=;
  using std::operator<;
  using std::operator>;
  using std::operator<=;
  using std::operator>=;
  using std::operator<=>;
  using std::bad_variant_access;
  using std::hash;
  using std::monostate;
  using std::swap;
  using std::visit;
}

// <vector>
export namespace std
{
  using std::operator==;
  using std::operator<=>;
  using std::swap;
  using std::hash;
}
// C standard library exports for -*- C++ -*- std and std.compat modules
// This file is appended to std.cc.in or std-compat.cc.in.

#ifdef STD_COMPAT
#define C_LIB_NAMESPACE
#else
#define C_LIB_NAMESPACE namespace std
#endif

// C standard library headers [tab:headers.cpp.c]

// 19.3 <cassert>
// No exports

// 19.4 <cerrno>
// No exports

// 28.3 <cfenv>
export C_LIB_NAMESPACE
{
#ifdef _GLIBCXX_USE_C99_FENV
  using std::feclearexcept;
  using std::fegetenv;
  using std::fegetexceptflag;
  using std::fegetround;
  using std::feholdexcept;
  using std::fenv_t;
  using std::feraiseexcept;
  using std::fesetenv;
  using std::fesetexceptflag;
  using std::fesetround;
  using std::fetestexcept;
  using std::feupdateenv;
  using std::fexcept_t;
#endif
}

// 17.3.7 <cfloat> [cfloat.syn]
// No exports, only provides macros

// 31.13.2 <cinttypes>
export C_LIB_NAMESPACE
{
#ifdef _GLIBCXX_USE_C99_INTTYPES
  using std::imaxabs;
  using std::imaxdiv;
  using std::imaxdiv_t;
  using std::strtoimax;
  using std::strtoumax;
#if defined(_GLIBCXX_USE_WCHAR_T) && _GLIBCXX_USE_C99_INTTYPES_WCHAR_T
  using std::wcstoimax;
  using std::wcstoumax;
#endif
#endif
}

// 17.3.6 <climits> [climits.syn]
// No exports, only provides macros

// 17.13.2 <cstdarg>
export C_LIB_NAMESPACE
{
  using std::va_list;
  // va_arg and friend macros not exported
}

// 17.2.1 <cstddef> [cstddef.syn]
export C_LIB_NAMESPACE
{
  using std::max_align_t;
  using std::nullptr_t;
  using std::ptrdiff_t;
  using std::size_t;
#ifndef STD_COMPAT
  using std::byte;
  using std::operator<<=;
  using std::operator<<;
  using std::operator>>=;
  using std::operator>>;
  using std::operator|=;
  using std::operator|;
  using std::operator&=;
  using std::operator&;
  using std::operator^=;
  using std::operator^;
  using std::operator~;
  using std::to_integer;
#endif
  // NULL and offsetof macros not exported
}

// 17.4 <cstdint>
export C_LIB_NAMESPACE
{
  using std::int8_t;
  using std::int16_t;
  using std::int32_t;
  using std::int64_t;
  using std::int_fast16_t;
  using std::int_fast32_t;
  using std::int_fast64_t;
  using std::int_fast8_t;
  using std::int_least16_t;
  using std::int_least32_t;
  using std::int_least64_t;
  using std::int_least8_t;
  using std::intmax_t;
  using std::intptr_t;
  using std::uint8_t;
  using std::uint16_t;
  using std::uint32_t;
  using std::uint64_t;
  using std::uint_fast16_t;
  using std::uint_fast32_t;
  using std::uint_fast64_t;
  using std::uint_fast8_t;
  using std::uint_least16_t;
  using std::uint_least32_t;
  using std::uint_least64_t;
  using std::uint_least8_t;
  using std::uintmax_t;
  using std::uintptr_t;
}

// 17.2.2 <cstdlib> [cstdlib.syn]
export C_LIB_NAMESPACE
{
  using std::abort;
  using std::atexit;
  using std::exit;
#ifdef _GLIBCXX_HAVE_MBSTATE_T
  using std::mblen;
  using std::mbstowcs;
  using std::mbtowc;
#endif
#ifdef _GLIBCXX_HAVE_QUICK_EXIT
  using std::quick_exit;
#endif
#ifdef _GLIBCXX_USE_WCHAR_T
  using std::wcstombs;
  using std::wctomb;
#endif
}

// 23.5.5 <cuchar>
export C_LIB_NAMESPACE
{
#if _GLIBCXX_USE_UCHAR_C8RTOMB_MBRTOC8_CXX20
  using std::mbrtoc8;
  using std::c8rtomb;
#endif
#if _GLIBCXX_USE_C11_UCHAR_CXX11
  using std::mbrtoc16;
  using std::c16rtomb;
  using std::mbrtoc32;
  using std::c32rtomb;
#endif
}

#if _GLIBCXX_USE_WCHAR_T
// 23.5.4 <cwchar>
export C_LIB_NAMESPACE
{
  using std::btowc;
  using std::fgetwc;
  using std::fgetws;
  using std::fputwc;
  using std::fputws;
  using std::fwide;
  using std::fwprintf;
  using std::fwscanf;
  using std::getwc;
  using std::getwchar;
  using std::mbrlen;
  using std::mbrtowc;
  using std::mbsinit;
  using std::mbsrtowcs;
  using std::mbstate_t;
  using std::putwc;
  using std::putwchar;
  using std::size_t;
  using std::swprintf;
  using std::swscanf;
  using std::tm;
  using std::ungetwc;
  using std::vfwprintf;
# if _GLIBCXX_HAVE_VFWSCANF
  using std::vfwscanf;
#endif
#ifndef _GLIBCXX_HAVE_BROKEN_VSWPRINTF
  using std::vswprintf;
#endif
# if _GLIBCXX_HAVE_VSWSCANF
  using std::vswscanf;
#endif
  using std::vwprintf;
# if _GLIBCXX_HAVE_VWSCANF
  using std::vwscanf;
#endif
  using std::wcrtomb;
  using std::wcscat;
  using std::wcschr;
  using std::wcscmp;
  using std::wcscoll;
  using std::wcscpy;
  using std::wcscspn;
  using std::wcsftime;
  using std::wcslen;
  using std::wcsncat;
  using std::wcsncmp;
  using std::wcsncpy;
  using std::wcspbrk;
  using std::wcsrchr;
  using std::wcsrtombs;
  using std::wcsspn;
  using std::wcsstr;
  using std::wcstod;
#if _GLIBCXX_HAVE_WCSTOF
  using std::wcstof;
#endif
  using std::wcstok;
  using std::wcstol;
#if _GLIBCXX_USE_C99_WCHAR
  using std::wcstold;
  using std::wcstoll;
#endif
  using std::wcstoul;
#if _GLIBCXX_USE_C99_WCHAR
  using std::wcstoull;
#endif
  using std::wcsxfrm;
  using std::wctob;
  using std::wint_t;
  using std::wmemchr;
  using std::wmemcmp;
  using std::wmemcpy;
  using std::wmemmove;
  using std::wmemset;
  using std::wprintf;
  using std::wscanf;
}
#endif

#if _GLIBCXX_USE_WCHAR_T
// 23.5.2 <cwctype>
export C_LIB_NAMESPACE
{
  using std::iswalnum;
  using std::iswalpha;
#if _GLIBCXX_HAVE_ISWBLANK
  using std::iswblank;
#endif
  using std::iswcntrl;
  using std::iswctype;
  using std::iswdigit;
  using std::iswgraph;
  using std::iswlower;
  using std::iswprint;
  using std::iswpunct;
  using std::iswspace;
  using std::iswupper;
  using std::iswxdigit;
  using std::towctrans;
  using std::towlower;
  using std::towupper;
  using std::wctrans;
  using std::wctrans_t;
  using std::wctype;
  using std::wctype_t;
  using std::wint_t;
}

#pragma GCC diagnostic pop

#endif
