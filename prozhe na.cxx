#include <iostream>

using namespace std;

int main()
{
	int age;
	string permissionCard;

	cout << "Enter your age: ";
	cin >> age;

	if (age < 12)
	{
		cout << "pay 10" << endl;
	}
	else if (age >= 12 && age <= 18)
	{
		cout << "Do you have a permission card? (yes/no): ";
		cin >> permissionCard;
		if (permissionCard == "yes")
		{
			cout << "pay 12" << endl;
		}
		else
		{
			cout << "pay 15" << endl;
		}
	}
	else if (age > 18 && age <= 60)
	{
		cout << "Do you have a permission card? (yes/no): ";
		cin >> permissionCard;
		if (permissionCard == "yes")
		{
			cout << "pay 20" << endl;
		}
		else
		{
			cout << "pay 25" << endl;
		}
	}
	else
	{
		cout << "pay 10" << endl;
	}

	return 0;
}