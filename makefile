RUN: Main.o Racional.o
	g++ Main.o Racional.o -o Run

Main.o: Main.cpp Racional.h Racional.cpp
	g++ -c Main.cpp

Racionales.o: Racional.h Racional.cpp
	g++ -c Racional.cpp
