#pragma once 
#include <build_traits/config/machine_config.hpp>

// Information about machine architecture
struct machine_traits
{
	enum class RegisterSize
	{
		bits_8,
		bits_16,
		bits_32,
		bits_64,
		bits_128
	};

	enum class Endian
	{
		little,
		big,
		mixed,			// 16bit ordering different than 32bit ordering
		bi    			// processor can be either big or little
	};


	constexpr static RegisterSize registerSize() 
	{
		return BUILD_TRAITS_REGISTER_SIZE;
	}

	constexpr static Endian endian()
	{
		return BUILD_TRAITS_ENDIANESS;
	}
};
