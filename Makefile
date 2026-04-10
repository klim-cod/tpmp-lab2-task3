CC=gcc
CFLAGS=-Wall -Wextra -std=c11

SRC=src/main.c src/client.c src/server.c
OUT=my_program

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
