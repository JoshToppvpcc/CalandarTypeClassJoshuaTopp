// CalandarTypeClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "../CalandarClass.h"

using namespace std;

string DayType::dayOfWeek[] = { "Sunday", "Monday", "Tuesday", "Wednesday",
						"Thursday", "Friday", "Saturday" };
void DayType::SetDay(string aDay) {
	int index = 0;
	for (int i = 0; i < 7; i++) {
		if (DayType::dayOfWeek[i] == aDay) {
			index = i;
			break;
		}
		
	}
	day = DayType::dayOfWeek[index];
}
DayType::DayType(string start) {
	SetDay(start);
}

