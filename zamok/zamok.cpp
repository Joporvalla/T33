#include "zamok.h"
#include <iostream>

using namespace std;
int main() {
    int choose;
    zamok zam(false, false, false);
    setlocale(LC_ALL, "Russian");
    do
    {
        cout << "1. Состояние замка" << endl;
        if (zam.get_vkl()) {
            cout << "2. Выключить замок" << endl;
        }
        else {
            cout << "2. Включить замок" << endl;
        }

        if (zam.get_tok()) {
            cout << "3. Отключить ток" << endl;
        }
        else {
            cout << "3. Включить ток" << endl;
        }

        if (zam.get_open()) {
            cout << "4. Закрыть замок" << endl;
        }
        else {
            cout << "4. Открыть замок" << endl;
        }
        cout << "5. Выйти из программы" << endl;

        cout << "Выбирете вариант:" << endl;
        cin >> choose;
        switch (choose)
        {
        case 1:
            zam.get_info();
            break;
        case 2:
            zam.change_vkl();
            break;
        case 3:
            zam.change_tok();
            break;
        case 4:
            zam.change_open();
            break;
        case 5:
            return 0;
        default:
            cout << "Вы ввели неверное значение" << endl;
            break;
        }
    } while (choose != 5);
}