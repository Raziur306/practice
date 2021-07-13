#include<bits/stdc++.h>
using namespace std;
void findISBMcheckDigit()
{
	long long int ISBN, sum = 0, i = 9;
	cout << "\n\n\nEnter 9digit of ISBN number: ";
	cin >> ISBN;
	while (ISBN != 0) {
		sum += (ISBN % 10) * i;
		i -= 1;
		ISBN /= 10;
	}
	cout << "Checked Digit: " << sum % 11;
}
void validityOfISBM()
{
	long long int ISBN, sum = 0, i = 10;
	cout << "\n\nEnter 10 digit of ISBN number: ";
	cin >> ISBN;
	while (ISBN != 0) {
		sum += (ISBN % 10) * i;
		i -= 1;
		ISBN /= 10;
	}
	if (sum % 11 == 0)
	{
		cout << "\nValid ISBN-10\n";
	}
	else
	{
		cout << "\nInvalid ISBN-10\n";
	}
}

void findUPCcheckDigit()
{
	uint64_t  UPC;
	int sum = 0, i = 3;
	cout << "\n\nEnter 11 digit of UPC: ";
	cin >> UPC;
	while (UPC != 0)
	{
		sum += (UPC % 10) * i;
		UPC /= 10;
		if (i == 3)
			i = 1;
		else
			i = 3;
	}
	cout << "Checked Digit: " << 10 - (sum % 10);
}
void validityOfUPC()
{
	uint64_t UPC;
	int sum = 0, i = 1;
	cout << "\n\nEnter 12 digit of UPC: ";
	cin >> UPC;
	while (UPC != 0)
	{
		sum += (UPC % 10) * i;
		UPC /= 10;
		if (i == 3)
			i = 1;
		else
			i = 3;
	}
	if (sum % 10 == 0)
	{
		cout << "Valid UPC\n";
	}
	else
	{
		cout << "Invalid UPC\n";
	}
}
int main()
{
	int menuIndex;
	cout << "1) Find ISBM chaked Digit\n";
	cout << "2) Check ISBM validity.\n";
	cout << "3) Find UPC checked Digit\n";
	cout << "4) Check UPC validity\n";
	cout << "Enter menu: ";
	cin >> menuIndex;

	switch (menuIndex)
	{
	case 1:
		findISBMcheckDigit();
		break;
	case 2:
		validityOfISBM();
		break;
	case 3:
		findUPCcheckDigit();
		break;
	case 4:
		validityOfUPC();
		break;
	}




	return 0;
}