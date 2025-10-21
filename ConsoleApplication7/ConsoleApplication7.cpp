#include<iostream>        
#include<iomanip>     //2x+5y=90
#include<string>
using namespace std;
void main()
{
	int counter = 0, i, j;
	for (i =0;i <= 45;i++)
	{
		counter++;
		for (j = 0;j <= 18;j++)
		{
			counter++;
			if (2 * i + 5 * j == 90)
			{
				counter++;
			}
			counter++;
		}
		counter++;
	}
	counter++;
	cout << counter;
	cout<<hello;
}


