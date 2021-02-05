#pragma once

#include <nlohmann/detail/macro_scope.hpp>

#ifdef JSON_HAS_CPP_17

#include <optional>

namespace nlohmann
{

template <typename T> class optional;

template<class T, class U>
constexpr bool operator == (const optional<T>& lhs, const optional<U>& rhs)
{
    return lhs.base() == rhs.base();
}

template<class T, class U>
constexpr bool operator != (const optional<T>& lhs, const optional<U>& rhs)
{
    return lhs.base() != rhs.base();
}

template<class T, class U>
constexpr bool operator < (const optional<T>& lhs, const optional<U>& rhs)
{
    return lhs.base() < rhs.base();
}

template<class T, class U>
constexpr bool operator <= (const optional<T>& lhs, const optional<U>& rhs)
{
    return lhs.base() <= rhs.base();
}

template<class T, class U>
constexpr bool operator > (const optional<T>& lhs, const optional<U>& rhs)
{
    return lhs.base() > rhs.base();
}

template<class T, class U>
constexpr bool operator >= (const optional<T>& lhs, const optional<U>& rhs)
{
    return lhs.base() >= rhs.base();
}

}  // namespace nlohmann

#endif  // JSON_HAS_CPP_17
