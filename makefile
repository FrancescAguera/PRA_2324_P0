all: pr0													
brazorobotico.o:	brazorobotico.cpp	brazo.h
	g++ -c brazorobotico.cpp
main.o:	main.cpp	brazo.h
	g++ -c main.cpp
pr0:	brazorobotico.o	main.o
	g++ -o pr0 main.o brazorobotico.o
clean:
	rm -f *.o pr0
test: all
	./pr0
