#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student student("Ivanov Ivan Ivanovich", 85, "National Univ", 101);


    student.display();

  
    cout << "Pib: " << student.getPib() << endl;
    cout << "Avg: " << student.getAvg() << endl;

 
    student.setAvg(90);
    student.setNumofg(102);


    cout << "\nNew!:" << endl;
    student.display();
}

