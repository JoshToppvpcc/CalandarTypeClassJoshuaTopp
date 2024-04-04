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
		//cout << day;
		string nextDay = "no";
		for (int i = 0; i < 6; i++) {
			if (DayType::dayOfWeek[i] == day) {
				nextDay = DayType::dayOfWeek[i + 1];
			
			}
		}
		if (day == DayType::dayOfWeek[6]) {
			nextDay = DayType::dayOfWeek[0];
		}
		string threeDays = 0;
		for (int i = 0; i < 4; i++) {
			if (DayType::dayOfWeek[i] == day) {
				threeDays = dayOfWeek[i + 3];

			}
		}
		if (DayType::dayOfWeek[4] == day) {
			threeDays = DayType::dayOfWeek[0];
			if (DayType::dayOfWeek[5] == day) {
				threeDays = DayType::dayOfWeek[1];
				if (DayType::dayOfWeek[6] == day) {
					threeDays = DayType::dayOfWeek[3];
				}
			}
		}
	cout << "The day after the selected day is " << nextDay << endl;
	cout << "Three days after the selected day is " << threeDays << endl;
	}









