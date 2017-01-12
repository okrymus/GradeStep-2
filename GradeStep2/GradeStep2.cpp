// The program grade step 2
// Switch case labs
// Programmer: Panupong Leenawarat
// Last modify: 10/8/15

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double score;

	//Title
	cout << "\t  Assign course grade according to this grading scheme:\n"
		 << "\t                        Lee. Panupong                  \n"
		 << "\t                    grade is \"double\" and            \n"
		 << "\t     there are no if statements or other variables       " << endl << endl;

	cout << "\n\t[93, 100] :  A"
		 << "\n\t[83,  93) :  B"
		 << "\n\t[73,  83) :  C"
		 << "\n\t[63,  73) :  D"
		 << "\n\t[ 0,  63) :  F\n\n";

	while (true)
	{
		cout << "What is the average grade? ";
		cin >> score;    cin.ignore(80, '\n');

		cout << "The letter grade is \'";
		switch (int(score / 10.0 - 0.3))
		{
		case 10:
		case  9:	cout << "A";	break;
		case  8:	cout << "B";	break;
		case  7:	cout << "C";	break;
		case  6:	cout << "D";	break;
		default:	cout << "F";
		}
		cout << "\' because your grade was " << score << endl << endl;
	}
	return 0;
}