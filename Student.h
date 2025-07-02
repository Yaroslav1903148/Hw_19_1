#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Student
{
private:
	char* pib;
	int avg;
	char nameZ[20];
	int numofg;
public:
   
    Student(const char* pib, int avg, const char* nameZ, int numofg);

    ~Student();

    void display();  

 
    const char* getPib() ;
    int getAvg() ;
    const char* getNameZ() ;
    int getNumofg() ;


    void setAvg(int avg);
    void setNumofg(int numofg);


};

