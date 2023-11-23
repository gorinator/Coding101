/*
Задача 3: Тестировщик скорости печати

Описание:
   Разработать приложение, которое предоставляет текст для набора и измеряет скорость печати.

*/

//Приложение для измерения скорости печати.
//подключаем нужные библиотеки.
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");//Подключаем Русский язык в консоль

	//Создаем переменные
	float a, e, f; 
	string text;
	cout << "Nazmite lubuiu knopku i vvodite text!" << endl;//Выводим надпись на экран
	system("pause>null"); //пауза на подготовку
	time_t c = time(NULL);//создаем переменную 'c' с текущим временем в секундах
	getline(cin, text);//вводим и считываем из потока текст, и заносим его в меременную text
	time_t d = time(NULL);//создаем переменную 'd' с текущим временем в секундах
	e = d - c;//вычисляем сколько секунд прошло с момента начала написания текста
	a = text.length();//считываем кол-во символов в переменной text
	cout << endl;
	f = (float)(a / e) * 60;//делим кол-во символов на время и умножаем на 60 секунд.
	cout << "Vi pechataete so skorostiu- " << (float)f << " simvolod v minutu." << endl << endl;;//выводим результат в консоль.

    system("pause");

    return 0;
}
