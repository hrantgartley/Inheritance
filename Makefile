

Bowler: JuniorBowler.o main.o Bowler.o
	g++ JuniorBowler.o main.o Bowler.o -o Bowlerexe


JuniorBowler.o: JuniorBowler.cpp
	g++ -c JuniorBowler.cpp

Bowler.o: Bowler.cpp
	g++ -c Bowler.cpp

main.o: main.cpp
	g++ -c main.cpp


clean:
	rm -rf *o 















