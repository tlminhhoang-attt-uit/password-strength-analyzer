#ifndef PASSW
#define PASSW
#include<string>
struct dataa {
	int point = 0;
	int lengt = 0;
	bool upper = 0;
	bool lower = 0;
	bool digit = 0;
	bool speci = 0;
	bool tooshort = 0;
	bool warni = 0;
};
dataa resul(const std::string& password);
#endif 