main.exe: main.o
	g++ -o jeux.exe main.o -L C:/SFML-2.1/lib -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -std=c++11 -c main.cpp  -I C:/SFML-2.1/include







