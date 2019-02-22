#include<iostream>                                 //подкючение стандартных библиотек
#include<clocale>

#include"UnlimitedFunct.h"                         //полключение собственных функций
using namespace std;
/* вариант 4. Перегруженную функцию для вычитания:
· целых чисел;
· комплексных чисел.
Написать функцию min с переменным числом параметров, которая находит минимальное из чисел типа int. 
Написать вызывающую функцию main, которая обращается к функции min не менее трехраз с количеством
параметров 5, 10, 12.
*/




void main() {

	int a[5];
	cout << "sluchainie 5 elementov:";             //вывод пяти случайных элементов 
	for (int i = 0; i < 5; i++) {
		a[i] = rand() % 20;
		cout << " " << a[i];
	}
	cout << endl;
	int m1;
	//нахождение минимального элемента в массиве пяти случайных элементов 
	min(&m1, 5, a[0], a[1], a[2], a[3], a[4]);
	cout << "minimal element:" << m1;              // вывод минимального эллемента   
	cout << endl;
	cin.get();




	int b[10];
	cout << "sluchainie 10 elementov:";            //вывод десяти случайных элементов 
	for (int i = 0; i < 10; i++) {
		b[i] = rand() % 20;
		cout << " " << b[i];
	}
	cout << endl;
	int m2;
	//нахождение минимального элемента в массиве десяти случайных элементов 
	min(&m2, 10, b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], b[9]);
	cout << "minimal element:" << m2;              // вывод минимального эллемента 
	cout << endl;
	cin.get();




	int c[12];
	cout << "sluchainie 12 elementov:";            //вывод двенадцати случайных элементов 
	for (int i = 0; i < 12; i++) {
		c[i] = rand() % 20;
		cout << " " << c[i];
	}
	cout << endl;
	int m3;
	//нахождение минимального элемента в массиве двенадцати случайных элементов 
	min(&m3, 12, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11]);
	cout << "minimal element:" << m3;              // вывод минимального эллемента 
	cout << endl;
	cin.get();


	//нахождение разности целых чисел типа double
	cout << "Vvedite umenhaemoe i vichitaemoe" << endl;
	double q;                                   //переменная "q" - уменьшаемое 
	double w;                                   //переменная "w" - вычетаемое 
	double x;                                   //переменная "x" - разность
	vvod(&q, &w);                               //ввод пользователем уменьшоемого и вычетаемого
	minu(q, w, &x);                             //нахождение разности 
	cout << "Rasnost 1  = " << x;               //вывод разности
	cout << endl;
	cout << endl;

	//нахождение разности целых чисел типа long
	cout << "Vvedite umenhaemoe i vichitaemoe" << endl;
	long e;                                      //переменная "е" - уменьшаемое 
	long r;                                      //переменная "r" - вычетаемое 
	long y;                                      //переменная "y" - разность 
	vvod(&e, &r);                                //ввод пользователем уменьшоемого и вычетаемого
	minu(e, r, &y);                              //нахождение разности 
	cout << "Rasnost 2 = " << y;                 //вывод разности
	cout << endl;
	cout << endl;

	//нахождение разности целых чисел типа int 
	cout << "Vvedite umenhaemoe i vichitaemoe" << endl;
	int s;                                        //переменная "s" - уменьшаемое 
	int t;                                        //переменная "t" - вычетаемое 
	int i;                                        //переменная "i" - разность 
	vvod(&t, &i);                                 //ввод пользователем уменьшоемого и вычетаемого
	minu(t, i, &s);                               //нахождение разности 
	cout << "Rasnost 3 = " << s;                  //вывод разности
	cout << endl;
	cout << endl;
	cout << endl;


	int komA1;                                     //первый элемент первого комплексного числа
	int komA2;                                     //второй элемент первого комплексного числа
	int komB1;                                     //первый элемент второго комплексного числа
	int komB2;                                     //второй элемент второго комплексного числа
	RandKomp(&komA1, &komA2, &komB1, &komB2);      //присвоение комплексным числам случайных значений
	//вывод комлексных чисел
	cout << "Pervoe kompleksnoe chislo: " << komA1 << " + " << "(" << komA2 << ")" << "i" << endl;
	cout << "Vtoroe kompleksnoe chislo: " << komB1 << " + " << "(" << komB2 << ")" << "i" << endl;
	int ras1;
	int ras2; 
	minu(komA1, komA2, komB1, komB2, &ras1, &ras2);   //нахождение разности комлексных чисел
	//вывод разности комлексных чисел
	cout << "rasnost = " << ras1 << " + " << "(" << ras2 << ")" << "i" << endl;


	double kom2A1;                                 //первый элемент первого комплексного числа
	double kom2A2;                                 //второй элемент первого комплексного числа
	double kom2B1;                                 //первый элемент второго комплексного числа
	double kom2B2;                                 //второй элемент второго комплексного числа
	RandKomp(&kom2A1, &kom2A2, &kom2B1, &kom2B2);  //присвоение комплексным числам случайных значений
	//вывод комлексных чисел
	cout << "Pervoe kompleksnoe chislo: " << kom2A1 << " + " << "(" << kom2A2 << ")" << "i" << endl;
	cout << "Vtoroe kompleksnoe chislo: " << kom2B1 << " + " << "(" << kom2B2 << ")" << "i" << endl;
	double ras21;
	double ras22;
	minu(kom2A1, kom2A2, kom2B1, kom2B2, &ras21, &ras22);   //нахождение разности  комлексных чисел
	//вывод разности комлексных чисел
	cout << "rasnost = " << ras21 << " + " << "(" << ras22 << ")" << "i" << endl;   





	cin.get();
	cin.get();
}

