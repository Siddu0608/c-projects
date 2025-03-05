ABC.exe:main.o big3.o fact.o add2.o rev.o pal.o
	gcc -o ABC.exe main.c big3.c fact.c add2.c rev.c pal.c
main.o:main.c
	gcc -c main.c
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
add2.o:add2.c
	gcc -c add2.c
rev.o:rev.c
	gcc -c rev.c
pal.o:pal.c
	gcc -c pal.c
