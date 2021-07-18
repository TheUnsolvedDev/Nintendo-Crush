#include <stdint.h>
#include <stdlib.h>
#include "memory.h"

void memory_allocate_MEMORY(MEMORY *memory)
{
	memory->RAM = (uint8_t *)malloc(sizeof(uint8_t));
	memory->VRAM = (uint8_t *)malloc(sizeof(uint8_t));
	memory->OAM = (uint8_t *)malloc(sizeof(uint8_t));
}
