//Introductory21.cpp - Displays the average stock price
//Created/revised by <Darya Nosova> on <april 16>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double total = 0.0;
	double average = 0.0;

//calculate total
	for (int x = 0; x < 10; x++)
	{
		total += prices[x];
	}

//calculate average
	average = total / 10;

	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

