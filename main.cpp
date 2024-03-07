#include <iostream>
//#include <fstream> 
#include <conio.h>
//#include <stdlib.h>
#include <iomanip>
//#include <ctime>
//#include <string.h>
#include "bridge.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;

void home ();
int options();
void actions(int& opt);

bool flag = true;

int main (void) {
	textLogo();
	system("PAUSE");
	system("cls");

	while(flag) {
        home();
	}

	cout << " Good Bye!" << endl;
    system("pause>>berkant");
}

void home () {
	logoArt();
	int opt = options();
	if (opt <= 8) {
		actions(opt);
	} else if (opt > 8) {
		cout << endl << "!!! Enter Valid option !!!" << endl;
		system("PAUSE");
	    system("cls");
	}
}

int options() {
	setTextColor(36);
	cout << "1. User Login"<< endl;
	cout << "2. Check Cars"<< endl;
	cout << "3. Emptiness"<< endl; 
	cout << "4. Cashout Method"<< endl;
	cout << "5. Confirmation"<< endl;
	cout << "6. Leasing"<< endl;
	cout << "7. Admin Panel"<< endl;
	cout << "0. Exit"<< endl;
	resetColor();
	cout << "Enter one option: ";

	int ch = getch();
    int selectedOption = ch - '0';
	return selectedOption;
} 

void actions(int& opt) {
	switch(opt) {
		case 1: 
            cout <<"User Card";
			if(yesNo()){
                   userLogin();}
			system("cls");
			break;
		case 2: 
            cout <<"Check Cars";
			if(yesNo()){
				checkCars();}
			system("cls");
			break;
		case 3: 
            cout <<"Check Calender";
			if(yesNo()){
				emptinessTable();}
			system("cls");
			break;
		case 4: 
            cout <<"Payment Method";
			if(yesNo()){
				payMethod();}
			system("cls");
			break;
		case 5: 
			cout <<"Total Cost";
			if(yesNo()){
				userTotal();}
			system("cls");
			break;
		case 6: 
		    cout <<"Leasing";
		    if(yesNo()){
				rent();}
			system("cls");
			break;
	    case 7:
		    cout <<"Admin Portal";
			if(yesNo()){
				userLogin();}
			system("cls");
			break;
	    case 0:
		    flag = false;
	}
}