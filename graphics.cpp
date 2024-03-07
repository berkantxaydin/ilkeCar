#include <iostream>
#include <iomanip>
#include "bridge.h"

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;
using std::right;
using std::internal;

void setTextColor(int colorCode) {
    cout << "\033[" << colorCode << "m";
    //30-37: Black, Red, Green, Yellow, Blue, Magenta, Cyan, White
    //90-97: Bright Black, Bright Red, Bright Green, Bright Yellow, Bright Blue, Bright Magenta, Bright Cyan, Bright White
}

void resetColor() {
    cout << "\033[0m";
}
void logoArt(){
setTextColor(95);
const char* logoArt = R"(    *** ILKE CAR ***             _________
                          _.--""'-----,   `"--.._
                       .-''   _/_      ; .'"----,`-,
                     .'      :___:     ; :      ;;`.`.
                    .      _.- _.-    .' :      ::  `..
                 __;..----------------' :: ___  ::   ;;
            .--"". '           ___.....`:=(___)-' :--'`.
          .'   .'         .--''__       :       ==:    ;
      .--/    /        .'.''     ``-,   :         :   '`-.
   ."', :    /       .'-`\\       .--.\ :         :  ,   _\
  ;   ; |   ;       /:'  ;;      /__  \\:         :  :  /_\\
  |\_/  |   |      / \__//      /"--\\ \:         :  : ;|`\|    
  : "  /\__/\____//   """      /     \\ :         :  : :|'||
["""""""""--------........._  /      || ;      __.:--' :|//|
 "------....______         ].'|      // |--"""'__...-'`\ \//
   `|  ILKE   |__;_...--'": :  \    //  |---"""      \__\_/
     """""""""'            \ \  \_.//  /
       `---'                \ \_     _'
                             `--`---')";
cout << logoArt << endl;
resetColor();}

void textLogo(){
setTextColor(94);
const char* textArt = R"(
 /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\ 
( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )
 > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ < 
 /\_/\                                                   /\_/\ 
( o.o )                                                 ( o.o )
 > ^ <       __     __         __  __     ______         > ^ < 
 /\_/\      /\ \   /\ \       /\ \/ /    /\  ___\        /\_/\ 
( o.o )     \ \ \  \ \ \____  \ \  _"-.  \ \  __\       ( o.o )
 > ^ <       \ \_\  \ \_____\  \ \_\ \_\  \ \_____\      > ^ < 
 /\_/\        \/_/   \/_____/   \/_/\/_/   \/_____/      /\_/\ 
( o.o )                                                 ( o.o )
 > ^ <       ______     ______     ______                > ^ < 
 /\_/\      /\  ___\   /\  __ \   /\  == \               /\_/\ 
( o.o )     \ \ \____  \ \  __ \  \ \  __<              ( o.o )
 > ^ <       \ \_____\  \ \_\ \_\  \ \_\ \_\             > ^ < 
 /\_/\        \/_____/   \/_/\/_/   \/_/ /_/             /\_/\ 
( o.o )                                                 ( o.o )
 > ^ <                                                   > ^ < 
 /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\  /\_/\ 
( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )( o.o )
 > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ <  > ^ < )";
cout << textArt << endl;
resetColor();}


void carTableGraphic(struct car* cars){
system("cls");
logoArt();
setTextColor(94);
cout << left << setw(15) << "Brand"
             << setw(15) << "Model"
             << setw(10) << "Year"
             << setw(10) << "Color"
             << setw(10) << "Class"
             << setw(10) << "Price" << endl;
setTextColor(96);
for (int i = 0; i < 3; ++i) {
cout << setw(15) << cars[i].brand;
cout << setw(15) << cars[i].model;
cout << setw(10) << cars[i].year;
cout << setw(10) << cars[i].color;
cout << setw(10) << cars[i].clas;
cout << setw(10) << cars[i].price << endl;
}
resetColor();
system("pause");}

void emptinessTable(){
    system("cls");
    logoArt();
    setTextColor(94);
    cout << left << setw(20) << "Day"
     << setw(20) << "Status" << setw(20) << "Day"
     << setw(20) << "Status" << setw(20) << "Day"
     << setw(20) << "Status" << endl;
    setTextColor(96);
    for (int i = 1; i <= 30; ++i) {
    cout << setw(20) << i;
    if (carDate[i]) {
        setTextColor(31);
        cout << setw(20) << "Occupied";
        setTextColor(96);
    }else
      cout << setw(20) << "Available";

    cout << setw(20) << i + 1;
    if (carDate[i + 1]) {
        setTextColor(31);
        cout << setw(20) << "Occupied";
        setTextColor(96);
    }else 
        cout << setw(20) << "Available";
    i++;
}
resetColor();
system("pause>>berkant");}