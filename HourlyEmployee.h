#include <string>
#include "Employee.h"
using namespace std;


class HourlyEmployee: Employee {
	
	public:
		
		// lots of declarations
		float printTheCashMoney();
		float theWeeklyPay;
		
		void setHardWorkingHours(int);
		float getHardWorkingHours();
		
		float hourRatePay; 
		float overtimepay;
		
		void setPayRate(int);
		float getPayRate();
		
		float calcPayCheck();
		float hard_working_hours;
		
		//this is the constructor :D
		HourlyEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int = 0, int = 0,int = 0);
};
//similar to the format from the employee.h file. Tried to keep it as close as possible.