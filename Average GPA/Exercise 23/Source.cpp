#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char gender = ' ';
	double gpa = 0.0;
	int numMale = 0;
	int numFemale = 0;
	int numAll = 0;
	double totalGpaFemale = 0.0;
	double totalGpaMale = 0.0;
	double totalGpaAll = 0.0;
	double avgGpaFemale = 0.0;
	double avgGpaMale = 0.0;
	double avgGpaAll = 0.0;

	cout << fixed << setprecision(1);

	cout << "Gender (M or F only):";
	cin >> gender;
	gender = toupper(gender);

	while (gender == 'M' || gender == 'F')
	{
		cout << "GPA (0.0 to 4.0): ";
		cin >> gpa;
		if (gender == 'M')
		{
			numMale += 1;
			totalGpaMale += gpa;
		}
		else
		{
			numFemale += 1;
			totalGpaFemale += gpa;
		}  //end if

		cout << "Gender (M or F only): ";
		cin >> gender;
		gender = toupper(gender);
	}  //end while

	numAll = numMale + numFemale;
	totalGpaAll = totalGpaMale + totalGpaFemale;

	if (numAll == 0)
		cout << "No GPAs entered." << endl;
	else
	{
		avgGpaAll = totalGpaAll / numAll;
		cout << endl << "Average GPA for all students: " << avgGpaAll << endl;

		if (numMale > 0)
		{
			avgGpaMale = totalGpaMale / numMale;
			cout << "Average GPA for male students: " << avgGpaMale << endl;
		}
		else
			cout << "No GPAs for male students entered." << endl;
		//end if

		if (numFemale > 0)
		{
			avgGpaFemale = totalGpaFemale / numFemale;
			cout << "Average GPA for female students: " << avgGpaFemale << endl;
		}
		else
			cout << "No GPAs for female students entered." << endl;
		//end if
	} //end if
	system("pause");
	return 0;
}	//end of main function