#include "elf.h"

#include "elf32.h"
#include "elf64.h"

struct _elfObject {
	unsigned char *data;
	size_t len;
	
	int (*elf_validate_ident)(void *data);
};
