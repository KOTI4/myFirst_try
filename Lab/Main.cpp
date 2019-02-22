#include<iostream>                                 //���������� ����������� ���������
#include<clocale>

#include"UnlimitedFunct.h"                         //����������� ����������� �������
using namespace std;
/* ������� 4. ������������� ������� ��� ���������:
� ����� �����;
� ����������� �����.
�������� ������� min � ���������� ������ ����������, ������� ������� ����������� �� ����� ���� int. 
�������� ���������� ������� main, ������� ���������� � ������� min �� ����� ������� � �����������
���������� 5, 10, 12.
*/




void main() {

	int a[5];
	cout << "sluchainie 5 elementov:";             //����� ���� ��������� ��������� 
	for (int i = 0; i < 5; i++) {
		a[i] = rand() % 20;
		cout << " " << a[i];
	}
	cout << endl;
	int m1;
	//���������� ������������ �������� � ������� ���� ��������� ��������� 
	min(&m1, 5, a[0], a[1], a[2], a[3], a[4]);
	cout << "minimal element:" << m1;              // ����� ������������ ���������   
	cout << endl;
	cin.get();




	int b[10];
	cout << "sluchainie 10 elementov:";            //����� ������ ��������� ��������� 
	for (int i = 0; i < 10; i++) {
		b[i] = rand() % 20;
		cout << " " << b[i];
	}
	cout << endl;
	int m2;
	//���������� ������������ �������� � ������� ������ ��������� ��������� 
	min(&m2, 10, b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], b[9]);
	cout << "minimal element:" << m2;              // ����� ������������ ��������� 
	cout << endl;
	cin.get();




	int c[12];
	cout << "sluchainie 12 elementov:";            //����� ���������� ��������� ��������� 
	for (int i = 0; i < 12; i++) {
		c[i] = rand() % 20;
		cout << " " << c[i];
	}
	cout << endl;
	int m3;
	//���������� ������������ �������� � ������� ���������� ��������� ��������� 
	min(&m3, 12, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11]);
	cout << "minimal element:" << m3;              // ����� ������������ ��������� 
	cout << endl;
	cin.get();


	//���������� �������� ����� ����� ���� double
	cout << "Vvedite umenhaemoe i vichitaemoe" << endl;
	double q;                                   //���������� "q" - ����������� 
	double w;                                   //���������� "w" - ���������� 
	double x;                                   //���������� "x" - ��������
	vvod(&q, &w);                               //���� ������������� ������������ � �����������
	minu(q, w, &x);                             //���������� �������� 
	cout << "Rasnost 1  = " << x;               //����� ��������
	cout << endl;
	cout << endl;

	//���������� �������� ����� ����� ���� long
	cout << "Vvedite umenhaemoe i vichitaemoe" << endl;
	long e;                                      //���������� "�" - ����������� 
	long r;                                      //���������� "r" - ���������� 
	long y;                                      //���������� "y" - �������� 
	vvod(&e, &r);                                //���� ������������� ������������ � �����������
	minu(e, r, &y);                              //���������� �������� 
	cout << "Rasnost 2 = " << y;                 //����� ��������
	cout << endl;
	cout << endl;

	//���������� �������� ����� ����� ���� int 
	cout << "Vvedite umenhaemoe i vichitaemoe" << endl;
	int s;                                        //���������� "s" - ����������� 
	int t;                                        //���������� "t" - ���������� 
	int i;                                        //���������� "i" - �������� 
	vvod(&t, &i);                                 //���� ������������� ������������ � �����������
	minu(t, i, &s);                               //���������� �������� 
	cout << "Rasnost 3 = " << s;                  //����� ��������
	cout << endl;
	cout << endl;
	cout << endl;


	int komA1;                                     //������ ������� ������� ������������ �����
	int komA2;                                     //������ ������� ������� ������������ �����
	int komB1;                                     //������ ������� ������� ������������ �����
	int komB2;                                     //������ ������� ������� ������������ �����
	RandKomp(&komA1, &komA2, &komB1, &komB2);      //���������� ����������� ������ ��������� ��������
	//����� ���������� �����
	cout << "Pervoe kompleksnoe chislo: " << komA1 << " + " << "(" << komA2 << ")" << "i" << endl;
	cout << "Vtoroe kompleksnoe chislo: " << komB1 << " + " << "(" << komB2 << ")" << "i" << endl;
	int ras1;
	int ras2; 
	minu(komA1, komA2, komB1, komB2, &ras1, &ras2);   //���������� �������� ���������� �����
	//����� �������� ���������� �����
	cout << "rasnost = " << ras1 << " + " << "(" << ras2 << ")" << "i" << endl;


	double kom2A1;                                 //������ ������� ������� ������������ �����
	double kom2A2;                                 //������ ������� ������� ������������ �����
	double kom2B1;                                 //������ ������� ������� ������������ �����
	double kom2B2;                                 //������ ������� ������� ������������ �����
	RandKomp(&kom2A1, &kom2A2, &kom2B1, &kom2B2);  //���������� ����������� ������ ��������� ��������
	//����� ���������� �����
	cout << "Pervoe kompleksnoe chislo: " << kom2A1 << " + " << "(" << kom2A2 << ")" << "i" << endl;
	cout << "Vtoroe kompleksnoe chislo: " << kom2B1 << " + " << "(" << kom2B2 << ")" << "i" << endl;
	double ras21;
	double ras22;
	minu(kom2A1, kom2A2, kom2B1, kom2B2, &ras21, &ras22);   //���������� ��������  ���������� �����
	//����� �������� ���������� �����
	cout << "rasnost = " << ras21 << " + " << "(" << ras22 << ")" << "i" << endl;   





	cin.get();
	cin.get();
}

