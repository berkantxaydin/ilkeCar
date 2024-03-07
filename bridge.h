#pragma once

//bools
extern bool carDate[30];

//functions
bool rent();
void checkDays(bool carDate[], int startDay, int endDay);
void markDays(bool carDate[], int startDay, int endDay);
bool checkCars();
void carTable(struct car* cars);
bool userLogin();
bool adminLogin();
bool payMethod();
bool userTotal();
bool yesNo();

//graphics
void setTextColor(int colorCode);
void resetColor();
void logoArt();
void textLogo();
void carTableGraphic(struct car* cars);
void emptinessTable();

//structs
struct car{
    const char* brand;
    const char* model;
    const char* year;
    const char* color;
    const char* clas;
    int price;
    int id;
};