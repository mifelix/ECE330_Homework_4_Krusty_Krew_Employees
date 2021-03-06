/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
using namespace std;

//This is using the previous header files in order to print these for all four of our loyal Krusty Krew workers!

int main() {

//It goes: ID, first name, last name, mid initial, deptartment number, worked hours, and pay rate
	HourlyEmployee greatworker (225, "Squarepants", "Spongebob", "S", 25,25,13);
	greatworker.printTheCashMoney();  //Here is the print funcionality that was created which allows for easy printing. 

	HourlyEmployee hardworker (321, "Iroh", "Uncle", "Z", 16,80,13);
	hardworker.printTheCashMoney();

	SalariedEmployee awesomeworker (111, "Tentacles", "Squidward", "J", 76,50000);
	awesomeworker.printThePayCheck();
	
	SalariedEmployee hungryworker (124, "Star", "Patrick", "U", 24,24000);
	hungryworker.printThePayCheck();

return 0;
}