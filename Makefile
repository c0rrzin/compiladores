CC = gcc
CFLAGS = -g -O2 -Wall -std=c99

main: token.o lexer.o global.o

clean:
	-rm -f *.o
	-rm -f main
