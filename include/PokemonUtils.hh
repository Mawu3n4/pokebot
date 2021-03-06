#ifndef		__POKEMONUTILS_HH__
#define		__POKEMONUTILS_HH__

#include	<stdint.h>

#define		WRAM_OFFSET	0x2000000
#define		IRAM_OFFSET	0x3000000
#define		ROM_OFFSET	0x8000000

#define		BANK_PTR	0x3526A8
#define		NAMES_PTR	0x245EE0
#define		PTEAM_PTR	0x024284
#define		ETEAM_PTR	0x02402C
#define		CURR_BANK_PTR	0x031DBC
#define		CURR_MAP_PTR	0x031DBD

#define		POW(x)		((x) * (x))

char		pokeCharsetToAscii(uint8_t c);

#endif
