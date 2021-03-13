#pragma once
#pragma warning(disable:4996)

#include <string.h>
#include <iostream>

using namespace std;

class DaysOfYearClass {

private: int totalDays;
private:

	struct monthAndDays {
		int days;
		char  monthName[20];
	};

	struct monthAndDays obj[12];

public:

	DaysOfYearClass() {
		strcpy(obj[0].monthName, "January");
		obj[0].days = 31;
		strcpy(obj[1].monthName, "February");
		obj[1].days = 28;
		strcpy(obj[2].monthName, "March");
		obj[2].days = 31;
		strcpy(obj[3].monthName, "April");
		obj[3].days = 30;
		strcpy(obj[4].monthName, "May");
		obj[4].days = 31;
		strcpy(obj[5].monthName, "June");
		obj[5].days = 30;
		strcpy(obj[6].monthName, "July");
		obj[6].days = 31;
		strcpy(obj[7].monthName, "August");
		obj[7].days = 31;
		strcpy(obj[8].monthName, "September");
		obj[8].days = 30;
		strcpy(obj[9].monthName, "October");
		obj[9].days = 31;
		strcpy(obj[10].monthName, "November");
		obj[10].days = 30;
		strcpy(obj[11].monthName, "December");
		obj[11].days = 31;
	}

	~DaysOfYearClass() {

	}

	void setDay(int dayValue) {
		this->totalDays = dayValue;
	}

	void print() {
		char tempMonth[20] = "January";

		for (int i = 0; i < 12; i++) {
			if (totalDays > obj[i].days) {
				totalDays -= obj[i].days;
				strcpy(tempMonth, obj[i + 1].monthName);
			} else {
				break;
			}
		}

		cout << "\n " << tempMonth << " " << totalDays;
	}
};