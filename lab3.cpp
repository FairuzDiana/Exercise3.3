// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



void star()
{

	
	cout << "this is lab 4" << endl;
	cout << "<fairuz diana>, Do exercise" << endl << endl;
}


int main()

{
	star();
	float price = 9.90, totalprice;
	int quantity;
	const int DISC = 10;

	cout << "please enter your quantity : " << endl;
	cin >> quantity;
	totalprice = (price*quantity)*(100 - DISC) / 100.00;
	cout << "your total price is  " << totalprice << endl;


	return 0;
}




