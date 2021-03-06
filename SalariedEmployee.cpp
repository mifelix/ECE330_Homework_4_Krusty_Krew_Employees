#include <iostream>
#include "SalariedEmployee.h"
#include <string>
using namespace std;


//this is the constructor!
//Utilizing the names that were said to be used such as 'SalariedEmployee'
SalariedEmployee::SalariedEmployee(long IDNumber, const string &NameLast, const string &NameFirst, const string &MidInitial, int deptartment, int amount) {  // these are also declarations as well!
	myMiddleInitial = MidInitial;
	myIdNum = IDNumber;
	
	myFirstName = NameFirst;
	myDeptCode = deptartment;
	
	salary = amount;
	myLastName = NameLast;
}

float SalariedEmployee::printThePayCheck() {
	//using print from .h to print our various names and info :D
	//kept the same format as from employee.cpp so it is a little easier to read. Plus, easier for me to make since the format was provided :D
	cout << endl;
	
	cout << "The Employee's Awesome Name: " << getFirstName() << " " << getMiddleInitial() <<"." << " " << getLastName() << endl;

	cout << "The Employ's Salary $$$ Ka-ching!: " << SalariedEmployee::calcSalary () << endl;
	
	cout << "The Employee's ID Number Is: " << getIdNum() << endl;
	
	cout << "The Employee's Department Number: " << getDeptCode () << endl;
	
	return 0;
}

float SalariedEmployee::calcSalary() {
	return salary;
}
//Here is the setter and getter for SalariedEmployee
void SalariedEmployee::setSalary(int amount) {
	amount = salary;
}

float SalariedEmployee::getSalary() {
	return salary;
}
