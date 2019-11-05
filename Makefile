all: compile
	gcc -o Main bin/lista.o bin/main.o

compile: LISTA MAIN
	mv src/*.o bin/

LISTA:
	gcc -c src/lista.c

MAIN:
	gcc- c src/main.c

clean:
	rm bin/*

run:
	./bin/Main
