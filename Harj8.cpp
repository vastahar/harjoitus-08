// HARJOITUS 8
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;

void main()
{
	int luku1;
	int luku2;
	int luku3;

	cout << "Anna 1. luku: ";
	cin >> luku1;
	cout << "Anna 2. luku: ";
	cin >> luku2;
	cout << "Anna 3. luku: ";
	cin >> luku3;

	if (luku1 < luku2)
		if (luku1 < luku3)
			if (luku3 < luku2)
				cout << luku1 << " " << luku3 << " " << luku2 << endl;
			else
				cout << luku1 << " " << luku2 << " " << luku3 << endl;
		else
			cout << luku3 << " " << luku1 << " " << luku2 << endl;
	else
		if (luku1 < luku3)
			cout << luku2 << " " << luku1 << " " << luku3 << endl;
		else
			if (luku3 < luku2)
				cout << luku3 << " " << luku2 << " " << luku1 << endl;
			else
				cout << luku2 << " " << luku3 << " " << luku1 << endl;
}