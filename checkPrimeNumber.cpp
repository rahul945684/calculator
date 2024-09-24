// checkPrimeNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
/*
this function is used to check if a number is prime or not.

*/

bool checkprime(int num)//function defination for check prime number
{
	bool flag = true;
	for (int i = 2; i < num; i++)
	{

		if (num % i == 0)
		{
			flag = false;
			//return false;
			break;
		}
	}
	return flag;
}
int main()
{
	int number;
	printf("Please enter the number\n");
	scanf_s("%d", &number);
	if (checkprime(number)==true)//function calling
	{
		printf("Number is prime::%d\n", number);
	}
	else
	{
		printf("Number is not prime::%d\n", number);
	}

    std::cout << "Hello World!\n";
}

