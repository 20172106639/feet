// �̳�             ��������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inch;
public:
	CFeet();
	CFeet(int ty, int ti);
	~CFeet();
	void display();
	int getfeet();
	int getinch();
};
CFeet::CFeet()
{
	feet = 0;
	inch = 0;
	cout << "Ĭ�ϻ��๹�캯��" << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
CFeet::CFeet(int ty, int ti)
{
	cout << "���๹�캯��" << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
CFeet::~CFeet()
{
	cout << "������������" << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
void CFeet:: display()
{
	cout << "display" << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinch()
{
	return inch;
}





int main()
{
    return 0;
}

