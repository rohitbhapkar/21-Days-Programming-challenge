					// 21 DAYS PROGRAMMING CHALLENGE - DAY 14

// C++ program to create multiple objects of a class 

#include <iostream>
#include <string>
using namespace std;

// class definition
// "student" is a class
class Student {
public: // Access specifier
    int rollNo;
    string stdName;
    float perc;
};

int main()
{
    // multiple object creation
    Student std1, std2;

    // Accessing attributes and setting the values
    std1.rollNo = 101;
    std1.stdName = "Shivang Yadav";
    std1.perc = 98.20f;

    std2.rollNo = 102;
    std2.stdName = "Hrithik Chandra Prasad";
    std2.perc = 99.99f;

    // Printing the values
    cout << "student 1..."
         << "\n";
    cout << "Student's Roll No.: " << std1.rollNo << "\n";
    cout << "Student's Name: " << std1.stdName << "\n";
    cout << "Student's Percentage: " << std1.perc << "\n";

    cout << "student 2..."
         << "\n";
    cout << "Student's Roll No.: " << std2.rollNo << "\n";
    cout << "Student's Name: " << std2.stdName << "\n";
    cout << "Student's Percentage: " << std2.perc << "\n";

    return 0;
}
