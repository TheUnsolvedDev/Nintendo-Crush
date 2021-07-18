#include <stdio.h>
#include <stdlib.h>
#include "processor.h"
#include "memory.h"

int main()
{
    CPU *cpu = (CPU *)malloc(sizeof(CPU));
    MEMORY *memory = (MEMORY *)malloc(sizeof(MEMORY));

    memory_allocate_CPU(cpu);
    memory_allocate_MEMORY(memory);

    reset_CPU(cpu);

    printf("cpu_PC %p!\n", cpu->PC);
    printf("cpu_SP %p!\n", cpu->SP);

    free(cpu->A);
    free(cpu->Y);
    free(cpu->X);
    free(cpu->SR);
    free(cpu);

    printf("size of memory is %ld\n", sizeof(memory));

    return 0;
}