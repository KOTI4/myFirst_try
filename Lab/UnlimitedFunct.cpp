#include<iostream>            //подключение стандартных библиотек 
#include<cmath>
#include<ctime>
using namespace std;

//функция min с переменным числом параметров, которая находит минимальный элемент среди введеных
void  min( int *min ,int   k, ...) {  
	int   *p = &k;             //указатель на параметр k 
	*(++p);                    //перемещение указателя на вводимые параметры 
	int s = *p;                //присвоение переменной "s" первого из вводимых параметров
	for (; k != 0; k--) {      

		if (s > *p)            //нахождение максимального вводимого параметра 
			s = *p;
		*(++p);

	}
	*min = s;                  
}


void vvod(int *x,  int *y) {     //ввод уменьшаемого и вычитаемого 
	cout << "umensaemoe: ";
	cin >> *x;
	cout << "vichitaemoe: ";
	cin >> *y;
}
void vvod(double *x, double *y) {   //ввод уменьшаемого и вычитаемого 
	cout << "umensaemoe: ";
	cin >> *x;
	cout << "vichitaemoe:";
	cin >> *y;
}
void  vvod(long *x, long  *y) {   //ввод уменьшаемого и вычитаемого 
	cout << "umensaemoe:";
	cin >> *x;
	cout << "vichitaemoe:";
	cin >> *y;
}
//перегруженная функция находящая разность целых чимел типа int 
void minu(int a, int b , int *s) { 
	 *s = a - b;
	
}
//перегруженная функция находящая разность целых чимел типа double
void  minu(double a, double b, double *s) {
	
	*s = a - b;
	}
//перегруженная функция находящая разность целых чимел типа long
void minu(long a, long b, long *s) {
	*s = a - b;
	
}
 /*void VvodKomp (int *komA1, int *komA2, int *komB1, int *komB2) {
	cout << endl;
	cout << "Vvedite pervoe slagaemoe  pervogo komplecsnogo chisla: ";
	cin >> *komA1;
	cout << "Vvedite vtoroe slagaemoe  pervogo komplecsnogo chisla: ";
	cin >> *komA2;
	cout << "Vvedite pervoe slagaemoe  vtorogo komplecsnogo chisla: ";
	cin >> *komB1;
	cout << "Vvedite vtoroe slagaemoe  vtorogo komplecsnogo chisla: ";
	cin >> *komB2;
}
 void VvodKomp(float  *komA1, float  *komA2, float  *komB1, float *komB2) {
	 cout << endl;
	 cout << "Vvedite pervoe slagaemoe  pervogo komplecsnogo chisla: ";
	 cin >> *komA1;
	 cout << "Vvedite vtoroe slagaemoe  pervogo komplecsnogo chisla: ";
	 cin >> *komA2;
	 cout << "Vvedite pervoe slagaemoe  vtorogo komplecsnogo chisla: ";
	 cin >> *komB1;
	 cout << "Vvedite vtoroe slagaemoe  vtorogo komplecsnogo chisla: ";
	 cin >> *komB2;
 }
 void VvodKomp(double *komA1, double *komA2, double *komB1, double *komB2) {
	 cout << endl;
	 cout << "Vvedite pervoe slagaemoe  pervogo komplecsnogo chisla: ";
	 cin >> *komA1;
	 cout << "Vvedite vtoroe slagaemoe  pervogo komplecsnogo chisla: ";
	 cin >> *komA2;
	 cout << "Vvedite pervoe slagaemoe  vtorogo komplecsnogo chisla: ";
	 cin >> *komB1;
	 cout << "Vvedite vtoroe slagaemoe  vtorogo komplecsnogo chisla: ";
	 cin >> *komB2;
 }
 void VvodKomp(long  *komA1, long  *komA2, long  *komB1, long  *komB2) {
	 cout << endl;
	 cout << "Vvedite pervoe slagaemoe  pervogo komplecsnogo chisla: ";
	 cin >> *komA1;
	 cout << "Vvedite vtoroe slagaemoe  pervogo komplecsnogo chisla: ";
	 cin >> *komA2;
	 cout << "Vvedite pervoe slagaemoe  vtorogo komplecsnogo chisla: ";
	 cin >> *komB1;
	 cout << "Vvedite vtoroe slagaemoe  vtorogo komplecsnogo chisla: ";
	 cin >> *komB2;
 }*/
 //присвоение комплексным числам случайных значений
  void RandKomp(float  *komA1, float  *komA2, float  *komB1, float *komB2) {
	 srand(static_cast<unsigned int>(time(NULL)));
	 *komA1 = rand() % 10;
	 *komA2 = rand() % 10;
	 *komB1 = rand() % 10;
	 *komB2 = rand() % 10;


 }
 //присвоение комплексным числам случайных значений
  void RandKomp(int  *komA1, int  *komA2, int   *komB1, int  *komB2) {
	  srand(static_cast<unsigned int>(time(NULL)));
	  *komA1 = rand() % 10;
	  *komA2 = rand() % 10;
	  *komB1 = rand() % 10;
	  *komB2 = rand() % 10;


  }
  //присвоение комплексным числам случайных значений
  void RandKomp(double  *komA1, double   *komA2, double    *komB1, double   *komB2) {
	  srand(static_cast<unsigned int>(time(NULL)));
	  *komA1 = rand() % 10;
	  *komA2 = rand() % 10;
	  *komB1 = rand() % 10;
	  *komB2 = rand() % 10;


  }


/*int GeoMinusKom(int a1, int a2, int b1, int b2) {
	int kom;
	kom = sqrt(pow((b2 - a2), 2) + pow((b1 - a1), 2));
	return kom;
}
long  GeoMinusKom(long a1, long a2, long b1, long b2) {
	long kom;
	kom = sqrt(pow((b2 - a2), 2) + pow((b1 - a1), 2));
	return kom;
}
double  GeoMinusKom(double a1, double a2, double b1, double b2) {
	double kom;
	kom = sqrt(pow((b2 - a2), 2) + pow((b1 - a1), 2));
	return kom;
}
void  GeoMinusKom(int a1, int a2, int b1, int b2, int *kom) {
	*kom = sqrt(pow((b2 - a2), 2) + pow((b1 - a1), 2));
}
*/
//перегруженная функция находящая разность комлексных чимел типа long
void  minu(long a1, long a2, long b1, long b2, long *k1, long *k2) {

	*k1 = a1 - b1;
	*k2 = a2 - b2;

}
//перегруженная функция находящая разность комлексных чимел типа double
void  minu(double a1, double a2, double b1, double b2, double *k1, double *k2) {

	*k1 = a1 - b1;
	*k2 = a2 - b2;

}
//перегруженная функция находящая разность комлексных чимел типа int
void  minu(int a1, int a2, int b1, int b2, int *k1, int *k2) {

	*k1 = a1 - b1;
	*k2 = a2 - b2;

}