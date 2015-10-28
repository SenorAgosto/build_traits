#pragma once 
#include <build_traits/config/optimization_config.hpp>

// Information about the compile optimizations
struct optimization_traits
{
	enum class OptimizationLevel 
	{
		debug,
		release,
		static_analysis,
		performance_instrumented
	};

	constexpr static OptimizationLevel optimization()
	{
		return BUILD_TRAITS_OPTIMIZATION_LEVEL;
	}
};