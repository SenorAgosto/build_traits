#pragma once 
#include <build_traits/machine_traits.hpp>
#include <build_traits/platform_traits.hpp>
#include <build_traits/compiler_traits.hpp>
#include <build_traits/optimization_traits.hpp>

struct build_traits
    : public machine_traits
    , public platform_traits
    , public compiler_traits
    , public optimization_traits
{
};
