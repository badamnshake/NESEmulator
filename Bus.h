#pragma once
#include <cstdint>
#include<array>
#include "karta6502.h"

class Bus
{
public: 
	Bus();
	~Bus();

public: // Devices on the bus
	karta6502 cpu;
	// fake ram
	std::array<uint8_t, 64 * 1024> ram;

public: // functions read & write the bus
	void write(uint16_t addr, uint8_t data);
	uint8_t read(uint16_t addr, bool bReadOnly = false);
};

