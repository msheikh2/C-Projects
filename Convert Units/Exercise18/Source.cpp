//Created by Mohammad Sheikh on March 27, 2021

#include <iostream>
using namespace std;

//function prototypes
double calcInches();
double calcCentimeters();

int main()
{
	double inches = 0.0;
	double centimeters = 0.0;
	char choice = ' ';

	cout << "Convert to inches (I) or centimeters (C)? ";
	cin >> choice;
	choice = toupper(choice);

	if (choice != 'I' && choice != 'C')
		cout << "Please enter either I or C." << endl;
	else
		if (choice == 'I')
		{
			inches = calcInches();
			cout << "Inches: " << inches << endl;
		}
		else
		{
			centimeters = calcCentimeters();
			cout << "Centimeters: " << centimeters << endl;
		} //end if
	//end if
	return 0;
}	//end of main function

//*****function definitions*****
double calcInches()
{
	double cent = 0.0;
	double inch = 0.0;

	cout << "Centimeters: ";
	cin >> cent;
	inch = cent * 0.393701;
	return inch;
}	//end of calcInches function

double calcCentimeters()
{
	double cent = 0.0;
	double inch = 0.0;

	cout << "Inches: ";
	cin >> inch;
	cent = inch * 2.54;
	system("pause");
	return cent;
	
}	//end of main function
