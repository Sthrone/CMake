#include <iostream>
#include "Student.h"

using namespace std;


Student::Student(string ime)
{
	this->ime = ime;
}

void Student::Prikazi()
{
	cout << "Ime studenta: " << this->ime << endl;
}

