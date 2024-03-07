#include <iostream>
#include <conio.h>
#include "bridge.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool carDate[30] = { false };
bool rent() {
    bool unvalid;
    int startDay, endDay;
    do {
        system("cls");
        unvalid = false;
        cout << "Enter the start day: ";
        cin >> startDay;
        cout << "Enter the end day: ";
        cin >> endDay;

        if (startDay < 1 || startDay > 30 || endDay < 1 || endDay > 30 || startDay > endDay) {
            cout << "Invalid day range." << endl;
            system("pause");
            unvalid = true;
        }
    } while (unvalid);
    checkDays(carDate, startDay, endDay);
    return true;
}

void checkDays(bool carDate[], int startDay, int endDay){
    for (int i = startDay; i <= endDay; i++) {
        if (carDate[i]) {
            cout << "The car is occupied for the " << i << "th day." << endl;
        }
    }
    system("pause");
    markDays(carDate, startDay, endDay);
}

void markDays(bool carDate[], int startDay, int endDay) {
    for (int i = startDay; i <= endDay; i++) {
        carDate[i] = true;
    }
}

bool checkCars(){
    car car1 = {"Mercedes-Benz", "C-Class", "2022", "Black", "Business", 300};
    car car2 = {"BMW", "3-Series", "2022", "White", "Economy", 100};
    car car3 = {"Audi", "A4", "2022", "Red", "Sport", 200};

    car cars[] = {car1, car2, car3};

    carTable(cars);
    return true;
}

void carTable(struct car* cars){
     carTableGraphic(cars);
}

bool userLogin(){
    system("cls");
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    system("cls");
    if (username == "user" && password == "user") {
        cout << "Login successful." << endl;
    } else {
        cout << "Login failed." << endl;
    }
    system("pause");
    return true;
}

bool adminLogin(){
    system("cls");
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    system("cls");
    if (username == "admin" && password == "admin") {
        cout << "Login successful." << endl;
    } else {
        cout << "Login failed." << endl;
    }
    system("pause");
    return true;
}

bool payMethod(){
    system("cls");
    cout << "Which way you want to pay" << endl;
    cout << "1.Cash   " << "    2.Card" << endl;
    system("pause");
    return true;
}

bool userTotal(){
    system("cls");
    cout << "Your total cost is 500$" << endl;
    system("pause");
    return true;
}

bool yesNo(){
    setTextColor(33);
    cout << endl << "Continue? (y/n) :";
    char yesOrNo;
    yesOrNo = getch();
    return (yesOrNo == 'y' || yesOrNo == 'Y');
    resetColor();
}

