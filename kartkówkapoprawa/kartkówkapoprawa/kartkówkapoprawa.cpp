// kartkówkapoprawa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Napisz program który wczyta dwie liczby, obliczy i wyświetli wyniki według schematu pokazanego na rysunku
void task1()
{
	int firstnumber, secondnumber;

	std::cout << "Podaj pierwszą liczbe.\n";
	std::cin >> firstnumber;
	std::cout << "Podaj drugą liczbę.\n";
	std::cin >> secondnumber;
	std::cout << "wynik\n";
	std::cout <<(firstnumber + secondnumber);

	std::cout << "Podaj pierwszą liczbe.\n";
	std::cin >> firstnumber;
	std::cout << "Podaj drugą liczbę.\n";
	std::cin >> secondnumber;
	std::cout << "wynik\n";
	std::cout << (firstnumber%secondnumber);

	std::cout << "Podaj pierwszą liczbe.\n";
	std::cin >> firstnumber;
	std::cout << "Podaj drugą liczbę.\n";
	std::cin >> secondnumber;
	std::cout << "wynik\n";
	std::cout << (firstnumber - secondnumber);

	std::cout << "Podaj pierwszą liczbe.\n";
	std::cin >> firstnumber;
	std::cout << "Podaj drugą liczbę.\n";
	std::cin >> secondnumber;
	std::cout << "wynik\n";
	std::cout << (firstnumber * secondnumber);
}
//Napisz program który wczyta liczbę i wyświetli jej podwojona wartość na konsoli.
void task2()
{
int liczba;

std::cout << "Podaj liczbę.\n";
std::cin >> liczba;
std::cout << "Wynik podwojonej liczby: ";
std::cout << (liczba * 2);
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	task1();
}