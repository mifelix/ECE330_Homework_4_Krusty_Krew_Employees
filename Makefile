output: main.o employee.o SalariedEmployee.o HourlyEmployee.o
	g++ main.o employee.o SalariedEmployee.o HourlyEmployee.o -o output
	
main.o: main.cpp
	g++ -c main.cpp

employee.o: employee.cpp employee.h
	g++ -c employee.cpp
	
SalariedEmployee.o: SalariedEmployee.cpp SalariedEmployee.h
	g++ -c SalariedEmployee.cpp

HourlyEmployee.o: HourlyEmployee.cpp HourlyEmployee.h
	g++ -c HourlyEmployee.cpp

clean:
	rm *.o output
	
	//made a makefile with the assistance of Amir's Makefile tutorial :D