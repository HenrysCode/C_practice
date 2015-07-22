main: main.o test.o test2.o
	g++ -g main.o test.o test2.o -o main

main.o: main.cpp test.h test2.h
	g++ -g -Wall -c main.cpp

test.o: test.cpp test.h
	g++ -g -Wall -c test.cpp

test2.o: test2.cpp test2.h
	 g++ -g -Wall -c test2.cpp
