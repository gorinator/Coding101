// BMI_Calculator.cpp : 19. Калькулятор боди-массы (ИМТ): Создать приложение для расчета индекса массы тела (ИМТ) на основе роста и веса пользователя.
#include <iostream>
using namespace std;

int main()
{
    cout << "A program that calculates the body mass index" << endl << endl;

    double height; // Рост.
    double weight; // Вес.
    double indeks; // Индекс массы тела.

    cout << "Enter your height = "; // Введите свой рост.
    cin >> height;
    cout << "Enter your body weight = "; // Введите свой вес тела.
    cin >> weight;

    height = height / 100;
    indeks = (weight / height / height);

    cout << "Body Mass Index = " << indeks << endl;

    if (indeks <= 18.5) {
        cout << "Insufficient (deficiency) body weight" << endl; // Недостаточная (дефицит) масса тела.
    }
    else if ((indeks >= 18.5) && (indeks < 25)) { 
        cout << "Normal body weight" << endl; // Нормальная масса тела.
    }
    else if ((indeks >= 25) && (indeks < 30)) {
        cout << "Overweight (pre-obesity)" << endl; // Избыточная масса тела (предожирение).
    }
    else if ((indeks >= 30) && (indeks < 35)) {
        cout << "Obesity of the first degree" << endl; // Ожирение первой степени.
    }
    else if ((indeks >= 35) && (indeks < 40)) {
        cout << "Second degree obesity" << endl; // Ожирение второй степени. 
    }
    else if (indeks >= 40) {
        cout << "Obesity of the third degree (morbid)" << endl; // Ожирение третьей степени (морбидное).
    }
    return 0;
}


