#include <iostream>

using namespace std;

int main()
{

	int Snickers = 2;
	int Galaxy = 2;
	int Hersheys = 3;
	int MnMs = 3;
	int Choice;
	double money;

	cout << "Astral Vending Machine\n\n";

	cout << "How much money do you have? ";
	cin >> money;

	while (Snickers > 0 || Galaxy > 0 || Hersheys > 0 || MnMs > 0) {
		cout << "\nSnacks Available\n1: Snickers(2$)\n2: Galaxy(2$)\n3: Hersheys(3$)\n4: MnMs(3$)\n\nPlease punch in your oder: \n";
		cin >> Choice;
		switch (Choice) {
		case 1:
			if (Snickers > 0 && money >= 2) 
			{
				Snickers--;
				money -= 2;
				cout << "There are " << Snickers << " Snickers left\n";
				cout << "You have " << money << " Dollars left\n";
			}
			else if (money < 2)
			{
				cout << "insufficient balance";
				return 0; //stop program
			}
			else 
			{
				cout << "\nNo Snickers left\n";
			}

			break;

		case 2:
			if (Galaxy > 0 && money >= 2) 
			{
				Galaxy--;
				money -= 2;
				cout << "There are " << Galaxy << " Galaxy left\n";
				cout << "You have " << money << " Dollars left\n";
			}
			else if (money < 2)
			{
				cout << "Insufficient balance";
				return 0;
			}
			else 
			{
				cout << "\nNo Galaxy left\n";
			}
			break;

		case 3:
			if (Hersheys > 0 && money >= 3)
			{
				Hersheys--;
				MnMs -= 3;
				cout << "There are " << Hersheys << " Hersheys left\n";
				cout << "You have " << money << " Dollars left\n";
			}
			else if (money < 3)
			{
				cout << "Insufficient balance.";
				return 0;
			}
			else 
			{
				cout << "\nNo Hersheys left\n";
			}
			break;
		case 4:
			if (MnMs > 0 && money >= 3)
			{
				MnMs--;
				money -= 3;
				cout << "There are " << MnMs << " MnMs left\n";
				cout << "You have " << money << " Dollars left\n";
			}
			else if (money < 3)
			{
				cout << "Insufficient balance";
			}
			else
			{
				cout << "\nNo MnMs left\n";
			}
			break;
		default:
			cout << "Incorrect entry. Please try again.\n";
		}
		
	}

	cout << "The vending machine has ran out";

	return 0;
}