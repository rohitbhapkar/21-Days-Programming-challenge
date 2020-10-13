					// 21 DAYS OF PROGRAMMING CHALLENGE - DAY 9

//C++ Program to Find Minimum Element in an Array using Linear Search

#include<iostream>
using namespace std;
int main() {
   int n, i, minimum, a[10] = {1, 6, 7, 10, 12, 14, 12, 16, 20, 26};
   char ch;
   minimum = a[0];
   cout<<"\nThe data element of array:";
   for(i = 0; i < 10; i++) {
      cout<<" "<<a[i];
      if(minimum > a[i])
         minimum= a[i];
   }
   cout<<"\n\nMinimum of the data elements of array using linear search is: "<<minimum;
   return 0;
}
