#include "person.cpp"
#include <fstream> 
#include <iostream> 
#include <string> 
using namespace std; 
int num = 0; 
void readData(Person array[], int size)
{
	string fName; 
	string lName; 
	float pay; 
	float hours; 
	string line; 
	int i = 0; 
	ifstream file("input.txt"); 
	if(file.is_open())
	{
		file >> fName; 
		while(!file.eof())
		{
			file >> lName >> pay >> hours; 
			getline(file, line); 
			array[i].setFirstName(fName); 
			array[i].setLastName(lName); 
			array[i].setPayRate(pay); 
			array[i].setHoursWorked(hours);
			num++; 
			i++;
			file >> fName; 
		}
	}
	file.close(); 
}
void writeData(Person array[], int size)
{
	string fullName; 
	float total; 
	ofstream file("output.txt"); 
	if(file.is_open())
	{
		for(int i = 0; i < num; i++)
		{
			fullName = array[i].fullName(); 
			total = array[i].totalPay(); 
			file << fullName << " " << total << endl; 
			cout << fullName << " " << total << endl; 
		}
		file.close(); 
	}
}
int main()
{
	int size = 20; 
	Person employees[size]; 
	readData(employees, 6); 
	writeData(employees, 6); 
	system("PAUSE"); 
	return 0; 
}
