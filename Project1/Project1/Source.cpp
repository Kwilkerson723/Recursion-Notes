#include <iostream>
#include <string>
using namespace std;

int factorial(int n);

int main()
{
	cout << "Enter a number: ";
	int number;
	cin >> number;

	auto answer = factorial(number);
	cout << endl << "Factorial of " + to_string(number) + " = " + to_string(answer) << endl;

	system("pause");

	return 0;
}

int factorial(int n)
{
	/*
	int g = 50;
	string b = "bob";
	long r = 12345;

	calling random variables = call stack still keeps track of everything in scope,
	even if they are not being used (using up a lot of memory)
	*/

	/*
	With recursion
	check if it is time to return n
	if (n == 1)
	{
	return n;
	}
	return n * factorial(n - 1);
	*/

	//entering neg number = infinite loop, n will never == 1
	//recursion = bad when it's hard to read, uses up lot of stack space
	//recursion = calling a method

	//without recursion - while loop
	//while loop = no call stack entries
	//recursion can always be rewritten using a while loop / iteration

	int answer = n;
	while (n > 1)
	{
		//3 * (3 - 1)
		answer *= n - 1;
		//3 - 1
		n -= 1;
	}
	return answer;

	/*
	tale end recursion = most efficient

	if (n == 1)
	{
	return n;
	}
	return n * factorial(n - 1);
	*/
}
