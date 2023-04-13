#include "main.h"

class Bus {
public:
	string brand;
	string number;
	int price;
	int capacity;

	Bus() {
		brand = "no brand";
		number = "XXXXPM7";
		price = 0;
		capacity = 0;
	}

	Bus(string brnd, string num, int prc, int cpct) {
		brand = brnd;
		number = num;
		price = prc;
		capacity = cpct;
	}
};
