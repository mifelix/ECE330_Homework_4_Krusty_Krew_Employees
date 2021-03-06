#include <iostream>
#include "HourlyEmployee.h"
#include <string>
using namespace std;


// This is the constructor, it is similar to the salariedemployee constructor.
HourlyEmployee::HourlyEmployee(long IDNumber, const string &NameFirst , const string &NameLast, const string &MidInitial, int department, int hardwork, int RatePay) {
	
	hourRatePay = RatePay;
	myFirstName = NameFirst;
	
	myIdNum = IDNumber;
	hard_working_hours = hardwork;
	myLastName = NameLast;
	
	myMiddleInitial = MidInitial;
	myDeptCode = department;
	
	overtimepay = 0;
	theWeeklyPay = 0;
}

float HourlyEmployee::printTheCashMoney() {
//here, we are making our outline or skeleton for our output with the useful information needed, then also printing all the info for our loyal employees!
	cout << endl; //just makes a space is all 

	cout << "The Employee's Awesome Name Is: " << getLastName() <<" "<< getMiddleInitial() << "." << " " << getFirstName() << endl; // We make our print statement and print the name

	cout << "Employee's Hourly Rate: " <<HourlyEmployee::getPayRate () << endl; //This prints the hourly rate, which I increased than real life pay rate. Mostly for fun :D

	cout << "Employee's Amount Of Hard Working Hours: " <<HourlyEmployee::getHardWorkingHours() << endl; //print the hard working hours statement and the amount of hours that spongebob and Uncl Iroh worked.

	cout << "The Employee's Weekly Paycheck Amount $$$: " <<HourlyEmployee::calcPayCheck () << endl; //this prints the paycheck amount that the two individuals will receive. But Uncle Iroh is a hard worker and did some overtime!

	cout << "The Employee's ID Number Is: " << getIdNum() << endl; //we make our print statement and print our ID Number!

	cout << "The Employee's Department Number Is: " << getDeptCode () << endl; //print the statement and department number

return 0;
}


//the following are the setters and getters for the hard working hours and hour pay rate.

float HourlyEmployee::getHardWorkingHours() {
	return hard_working_hours;
}

float HourlyEmployee::getPayRate() {
	return hourRatePay;
}

void HourlyEmployee::setPayRate(int RatePay) {
	RatePay = hourRatePay;
}

void HourlyEmployee::setHardWorkingHours(int hardwork) {
	hard_working_hours = hardwork;
}

float HourlyEmployee::calcPayCheck() {
	if(hard_working_hours > 60) {   //we are saying if the it's over 60, then it's overtime pay
		
		overtimepay = hard_working_hours - 60; //we are taking our worked hours and subtracting by 60, leaving our overtime pay hours only
		
		theWeeklyPay = (hourRatePay * 60) + (hourRatePay * overtimepay * 1.5);   //we are multiplying by a rate of 1.5 as our overtime! (this was requested, but I would normally inflate it for fun!) Spoiler alert: Uncle Iroh is the hardest worker.
		// so an example of this is 13 * 60 + 13 * 20 * 1.5 = 1170. I hope this makes sense. The formula I created is a little wonky, I noticed just now. But it works!!!
		
		overtimepay = hard_working_hours - 60;
		
		return theWeeklyPay;
	}
	
	else {         //if they don't do overtime, they get the regular pay rate. But who doesn't like to work at the Krusty Krab!
		
		theWeeklyPay = (hard_working_hours * hourRatePay);
		
		return theWeeklyPay;
	}
}