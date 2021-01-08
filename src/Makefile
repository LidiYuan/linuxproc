CC=gcc
CFLAGS=-g -Wall
PROC_HEADER=$(wildcard *.h)
PROC_SRC=$(wildcard *.c)

all: procmain

procmain:$(PROC_SRC) $(PROC_HEADER)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf procmain *.o

