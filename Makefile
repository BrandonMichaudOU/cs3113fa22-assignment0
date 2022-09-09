all: a0

a0: a0.o
	gcc -o a0 a0.o

a0.o: a0.c
	gcc -c a0.c

clean: 
	rm a0 a0.o
