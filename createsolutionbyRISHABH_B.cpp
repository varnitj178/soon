#include<iostream>
#include<conio.h>
using namespace std;

int calculate(int,int);

int main()
{
	int base,power;
	cout<<"Enter the base and power of the number ";
	cin>>base>>power;
	int output = calculate( base, power);
    cout<<output;
	
}

 int calculate(int base, int power)
 {  int total = 1;
 	  for(int i = 0;i<power;i++)
 	  {
 	  		total = total*base;
      }
 return total;
 }
