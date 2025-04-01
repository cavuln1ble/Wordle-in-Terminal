wordle: wordle.o
	gcc -o wordle wordle.o

wordle.o: wordle.c
	gcc -c wordle.o wordle.c

clean:
	rm wordle.o wordle.exe

run: 
	.\wordle