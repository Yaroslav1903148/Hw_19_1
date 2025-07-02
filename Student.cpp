#include "Student.h"

Student::Student(const char* pib, int avg, const char* nameZ, int numofg)
{
	this->pib = new char[strlen(pib) + 1];
	strcpy_s(this->pib, strlen(pib) + 1, pib);
	this->avg = avg;
	strcpy_s(this->nameZ, sizeof(this->nameZ), nameZ);
	this->numofg = numofg;
}

Student::~Student()
{
	delete[] pib;
}

void Student::display()
{
	cout << "pIB: " << pib << endl;
	cout << "Avg: " << avg << endl;
	cout << "Name of z: " << nameZ << endl;
	cout << "Num of g: " << numofg << endl;
}

const char* Student::getPib()
{
	return pib;
}

int Student::getAvg()
{
	return avg;
}

const char* Student::getNameZ()
{
	return nameZ;
}

int Student::getNumofg()
{
	return numofg;
}

void Student::setAvg(int avg)
{
	this->avg = avg;
}

void Student::setNumofg(int numofg)
{
	this->numofg = numofg;
}
