// chongzaiyunsuanfu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Cfeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int fe, int in);
	void display();
	Cfeet add(Cfeet & ob1);
	Cfeet operator + (Cfeet & ob2);
};
void Cfeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
void Cfeet::display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
Cfeet Cfeet::add(Cfeet & ob1)
{
	Cfeet temp;
	temp.setvalue(feet + ob1.feet, inches + ob1.inches);
	return temp;
}
Cfeet Cfeet::operator + (Cfeet & ob2)
{
	Cfeet temp;
	temp.setvalue(feet + ob2.feet, inches + ob2.inches);
	return temp;
}
int main()
{
	Cfeet A, B, C;
	A.setvalue(10, 11);
	B.setvalue(6, 9);
	C = A + B;
	C.display();
	return 0;
}

