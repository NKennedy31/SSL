# Makes FahrCel.exe
# JMS
# 2016
# K&R Exercise 1.15. Rewrite the temperature conversion program
# of Section 1.2 to use a function for conversion.

BIN = TablasDeConversion.exe

OBJ = TablasDeConversion.o

CC = gcc

CFLAGS = -std=c11 -Wall -pedantic-errors -m32 -D __DEBUG__ -g3 $(INCS)

RM = rm -f

TablasDeConversion.exe: TablasDeConversion.o	Conversion.o	
	gcc -o TablasDeConversion.exe TablasDeConversion.o Conversion.o


.PHONY: clean

clean:
	rm -f *.o