					// 21 DAYS PROGRAMMING CHALLENGE

// PROGRAM TO FIND THE POSITION OF AN ELEMENT IN AN ARRAY

#include<iostream>
using namespace std;
int main()
{
	char arr[10], ele;
    int i, n, pos;
    cout << "Enter size of the array : ";
    cin >> n;
    cout << "\nEnter elements of the array : ";
    for (i = 1; i <= n; i++)
        cin >> arr[i];
    cout << "\nEnter the position : ";
    cin >> pos;
    for (i = 1; i <= n; i++)
        if (pos == i)
            ele = arr[i];
    cout << "\nElement at position " << pos << " is : " << ele;
    return 0;
}
