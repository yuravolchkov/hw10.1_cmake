#include "CMakeHW101.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
    system("chcp 1251"); // настроить кодировку консоли
    system("cls"); // очистить экран
    string Name_Enter;
    cout << "Введите имя: ";
    cin >> Name_Enter;
    cout << "\nЗдравствуйте," << Name_Enter << "!" << endl;

    return 101;

}
