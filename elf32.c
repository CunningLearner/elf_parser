#include "elf32.h"

int elf32_validate_ident(void *data) {
	Elf32_Ehdr *file = (Elf32_Ehdr *)data;
	
	if( *(file->e_ident + EI_MAG0) != ELFMAG0 ||
		*(file->e_ident + EI_MAG1) != ELFMAG1 ||
		*(file->e_ident + EI_MAG2) != ELFMAG2 ||
		*(file->e_ident + EI_MAG3) != ELFMAG3) {
			return -1;
	}
	
	if(*(file->e_ident + EI_CLASS) == ELFCLASSNONE) {
		return -2;
	}
	
	return 0;
}
