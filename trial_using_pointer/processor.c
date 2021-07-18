#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "processor.h"

void reset_CPU(CPU *cpu)
{
	cpu->A = (uint8_t*) 0x00;
	cpu->X = (uint8_t*) 0x00;
	cpu->Y = (uint8_t*) 0x00;
	cpu->PC = (uint16_t *)0xFFFC;
	cpu->SP = (uint16_t *)0xFFFD;
}

void memory_allocate_CPU(CPU *cpu)
{
	cpu->A = (uint8_t *)malloc(sizeof(uint8_t));
	cpu->Y = (uint8_t *)malloc(sizeof(uint8_t));
	cpu->X = (uint8_t *)malloc(sizeof(uint8_t));
	cpu->PC = (uint16_t *)malloc(sizeof(uint16_t));
	cpu->SP = (uint16_t *)malloc(sizeof(uint16_t));
	cpu->SR = (uint8_t *)malloc(sizeof(uint8_t));
}
