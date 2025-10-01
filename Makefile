

all: app

brazorobot.o: brazorobot.cpp brazorobot.h 
	g++ -c brazorobot.cpp -o brazorobot.o

main.o: main.cpp brazorobot.cpp
	g++ -c main.cpp -o main.o 

app: brazorobot.o main.o
	g++ main.o brazorobot.o -o app

clean:
	rm *.o

test: all
	./app
