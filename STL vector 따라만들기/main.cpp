#include "Vector.h"
#include "Vector.cpp"	//���ø��� �� ��쿡�� cpp���� �����Ѵ�.

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