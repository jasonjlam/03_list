all: functions.o main.o
	gcc -o  program functions.o main.o

main.o: functions.h main.c
	gcc -c -g main.c

functions.o: functions.c
	gcc -c -g functions.c

run:
	./program

clean:
	rm *.o
