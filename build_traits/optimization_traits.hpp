#pragma once 
#include <build_traits/config/optimization_config.hpp>

// Information about the compile optimizations
struct optimization_traits
{
	enum class OptimizationLevel 
	{
		Debug,
		Release,
		StaticAnalysis,
		PerformanceInstrumented
	};

	constexpr static OptimizationLevel optimization()
	{
		return BUILD_TRAITS_OPTIMIZATION_LEVEL;
	}
};