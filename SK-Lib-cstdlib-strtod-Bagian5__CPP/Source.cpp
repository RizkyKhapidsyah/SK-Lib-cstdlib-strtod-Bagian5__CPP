#pragma warning(disable:4996)

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    // menginisialisasi nilai eksponensial
    char str[] = "-89.04e-3win gfg";
    char* end;
    double number;

    number = strtod(str, &end);
    cout << "str = " << str << endl;
    cout << "double = " << number << endl;
    cout << "end string = " << end << endl << endl;

    // menginisialisasi nilai heksadesimal baru
    strcpy(str, "1998gupta.1204ishwar");

    number = strtod(str, &end);
    cout << "str = " << str << endl;
    cout << "double = " << number << endl;
    cout << "end string = " << end << endl;

    _getch();
    return 0;
}