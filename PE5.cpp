/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>

using namespace std;

//brute force is to increment (by 20) until the number is found
//or we can just check to see if the value is true for all numbers

int main()
{
	int i = 2520;
	while (1)
	{
		if ((i % 11 == 0) &&
			(i % 12 == 0) &&
			(i % 13 == 0) &&
			(i % 14 == 0) &&
			(i % 15 == 0) &&
			(i % 16 == 0) &&
			(i % 17 == 0) &&
			(i % 18 == 0) &&
			(i % 19 == 0) &&
			(i % 20 == 0))
		{
			cout << i;
			break;
		}
		i+=20;
	}
}