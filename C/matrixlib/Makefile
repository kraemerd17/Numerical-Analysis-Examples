CC= gcc -std=c99 
FLAGS= -Wall -Wextra -Wundef -Wpointer-arith -Wshadow -Wcast-align -Wstrict-prototypes -Waggregate-return
DEPENDENCIES= -lm

main: matrix.c randmat.c 
	$(CC) -o main.o main.c matrix.c randmat.c $(DEPENDENCIES)

matrix: matrix.c matrix.h
	$(CC) -c matrix.c $(DEPENDENCIES)

random: matrix.c matrix.h
	$(CC) -c randmat.c $(DEPENDENCIES)

make clean: 
	rm -rf *.o
