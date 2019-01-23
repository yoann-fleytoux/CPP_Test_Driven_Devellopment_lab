all: tests main_perso

tests: main.o couleur.o
	g++ main.o couleur.o -o tests

main.o: main.cpp
	g++ -c main.cpp

couleur.o: couleur.h couleur.C
	g++ -c couleur.C

main_perso: main_perso.o couleur.o
	g++ main_perso.o couleur.o -o main_perso

main_perso.o: main_perso.cpp
	g++ -c main_perso.cpp

clean:
	rm -rf *.o *.out
