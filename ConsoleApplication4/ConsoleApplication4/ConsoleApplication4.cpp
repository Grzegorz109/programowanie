// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

	/*

	DRY - don't repeat yourself
	KISS - kept it simple stiupid

	Operatry warunkowe:
	>		- większy
	<		- mniejszy
	>=		- wiekszy bądź równy
	<=		- mniejszy bądź równy
	==		- równy
	!=		- różny

	Operatory logiczne:
	&&	-	AND
	||	-	OR
	!	-   NOT

	a	b		a && b		a || b		!a
	F	F		  F			   F		 T
	F	T		  F			   T		 T
	T	F		  F			   T		 F
	T	T	      T			   T		 F

	a && b || c && d


	*/

	/*

	*.
	*. Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.
	*/

	//Napisz program, który wyświetli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbę całkowitą:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Podana liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "Podana liczba jest ujemna\n";

	if (number == 0)
		std::cout << "Podana liczba nie jest dodatnia ani ujemna\n";

	std::cout << "Koniec programu\n";
}

//Napisz program, który wyświetli informacje czy liczba jest parzysta czy nieparzysta.
void task2()
{
	int number;
	std::cout << "Podaj liczbę całkowitą:\n";
	std::cin >> number;

	int reminderOfDivision;
	reminderOfDivision = number % 2;

	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta\n";

	if (reminderOfDivision == 0) // == 1 
		std::cout << "Podana liczba jest nieparzysta\n";

	//--------------------------------------------------------
	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta\n";
	else
		std::cout << "Podana liczba jest nieparzysta\n";
}

//Napisz program, który wyświetli informacje czy liczba jest z zakresu <1 ; 10).
void task3()
{
	int number;
	std::cout << "Podaj liczbę całkowitą:\n";
	std::cin >> number;

	//wersja 1
	if (number >= 1)
	{
		if (number < 10)
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	}

	//wersja 2
	if (number >= 1)
		if (number < 10)
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba nie jest w zakresie <1;10)\n";

	//wersja 3
	if (number >= 1 && number < 10)
		std::cout << "Liczba jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba nie jest w zakresie <1;10)\n";

	//wersja 4
	if (number < 1 || number >= 10)
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba jest w zakresie <1;10)\n";

	//wersja 5
	if (!(number >= 1 && number < 10))
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba jest w zakresie <1;10)\n";
}

//Napisz program, który wykona dzielenie dwóch liczb
void task4()
{
	int dividend, divisor;
	std::cout << "Podaj dzielnik:\n";
	std::cin >> dividend;
	std::cout << "Podaj dzielną:\n";
	std::cin >> divisor;

	if (divisor != 0)
	{
		int quoitent = dividend / divisor;
		std::cout << "Wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "Dzzielenie przez zero!!!\n";
}



//.Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe.Wyświetl odpowiedni komunikat.
void task5()
{
	int liczba1, liczba2;

	std::cout << "Podaj pierwszą liczbę całkowitą: ";
	std::cin >> liczba1;
	std::cout << "Podaj drugą liczbe: ";
	std::cin >> liczba2;
	if (liczba1 == liczba2) {
		std::cout << "Liczby są równe ";
	}
	else {
		std::cout << "Liczby nie są równe ";
	}
}
//.Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia.Wyświetl odpowiedni komunikat.
void task6()
{
	int firstnumber;

	std::cout << "Podaj wiek:";
	std::cin >> firstnumber;
	if (firstnumber >= 18) {
		std::cout << "Jestesć połnoletni/a";
	}
	else {
		std::cout << "Nie jesteś pełnoletni/a";
	}
}
//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną.Wyświetl wynik
void task7()
{
	int liczba;
	std::cout << "Podaj liczbę całkowitą:";
	std::cin >> liczba;

	if (liczba < 0) {
		liczba = -liczba;
	}
	std::cout << "Wartość liczby bezwzględnej wynosi:" << liczba;

}
//Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny. Wyświetl odpowiedni komunikat.
void task8()
{
	int year;
	std::cout << "Podaj rok";
	std::cin >> year;


	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		std::cout << "Rok jest przystępny";

	else
		std::cout << "liczba1" << "liczba1" << "nie jest przestępny.";
}
//Program sprawdzający czy podana data jest poprawna
void task9()
{
int day, month, year;
std::cout << "Podaj dzien:\n";
std::cin >> day;
std::cout << "podaj miesiąc:";
std::cin >> month;
std::cout << "Podaj rok:";
std::cin >> year;

	if (day >= 1 && day <= 31
		&& month >= 1 && month <= 12
		&& year != 0
		&& ( day != 31 && (month == 4 || month == 6 || month == 9 || month == 11 ))
		&& month == 2 && (day <= 28
						|| day == 29 && (year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		)
	{
		std::cout << "Data" << day << "." << year << "jest poprawna\n";
	}
	else
	{
		std::cout << "data nie jest poprawna";
	}
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	void task9();
}