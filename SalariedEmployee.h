#include <string>
#include "Employee.h"
using namespace std;


class SalariedEmployee: Employee {

	public:

		float printThePayCheck();    //shall be used for printing!
		float getSalary();  //setters and getters
		void setSalary(int);
		float salary;
		float calcSalary(); //used for calculating the salary
		//this is the constructor!
		SalariedEmployee(long = 0, const string & = "" , const string & = "", const string & = "", int = 0, int = 0);
};

//more simplistic for the reason that it doesn't require as many variables as the hourly worker employees.