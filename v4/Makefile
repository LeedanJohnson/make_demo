all: app

app: bin/addition.o bin/subtraction.o bin/concat.o
	g++ bin/*.o main.cpp -Ilib/custommath -Ilib/customstring -o app

bin/addition.o:
	mkdir -p bin
	g++ -c lib/custommath/addition.cpp -o bin/addition.o

bin/subtraction.o:
	mkdir -p bin
	g++ -c lib/custommath/subtraction.cpp -o bin/subtraction.o

bin/concat.o:
	mkdir -p bin
	g++ -c lib/customstring/concat.cpp -o bin/concat.o
