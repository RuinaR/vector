#include "Vector.h"
#include "Vector.cpp"	//템플릿을 쓸 경우에는 cpp까지 포함한다.

#include <iostream>
using namespace std;

int main(void)
{
	Vector<string> v;
	v.push_back("seol");
	v.push_back("Tom");
	v.push_back("David");
	v.push_back("Grace");
	v.push_back("John");

	for (Vector<string>::iterator itr = v.begin(); itr != v.end(); itr++)
	{
		cout << *itr << endl;
	}

	return 0;
}