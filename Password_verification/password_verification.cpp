#include"password_verification.h"
#include <cctype>
using namespace std;
dataa resul(const string& password) {
	dataa outco;
	if (password.size() > 128) {
		outco.warni = 1;
		return outco;
	}
	
	outco.lengt = static_cast<int>(password.size());
	outco.tooshort = (outco.lengt < 8);
	for (char a : password) {
		if (isupper(static_cast<unsigned char>(a))) {
			outco.upper = 1;
		}
		else if(islower(static_cast<unsigned char>(a))){
			outco.lower = 1;
		}
		else if (isdigit(static_cast<unsigned char>(a))) {
			outco.digit = 1;
		}
		else {
			outco.speci = 1;
		}
	}
	if (!outco.tooshort) {
		outco.point += 30;
	}
	if (outco.upper) {
		outco.point += 15;
	}
	if (outco.lower) {
		outco.point += 15;
	}
	if (outco.digit) {
		outco.point += 20;
	}
	if (outco.speci) {
		outco.point += 20;
	}
	if (outco.point > 100) {
		outco.point = 100;
	}
	return outco;
}
