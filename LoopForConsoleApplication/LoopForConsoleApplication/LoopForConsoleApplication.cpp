// LoopForConsoleApplication.cpp 
#include <iostream>

/*
* Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

* Napisz program, który wypisze liczby od 10 do 1 w odwrotnej kolejności.

* Napisz program, który obliczy iloczyn liczb od 1 do podanej przez użytkownika.

* Napisz program, który wypisze w kolejnych liniach rosnącą liczbę cyfr, np.:
1
12
123
1234

*/


using namespace std;

// Napisz program, który wyświetli "Hello world" tyle razy ile chce użytkownik
void task1() {
    int howManyTimes;
    cout << "Podaj ile razy wyswietlic: ";
    cin >> howManyTimes;

    for (int i = 0; i < howManyTimes; i++) {
        cout << "Hello world\n";
    }
}

// Napisz program, który wyświetli liczby parzyste do podanej przez użytkownika
void task2() {
    int upperRange;
    cout << "Podaj gorna granice: ";
    cin >> upperRange;

    for (int i = 0; i <= upperRange; i = i + 2) {
        cout << i << " ";
    }
    cout << endl;
}

// Program obliczający sumę liczb od 1 do 100
void task3() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    cout << "Suma: " << sum << endl;
}

// Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task4() {
    for (int i = 3; i <= 100; i = i + 3) {
        cout << i << " ";
    }
    cout << endl;
}

// Napisz program, który wypisze liczby od 10 do 1 w odwrotnej kolejności
void task5() {
    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}

// Napisz program, który obliczy iloczyn liczb od 1 do podanej przez użytkownika
void task6() {
    int n;
    long long w = 1;
    cout << "Podaj liczbe n: ";
    cin >> n;

    for (int i = 1; i <= n; i = i + 1) {
        w = w * i;
    }
    cout << "Iloczyn: " << w << endl;
}

// Napisz program, który wypisze w kolejnych liniach rosnącą liczbę cyfr
void task7()
{
    int n;
    cout << "Podaj liczbe linii: ";
    cin >> n;

    for (int i = 1; i <= n; i = i + 1) {
        for (int j = 1; j <= i; j = j + 1) {
            cout << j;
        }
        cout << endl;
    }
}

int main() 
{
    task7();
}