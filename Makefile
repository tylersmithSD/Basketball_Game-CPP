#  Tyler Nathan Smith

GameTest.exe: Game.o Player.o
	g++ Game.o Player.o -o GameTest.exe

Game.o: Game.cpp
	g++ -c Game.cpp -o Game.o

Player.o: Player.cpp
	g++ -c Player.cpp -o Player.o

clean:
	rm -f Game.o Player.o GameTest.exe