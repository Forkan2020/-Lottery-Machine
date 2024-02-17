#include<iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
	string name[100]; int exercise[100], mark[100], exGrade[100], markGrade[100];
	string status[10];
	int num;
	cout << "How many students: ";
	cin >> num;

	for (int i = 0; i < num; i++) 
	{
		cout << "Student " << i + 1 << " info\n";
		cout << "Student Name: ";
		cin >> name[i];
		cout << "Amount of Accepted exercise: ";
		cin >> exercise[i];
		cout << "Mark Final Assignment: ";
		cin >> mark[i];
		cout << "\n";
	}

	for (int i = 0; i < num; i++) {
		exGrade[i] = exercise[i] * 100 / 40;
		if (exGrade[i] >= 40 && exGrade[i] < 50) {
			exGrade[i] = 1;
		}
		else if (exGrade[i] >= 50 && exGrade[i] < 60) {
			exGrade[i] = 2;
		}
		else if (exGrade[i] >= 60 && exGrade[i] < 70) {
			exGrade[i] = 3;
		}
		else if (exGrade[i] >= 70 && exGrade[i] < 80) {
			exGrade[i] = 4;
		}
		else if (exGrade[i] >= 80) {
			exGrade[i] = 5;
		}
		else {
			exGrade[i] = 0;
		}
	}
	for (int i = 0; i < num; i++) {
		if (mark[i] >= 40 && mark[i] < 50) {
			markGrade[i] = 1;
		}
		else if (mark[i] >= 50 && mark[i] < 60) {
			markGrade[i] = 2;
		}
		else if (mark[i] >= 60 && mark[i] < 70) {
			markGrade[i] = 3;
		}
		else if (mark[i] >= 70 && mark[i] < 80) {
			markGrade[i] = 4;
		}
		else if (mark[i] >= 80) {
			markGrade[i] = 5;
		}
		else {
			markGrade[i] = 0;
		}
	}

	cout << "ID. ----  Name  --------  Excersize  --------  Mark  --------  Week_Grade  --------  Final_Grade";
	cout << "\n-----------------------------------------------------------------------------------------------\n";
	for (int i = 0; i < num; i++) 
	{
		cout << i+1 << ".  ----  " << name[i] << "  -----------  " << exercise[i] << "  -------------- " << mark[i]
			<< "  ------------  " << exGrade[i] << "  ----------------  " << markGrade[i] << "\n";
	}
}
