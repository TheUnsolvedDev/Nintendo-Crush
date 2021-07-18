#include <stdint.h>

#define RAM_BASE_ADDR 	((uint8_t)0x0000)
#define RAM_MIRROR1 	((uint8_t)0x0800)
#define RAM_MIRROR2		((uint8_t)0x1000)
#define RAM_MIRROR3		((uint8_t)0x1800)

#define PPUCTRL 		((uint8_t)0x2000)
#define PPUMASK 		((uint8_t)0x2001)
#define PPUSTATUS 		((uint8_t)0x2002)
#define OAMADDR 		((uint8_t)0x2003)
#define OAMDATA 		((uint8_t)0x2004)
#define PPUSCROLL 		((uint8_t)0x2005)
#define PPUADDR 		((uint8_t)0x2006)
#define PPUDATA 		((uint8_t)0x2007)
#define	OAMDMA 			((uint8_t)0x4014)

typedef struct MEMORY{
	uint8_t *RAM;
	uint8_t *VRAM;
	uint8_t *OAM;
}MEMORY;

void memory_allocate_MEMORY(MEMORY *ram);
