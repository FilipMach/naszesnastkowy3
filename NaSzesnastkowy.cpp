#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{


	int liczba;
	int a;
	string s;
	int i;
	
	cout << "Przekonwertuj liczbe: ";
	cin >> liczba;
	
	int k = liczba;
	
	cout << "W systemie szesnastkowym: ";
	
	while (2 > 1)	
	{
	
		a = liczba % 16;
	
		if (a < 10)
		{
			s[i]=a;
			i++;
		}
		else
		{
			if (a == 10)
			{
				s[i] = 'A';
				i++;
			}
		
			if (a == 11)
			{
				s[i] = 'B';
				i++;
			}
	
			if (a == 12)
			{
				s[i] = 'C';
				i++;
			}
	
			if (a == 13)
			{
				s[i] = 'D';
				i++;
			}
	
			if (a == 14)
			{
				s[i] = 'E';
				i++;
			}
	
			if (a == 15)
			{
				s[i] = 'F';
				i++;
			}	
		}
	
		if (liczba >= 16)
		{
			liczba = liczba/16;
		}
		else 
		{
			for (int l = s.size(); l = 0; l--)
			{
				cout << s[l];
			}
			break;	
		}
	}

	int b;
	cout << "\n" << "W systemie jedenastkowym: ";

	while (2 > 1)	
	{
	
		b = k % 11;
	
		if (b < 10)
		{
			cout << b;
		}
		else
		{
			if (b == 10)
			{
				cout << "A";
			}
		}
	
		if (k >= 11)
		{
			k = k/11;
		}
		else 
		{
			break;	
		}
	}
	
	
	return 0;
}

