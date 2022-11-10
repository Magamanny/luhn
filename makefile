all:
	gcc -c luhn.c -o luhn.o
	gcc main.c luhn.o -o app
	rm *.o
	./app