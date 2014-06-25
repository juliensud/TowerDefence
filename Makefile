main.exe: main.o map.o tower.o enemy.o map.o
	g++ -o main.exe *.o -L C:/SFML-2.1/lib -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp  map.hpp enemy.hpp tower.hpp
	g++ -std=c++11 -c main.cpp  -I C:/SFML-2.1/include

tower.o: tower.cpp map.hpp enemy.hpp tower.hpp
	g++ -std=c++11 -c tower.cpp  -I C:/SFML-2.1/include

enemy.o: enemy.cpp map.hpp enemy.hpp tower.hpp
	g++ -std=c++11 -c enemy.cpp  -I C:/SFML-2.1/include

map.o: map.cpp map.hpp enemy.hpp tower.hpp
	g++ -std=c++11 -c map.cpp  -I C:/SFML-2.1/include


