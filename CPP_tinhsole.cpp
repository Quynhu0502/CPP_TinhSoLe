// CPP_tinhsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "nhap so:";
	cin >> x;
	/*for (int i = 1; i < x; i += 2)
	{
		cout << i << " ";
	}*/
	for (int i = 1;  i<= x; i++)
	{

	if ( i% 2 != 0)
	
		cout << i << " ";

	}
	
	
	return 0;
}


