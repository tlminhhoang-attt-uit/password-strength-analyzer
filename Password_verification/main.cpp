#include"password_verification.h"
#include<iostream>
#include<string>
using namespace std;
void displ(const int& score) {
	int fill = score / 5;
	cout << "Strength          :     [";
	for (int a = 1; a <= 20; a++) { 
		if (a <= fill) {
			cout << "\033[32m+\033[0m";
		}
		else {
			cout << "\033[31m-\033[0m" ;
		}
	}
	cout << "]: " << score << "/100\n";
}
int main() {
	string passw;
	cout << "=======================================================\n";
	cout << "||                                                   ||\n";
	cout << "||        EVALUATE THE STRENGTH OF A PASSWORD        ||\n";
	cout << "||                                                   ||\n";
	cout << "=======================================================\n";
	cout << "Please enter your password with no more than 128 characters: ";
	getline(cin, passw);
	cout << '\n';
	dataa outco = resul(passw);
	if (outco.warni == 1) {
		cout << "Invalid";
		return 0;
	}
	cout << "=======================================================\n";
	cout << "||                                                   ||\n";
	cout << "||                       RESULT                      ||\n";
	cout << "||                                                   ||\n";
	cout << "=======================================================\n";

	cout << "Length            :     " << outco.lengt << " \n";
	if (outco.tooshort) {
	   cout << "Warning           :     Your password is too short \n";
	}
	cout << "Upper             :   ";
	if (outco.upper) {
		cout << "\033[32m  V  \n\033[0m";
	}
	else {
		cout << "\033[31m  X  \n\033[0m";
	}
	cout << "Lower             :   ";
		if (outco.lower) {
			cout << "\033[32m  V  \n\033[0m";
		}
		else {
			cout << "\033[31m  X  \n\033[0m";
		}
	cout << "Digit             :   ";
		if (outco.digit) {
			cout << "\033[32m  V  \n\033[0m";
		}
		else {
			cout << "\033[31m  X  \n\033[0m";
		}
		cout << "Special characters:   ";
		if (outco.speci) {
			cout << "\033[32m  V  \n\033[0m";
		}
		else {
			cout << "\033[31m  X  \n\033[0m";
		}
	displ(outco.point);
	cout << "Rating            :     ";
	if (outco.point < 30) {
		cout << "Very weak";
	}
	else if (outco.point < 50) {
		cout << "Weak";
	}
	else if (outco.point < 70) {
		cout << "Medium";
	}
	else if (outco.point < 85) {
		cout << "Strong";
	}
	else {
		cout << "Very strong";
	}
	cout << "\n\n\n";
	return 0;
}