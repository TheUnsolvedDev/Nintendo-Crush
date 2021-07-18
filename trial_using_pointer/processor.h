#include <stdlib.h>
#include <stdint.h>

typedef struct CPU
{
	uint8_t *A;     // Accumulator
	uint8_t *Y;     // Index Register Y
	uint8_t *X;     // Index Register X
	uint16_t *PC;   // Program Counter
	uint16_t *SP;   // Stack Pointer
	uint8_t *SR;    // Status Register
} CPU;

void memory_allocate_CPU(CPU *cpu);

void reset_CPU(CPU *cpu);
