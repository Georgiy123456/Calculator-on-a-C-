#include <iostream>
#include <conio.h>
using namespace std;

void printMenu() {
    system("cls");
    std::cout << "\t\t\tCalculator on a C++\n";
    std::cout << "\t\t\t**************\n";
    std::cout << "\t\t\t* 1|  2|  3| *\n";
    std::cout << "\t\t\t* 4|  5|  6| *\n";
    std::cout << "\t\t\t* 7|  8|  9| *\n";
    std::cout << "\t\t\t*     0|     *\n";
    std::cout << "\t\t\t*------------*\n";
    std::cout << "\t\t\t* Made by:-> *\n";
    std::cout << "\t\t\t* G.Mintenko *\n";
    std::cout << "\t\t\t**************\n";
    system("color 0"); cout << "Options: \n";
    system("color 1"); cout << "1. Add\n";
    system("color 2"); cout << "2. Subtract\n";
    system("color 3"); cout << "3. Multiply\n";
    system("color 4"); cout << "4. Divide\n";
    system("color 5"); cout << "5. Raise to power\n";
    system("color 6"); cout << "6. Exit\n";
}

int addition(int a, int b) {
    int r;
    r = a + b;
    return r;
}

int subtraction(int a, int b) {
    int r;
    r = a - b;
    return r;
}

int multiplication(int a, int b) {
    int r;
    r = a * b;
    return r;
}

int division(int a, int b) {
    int r;
    r = a / b;
    return r;
}

int power(int a, int power) {
    int r = 1;
    if (power == 0) {
        r = 1;
        return r;
    }
    else if (power == 1) {
        r = a;
        return r;
    }

    r = a;
    for (int i = 0; i < power; i++) {
        r *= a;
    }
    return r;
}

int main()
{
    char input = 'a';
    while (true) {

        printMenu();

        input = _getch();

        if (input == '1') {
            int a, b;

            cout << "Enter the first summand: ";
            while (!(cin >> a) || (cin.peek() != '\n')) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter the first summand: ";
            }

            cout << "Enter the second summand: ";
            while (!(cin >> b) || (cin.peek() != '\n')) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter the second summand: ";
            }

            std::cout << "\Your answer is: " << addition(a, b) << "\n\n";
            std::cout << "Press any key to continue\n";
            _getch();
        }
        else if (input == '2') {
            int a, b;

            cout << "Enter the minuend: ";
            while (!(cin >> a) || (cin.peek() != '\n')) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter the minuend: ";
            }

            cout << "Enter the subtrahend: ";
            while (!(cin >> b) || (cin.peek() != '\n')) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter the subtrahend: ";
            }

            std::cout << "\nYour answer is: " << subtraction(a, b) << "\n\n";
            std::cout << "Press any key to continue\n";
            _getch();
        }
        else if (input == '3') {
            int a, b;

            cout << "Enter the first multiplier: ";
            while (!(cin >> a) || (cin.peek() != '\n')) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter the first multiplier: ";
            }

            cout << "Enter the second multiplier: ";
            while (!(cin >> b) || (cin.peek() != '\n')) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter the second multiplier: ";
            }

            std::cout << "\nYour answer is: " << multiplication(a, b) << "\n\n";
            std::cout << "Press any key to continue\n";
            _getch();
        }
        else if (input == '4') {
            int a, b;

            cout << "Enter the dividend: ";
            while (!(cin >> a) || (cin.peek() != '\n')) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter the dividend: ";
            }

            cout << "Enter the divider: ";
            while (!(cin >> b) || (cin.peek() != '\n')) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter the divider: ";
            }

            std::cout << "\nYour answer is: " << division(a, b) << "\n\n";
            std::cout << "Press any key to continue\n";
            _getch();
        }
        else if (input == '5') {
            int a, b;

            cout << "Enter the number: ";
            while (!(cin >> a) || (cin.peek() != '\n')) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter the number: ";
            }

            cout << "Enter the power you want to raise your number to: ";
            while (!(cin >> b) || (cin.peek() != '\n')) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter the power you want to raise your number to: ";
            }

            std::cout << "\nYour answer is: " << power(a, b) << "\n\n";
            std::cout << "Press any key to continue\n";
            _getch();
        }
        else if (input == '6') {
            exit(0);
        }
    }

    return 0;
}