//libraries needed for this program
#include <iostream>
#include <iomanip>

using namespace std;

//cost of tickes listed as constants
const double cost_P1 = 70;
const double cost_P2 = 40;
const double cost_P3 = 30;
const double cost_P4 = 23;
const double cost_P5 = 17;
//tax percentage listed as constant
const double sales_tax = 0.0825;

int main()
{
	//declaring variables for total number of tickets
	int num_P1, num_P2, num_P3, num_P4, num_P5;
	//declaring variables for total cost of each type of ticket
	double total_P1, total_P2, total_P3, total_P4, total_P5;
	//variables for total values
	double sub_total, tax_amt, total_amt;

	//information about program printed on screen
	//double line spacing for apperance
	cout << "Name:Kevin Davis\n";
	cout << "Course:CS1044, Spring 2018, Dr.Johnson\n\n";
	cout << "Purpose:This program allows a user to input the type of tickets\n";
	cout << "they would like and then it will calculate the total cost \n";
	cout << "of the tickets along with the associated taxes and show a \n";
	cout << "detailed print out to the user.\n";
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n";


	// input from user asking how many tickets they want
	cout << "How many P1 tickets would you like ?\n";
	cin >> num_P1;
	cout << "How many P2 tickets would you like ?\n";
	cin >> num_P2;
	cout << "How many P3 tickets would you like ?\n";
	cin >> num_P3;
	cout << "How many P4 tickets would you like ?\n";
	cin >> num_P4;
	cout << "How many P5 tickets would you like ?\n";
	cin >> num_P5;

	//calculations for total cost of each type of ticket
	total_P1 = cost_P1 * num_P1;
	total_P2 = cost_P2 * num_P2;
	total_P3 = cost_P3 * num_P3;
	total_P4 = cost_P4 * num_P4;
	total_P5 = cost_P5 * num_P5;

	//calculations for total values
	sub_total = total_P1 + total_P2 + total_P3 + total_P4 + total_P5;
	tax_amt = sub_total * sales_tax;
	total_amt = sub_total + tax_amt;

	//output shown to the user
	//the line below is used to show the information to 2 decimal places.
	cout << fixed << setprecision(2);
	//the lines below are only for aesthetic purposes
	cout << "- - - - - - - - - - - - - - - - - - - - - - -\n";
	cout << num_P1 << " P1 tickets totalling $" << setw(7) << total_P1 << endl;
	cout << num_P2 << " P2 tickets totalling $" << setw(7) << total_P2 << endl;
	cout << num_P3 << " P3 tickets totalling $" << setw(7) << total_P3 << endl;
	cout << num_P4 << " P4 tickets totalling $" << setw(7) << total_P4 << endl;
	cout << num_P5 << " P5 tickets totalling $" << setw(7) << total_P5 << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - -\n";
	cout << "Subtotal:   $" << setw(7) << sub_total << endl;
	cout << "Tax Amount: $" << setw(7) << tax_amt << endl;
	cout << "Total Cost: $" << setw(7) << total_amt << endl;
	//double line spacing for apperance
	cout << "- - - - - - - - - - - - - - - - - - - - - - -\n\n";
	cout << "Thank You For Your Purchase \n\n";

	//allows user to view the information
	system("pause");


return 0;
}
