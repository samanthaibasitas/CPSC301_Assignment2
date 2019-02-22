#include "person.h"
using namespace std; 
Person::Person() 
{
	lastName = " "; 
	firstName = " "; 
	payRate = 0.0; 
	hoursWorked = 0.0; 
}
void Person::setLastName(string lName)
{
	lName = lastName; 
}
string Person::getLastName()
{
	return lastName; 
}
void Person::setFirstName(string fName)
{
	fName = firstName;
}
string Person::getFirstName()
{
	return firstName; 
}
void Person::setPayRate(float rate)
{
	rate = payRate;
}
float Person::getPayRate()
{
	return payRate; 
}
void Person::setHoursWorked(float hours)
{
	hours = hoursWorked; 
}
float Person::getHoursWorked()
{
	return hoursWorked; 
}
float Person::totalPay()
{
	float total; 
	total = hoursWorked * payRate; 
	return total; 
}
string Person::fullName()
{
	string fullName; 
	fullName = firstName + " " + lastName; 
	return fullName; 
}
