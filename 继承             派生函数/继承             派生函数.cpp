// 继承             派生函数.cpp : 定义控制台应用程序的入口点。
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
	cout << "默认基类构造函数" << feet << "英尺" << inch << "英寸" << endl;
}
CFeet::CFeet(int ty, int ti)
{
	cout << "基类构造函数" << feet << "英尺" << inch << "英寸" << endl;
}
CFeet::~CFeet()
{
	cout << "基类析构函数" << feet << "英尺" << inch << "英寸" << endl;
}
void CFeet:: display()
{
	cout << "display" << feet << "英尺" << inch << "英寸" << endl;
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

