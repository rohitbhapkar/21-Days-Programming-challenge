						// 21 DAYS PROGRAMMING CHALLENGE - DAY 2
						
// PROGRAM TO MAKE A SIMPLE CALCULATOR

#include<iostream>
using namespace std;
int main()
{
	int a,b,res1,res2,res3,res4,choice;						// input data
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<"Following are the operations available: "<<endl;		// displaying options
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. EXIT"<<endl;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	while (choice>=1 and choice<=5)						// To stay within the options
	{
		if (choice==1)
		{
			cout<<"The addition is: "<<a+b<<endl;	
		}
		else if (choice==2)								// Checking the input
		{
			cout<<"The subtraction is: "<<a-b<<endl;
		}
		else if(choice==3)
		{
			cout<<"The Multiplication is: "<<a*b<<endl;
		}
		else if (choice==4)
		{
			cout<<"The Division is: "<<a/b<<endl;
		}
		else
		{
		break;
		}
	break;
	}
	if (choice>5)				// If the choice is not within the range
	{
		cout<<"Invalid input";
	}
	return 0;
}
