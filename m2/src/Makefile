#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = 

ifeq ($(PLATFORM),MSP432)
# Architectures Specific Flags
LINKER_FILE = ../msp432p401r.lds
CPU = cortex-m4
ARCH = thumb
SPECS = nonsys.specs

# Compiler Flags and Defines
CC = arm-none-eabi-gcc
LD = arm-none-eabi-ld
LDFLAGS = -Wl -Map=$(TARGET).map -T$(LINKER_FILE)
CFLAGS = -m$(ARCH) -mcpu=$(CPU) --specs=$(SPECS) -DMSP432 \
	-march=armv7e-m -mfloat-abi=hard -mfpu=fpv4-sp-d16
CPPFLAGs = 
STOP_LINK_FLAG = -S

else ifeq ($(PLATFORM),HOST)
# Architectures Specific Flags
LINKER_FILE = 
CPU = 
ARCH = 
SPECS = 

# Compiler Flags and Defines
CC = gcc
LD = 
LDFLAGS = 
CFLAGS = -DHOST
CPPFLAGs = 
STOP_LINK_FLAG = -c
endif

CFLAGS += -Wall -Werror -g -O0 -std=c99

OBJS = $(SOURCES:.c=.o)

%.i:
#Generate the preprocessed output of all c-program implementation files (use the –E flag).



#%.c:
#	$(CC) $(CFLAGS) $(INCLUDES) $(LDFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
#Generate the preprocessed output of all c-program implementation files (use the –E flag).
	$(CC) -c $< $(CFLAGS) $(INCLUDES) $(LDFLAGS) -o $@

%.asm:
#Generate assembly output of c-program implementation files and the final output executable (Use the –S flag and the objdump utility).
	$(CC) $(CPPFLAGS) $(CFLAGS) -S $@
	
%.o:
#Generate the object file for all c-source files (but do not link) by specifying the object file you want to compile.
	$(CC) $(CPPFLAGS) $(CFLAGS) $(STOP_LINK_FLAG) $@

		
compile-all:
#Compile all object files, but DO NOT link.
	$(CC) $(CPPFLAGS) $(CFLAGS) $@
	
build: $(TARGET).out
#Compile all object files and link into a final executable.
	

$(TARGET).out: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $@
	
clean:
#This should remove all compiled objects, preprocessed outputs, assembly outputs, executable files and build output files.
	rm -f $(OBJS) $(TARGET).out $(TARGET).map


.PHONY: compile-all build clean



