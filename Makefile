#Complete all in Makefile
#requires the grid.o file to be complete, make the final.o for test run
all: grid.o
	g++ main.cpp -o a.out

#Make grid object
grid: grid.o
	g++ grid.cpp -o grid.o

#Clean the all the object files
clean:
	rm *.o 
	rm a.out
