all: main

main: quicksort.o main.o stack.o
	clang quicksort.o main.o stack.o -o main

quicksort.o: quicksort.c stack.h
	clang -c quicksort.c -o quicksort.o

main.o: main.c stack.h
	clang -c main.c -o main.o

stack.o: stack.c stack.h
	clang -c stack.c -o stack.o

clean:
	rm -rf *.o main
