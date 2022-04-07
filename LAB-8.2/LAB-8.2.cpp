// LAB-8.2.cpp
// Сушинський Ігор
// Лабораторна робота №8.2
// Опрацювання літерних рядків.
// Варіант 18

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    char str[256], tmp[256], min[256];

    cout << "Ввести лiтерний рядок:" << endl;
    cin.getline(str, 256);

    istringstream ist(str); // перетворює рядок у потік
    ist >> min;
    while (ist >> tmp)
    {
        if (strlen(tmp) < strlen(min))
            strcpy(min, tmp);
    }
    cout << "Довжина найкоротшого слова = " << strlen(min) << endl;
    cout << "Найкоротше слово = " << min << endl;

    return 0;
}