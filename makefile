all: structs.o main.o
	gcc -o structs.out structs.o main.o

structs.o: structs.c structs.h
	gcc -c structs.c

main.o: main.c structs.h
	gcc -c main.c

clean:
	rm -f *.o *.out structs

run:
	./structs.out
