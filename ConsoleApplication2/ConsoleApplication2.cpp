// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CLcalcul.h"
#include <math.h>

CLcalcul p1, p2;

using namespace std;

int main()
{
	int temp1, temp2;

	cout << "Premier point :" << endl;
	cout << "Donnez la valeur sur x :"; cin >> temp1;
	cout << "Donnez la valeur sur y :"; cin >> temp2;
	p1.placepoint(temp1, temp2);

	cout << "Deuxieme point :" << endl;
	cout << "Donnez la valeur sur x :"; cin >> temp1;
	cout << "Donnez la valeur sur y :"; cin >> temp2;
	p2.placepoint(temp1, temp2);
	cout << endl;
	cout << "La distance entre les deux points est : " << endl;
	cout << p1.distance(p2) << " unites." << endl;
}


