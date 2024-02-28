EXE = bin/test_driver
CC = g++
OPTIONS = -std=c++11
DEBUG = -g
MEMCHECK = valgrind --tool=memcheck

all:$(EXE)
.PHONY: all run test memcheck clean

run:$(EXE)
	@echo "Press enter to run test driver"
	@read DUMMY
	@-$(EXE)
	@echo "Press enter to run memcheck"
	@read DUMMY
	$(MEMCHECK) $(EXE)

test: $(EXE)
	$(EXE)

memcheck: $(EXE)
	$(MEMCHECK) $(EXE)

clean:
	mkdir -p obj
	mkdir -p bin
	rm obj/*
	rm bin/*

$(EXE):obj/StringFunctionsTest.o obj/StringFunctions.o
	mkdir -p bin
	$(CC) $(OPTIONS) $(DEBUG) -o $(EXE) obj/StringFunctionsTest.o obj/StringFunctions.o

obj/StringFunctionsTest.o:src/StringFunctionsTest.cpp inc/StringFunctions.h
	mkdir -p obj
	$(CC) $(OPTIONS) $(DEBUG) -o obj/StringFunctionsTest.o -c  -I inc/ src/StringFunctionsTest.cpp

obj/StringFunctions.o:src/StringFunctions.cpp inc/StringFunctions.h
	mkdir -p obj
	$(CC) $(OPTIONS) $(DEBUG) -o obj/StringFunctions.o -c  -I inc/ src/StringFunctions.cpp
