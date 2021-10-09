CC = gcc
CFLAGS = -Wall -Wextra -pedantic -ansi -g -lm

BIN = command_line
OBJ = source/main.o source/parser.o 

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

main.o: main.c
	gcc -c main.c $(CFLAGS)

parser.o: parser.c parser.h
	gcc -c parser.c $(CFLAGS)

clean:
	rm -f $(BIN) $(OBJ)