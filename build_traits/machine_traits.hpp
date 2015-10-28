#pragma once 
#include <build_traits/config/machine_config.hpp>

// Information about machine architecture
struct machine_traits
{
	enum class RegisterSize
	{
		8_bit,
		16_bit,
		32_bit, 
		64_bit,
		128_bit
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
