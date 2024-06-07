﻿// практос 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int fact(int n) {

    return (n == 0) || (n == 1) ? 1 : n * fact(n - 1);
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int n; 
    float x, y;
    bool work;
    work = true;
    while (work)
    {
        cout << "Выберите действие:\n 1. Сложение.\n 2. Вычитание.\n 3. Умножение.\n 4. Деление.\n 5. Возведение в степень.\n 6. Нахождение квадратного корня.\n 7. Нахождение 1% от числа.\n 8. Нахождение факториала числа.\n 9. Выход из программы.\n";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Введите первое число ";
            cin >> x;
            cout << "Введите второе число ";
            cin >> y;
            cout << x + y << endl;
            break;
        case 2:
            cout << "Введите первое число ";
            cin >> x;
            cout << "Введите второе число ";
            cin >> y;
            cout << x - y << endl;
            break;
        case 3:
            cout << "Введите первое число ";
            cin >> x;
            cout << "Введите второе число ";
            cin >> y;
            cout << x * y << endl;
            break;
        case 4:
            cout << "Введите первое число ";
            cin >> x;
            cout << "Введите второе число ";
            cin >> y;
            cout << x / y << endl;
            break;
        case 5:
            cout << "Введите число ";
            cin >> x;
            cout << "Введите степень ";
            cin >> y;
            cout << pow(x, y) << endl;
            break;
        case 6:
            cout << "Введите число ";
            cin >> x;
            cout << sqrt(x) << endl;
            break;
        case 7:
            cout << "Введите число ";
            cin >> x;
            cout << x / 100;
            break;
        case 8:
            cout << "Введите число ";
            cin >> x;
            cout << fact(x) << endl;
            break;
        default:
            work = false;
            break;
        }
    }
    

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
