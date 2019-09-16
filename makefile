FPB.exe : main.o fact.o palin.o big3.o
	gcc -o FPB.exe main.o fact.o palin.o big3.o

main.o : main.c
	gcc -c main.c
fact.o : factorial.c
	gcc -c factorial.c
palin.o : palindrome.o
	gcc -c palindrome.c
big3.o : big3.c
	gcc -c big3.c
