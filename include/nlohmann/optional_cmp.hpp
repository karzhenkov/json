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

template<class T>
constexpr bool operator == (const optional<T>& opt, std::nullopt_t)
{
    return opt.base() == std::nullopt;
}

template<class T>
constexpr bool operator == (std::nullopt_t, const optional<T>& opt)
{
    return std::nullopt == opt.base();
}

template<class T>
constexpr bool operator != (const optional<T>& opt, std::nullopt_t)
{
    return opt.base() != std::nullopt;
}

template<class T>
constexpr bool operator != (std::nullopt_t, const optional<T>& opt)
{
    return std::nullopt != opt.base();
}

template<class T>
constexpr bool operator < (const optional<T>& opt, std::nullopt_t)
{
    return opt.base() < std::nullopt;
}

template<class T>
constexpr bool operator < (std::nullopt_t, const optional<T>& opt)
{
    return std::nullopt < opt.base();
}

template<class T>
constexpr bool operator <= (const optional<T>& opt, std::nullopt_t)
{
    return opt.base() <= std::nullopt;
}

template<class T>
constexpr bool operator <= (std::nullopt_t, const optional<T>& opt)
{
    return std::nullopt <= opt.base();
}

template<class T>
constexpr bool operator > (const optional<T>& opt, std::nullopt_t)
{
    return opt.base() > std::nullopt;
}

template<class T>
constexpr bool operator > (std::nullopt_t, const optional<T>& opt)
{
    return std::nullopt > opt.base();
}

template<class T>
constexpr bool operator >= (const optional<T>& opt, std::nullopt_t)
{
    return opt.base() >= std::nullopt;
}

template<class T>
constexpr bool operator >= (std::nullopt_t, const optional<T>& opt)
{
    return std::nullopt >= opt.base();
}

}  // namespace nlohmann

#endif  // JSON_HAS_CPP_17
