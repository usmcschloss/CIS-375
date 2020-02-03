#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

void TitlePrint()
{
	cout << setfill(' ') << setw(35) << "" << setfill('*') << setw(50) << "" << endl;
	cout << setfill(' ') << setw(35) << "" << setfill('*') << setw(50) << setw(50) << "" << endl;
	cout << setfill(' ') << setw(35) << "" << setfill('*') << setw(3) << "" << setfill(' ') << setw(44) << "" << setfill('*') << setw(3) << "" << endl;
	cout << setfill(' ') << setw(35) << "" << setfill('*') << setw(3) << "" << setfill(' ') << setw(44) << "" << setfill('*') << setw(3) << "" << endl;
	cout << setfill(' ') << setw(35) << "" << setfill('*') << setw(3) << "" << setfill(' ') << setw(14) << "" << "Title Goes Here" << setw(15) << "" << setfill('*') << setw(3) << "" << endl;
	cout << setfill(' ') << setw(35) << "" << setfill('*') << setw(3) << "" << setfill(' ') << setw(44) << "" << setfill('*') << setw(3) << "" << endl;
	cout << setfill(' ') << setw(35) << "" << setfill('*') << setw(3) << "" << setfill(' ') << setw(44) << "" << setfill('*') << setw(3) << "" << endl;
	cout << setfill(' ') << setw(35) << "" << setfill('*') << setw(50) << "" << endl;
	cout << setfill(' ') << setw(35) << "" << setfill('*') << setw(50) << "" << endl;
}

void CheckingsAcc();
void CreditCards_Stores();
void EntitlementsDeductions();
void Estate();
void Investments();
void Loans();
void Retirement();
void SavingsAcc();
void Travel();
void Vacation();

void OptionsMenu(char optionSelect)
{
	cout << setfill(' ') << endl << endl << endl;
	cout << setw(50) << "" << "A) Checkings Account" << endl;
	cout << setw(50) << "" << "B) Credit Cards / Store(s)" << endl;
	cout << setw(50) << "" << "C) Entitlements and Seductions" << endl;
	cout << setw(50) << "" << "D) Real Estate / Home Owner" << endl;
	cout << setw(50) << "" << "E) Investments" << endl;
	cout << setw(50) << "" << "F) Loans" << endl;
	cout << setw(50) << "" << "G) Retirement" << endl;
	cout << setw(50) << "" << "H) Savings Accounts" << endl;
	cout << setw(50) << "" << "I) Travel" << endl;
	cout << setw(50) << "" << "J) Vacation" << endl << endl;

	cout << setw(40) << "" << "Please choose one of the options above: ";
	cin >> optionSelect;
	optionSelect = tolower(optionSelect);

	switch (optionSelect)
	{
	case 'a': CheckingsAcc();
		break;
	case 'b': CreditCards_Stores();
		break;
	case 'c': EntitlementsDeductions();
		break;
	case 'd': Estate();
		break;
	case 'e': Investments();
		break;
	case 'f': Loans();
		break;
	case 'g': Retirement();
		break;
	case 'h': SavingsAcc();
		break;
	case 'i': Travel();
		break;
	case 'j': Vacation();
		break;
	default: cout << "Invalid entry, please try again!" << endl;
		OptionsMenu(optionSelect);
		break;
	}
}


int main()
{
	char optionSelect = ' ';
	char userContinue = 'a';

	TitlePrint();

	while (userContinue != 'N')
	{
		OptionsMenu(optionSelect);

		while (userContinue != 'Y' && userContinue != 'N')
		{
			cout << "Would you like to select another option? (Y / N): ";
			cin >> userContinue;
			userContinue = toupper(userContinue);
			if (userContinue != 'Y' && userContinue != 'N')
			{
				cout << "Invalid entry, please try again!" << endl;
			}
		}
	}

	return 0;
}


void CheckingsAcc()
{
	cout << "Success - Checkings" << endl;
}
void CreditCards_Stores()
{
	cout << "Success - credit" << endl;
}
void EntitlementsDeductions()
{
	cout << "Success - ent / ded" << endl;
}
void Estate()
{
	cout << "Success - estate" << endl;
}
void Investments()
{
	cout << "Success - invesments" << endl;
}
void Loans()
{
	cout << "Success - loans" << endl;
}
void Retirement()
{
	cout << "Success - retirement" << endl;
}
void SavingsAcc()
{
	cout << "Success - savings" << endl;
}
void Travel()
{
	cout << "Success - travel" << endl;
}
void Vacation()
{
	cout << "Success - vacation" << endl;
}