#ifndef _ELF_H_
#define _ELF_H_

#include <stdio.h>
#include <stdint.h>

#define EI_CLASS	4
#define EI_DATA		5
#define EI_VERSION	6
#define EI_PAD		7
#define EI_NIDENT	16

#define EV_CURRENT 1

typedef uint32_t	Elf32_Addr;
typedef uint16_t	Elf32_Half;
typedef uint32_t	Elf32_Off;
typedef uint32_t	Elf32_Word;

typedef uint64_t	Elf64_Addr;
typedef uint16_t	Elf64_Half;
typedef uint64_t	Elf64_Off;
typedef uint32_t	Elf64_Word;

enum ELFObjType {
	ET_NONE,
	ET_REL,
	ET_EXEC,
	ET_DYN,
	ET_CORE
};
enum ELFMachineType {
	EM_NONE,
	EM_SPARC,
	EM_SPARC32PLUS,
	EM_SPARCV9,
	EM_386,
	EM_IA_64,
	EM_X86_64,
	EM_68K,
	EM_MIPS,
	EM_PARISC,
	EM_PPC,
	EM_PPC64,
	EM_SH,
	EM_S390,
	EM_S390_OLD,
	EM_CRIS,
	EM_V850,
	EM_H8_300,
	EM_FRV
};
	
