CC := g++
CFLAGS := -Wall -pedantic --std=c++17

# Variables
	PART1_EXE_NAME := lab9.bin
	PART1_EXE_PATH := ./$(PART1_EXE_NAME)

# Targets

lab9.bin:
	@echo Building $@
	$(CC) $(CFLAGS) main.cpp -o $@ \
		&& chmod +x $@

lab9:	lab9.bin
	$(PART1_EXE_PATH)
