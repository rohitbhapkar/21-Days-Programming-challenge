								//21 DAYS PROGRAMMING CHALLENGE - DAY 1 			

//PROGRAM TO ADD AND SUBTRACT 2 NUMBERS: 

#include<iostream>
using namespace std;
int main()
{
	int a, b,res1,res2 ;  		//declaring 3 varibales for input and output
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	res1= a+b;					// storing the output in 2 variables
	res2=a-b;
	cout<<"The addition of the two numbers is: "<<res1;			//printing the result
	cout<<"The subtraction of the two numbers is: "<<res2; 		
	return 0;

}


