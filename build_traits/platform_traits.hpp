#pragma once 
#include <build_traits/config/platform_config.hpp>

// Information about the OS platform
struct platform_traits 
{
    enum class Platform {
          linux
        , macosx
        , windows
    };
    
    // @return the platform we're compiling on.
    constexpr static Platform platform()
    {
    	// BUILD_TRAITS_PLATFORM is defined in platform_config
        return BUILD_TRAITS_PLATFORM;
    }
    
    // @return true if we're compiling on POSIX system
    constexpr static bool is_posix()
    {
        return
            (platform() == Platform::linux) ||
            (platform() == Platform::macosx);
    }

    // @return true if we're compiling on a windows system
    constexpr static bool is_windows()
    {
    	return platform() == Platform::windows;
    }
};
