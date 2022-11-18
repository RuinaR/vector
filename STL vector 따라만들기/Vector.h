#pragma once
#include "Iterator.h"
#include "Iterator.cpp"	//template은 항상 실제로 쓸때 cpp까지 포함해야한다.


template<typename T>
class Vector
{
public:
	typedef Iterator<T> iterator;

	void erase(iterator itr);
	T* end(void);
	T* begin(void);
	void pop_back(void);
	void push_back(T data);
	T& operator[](int index);
	T operator[](int index)const;
	Vector<T>& operator= (const Vector<T>& ref);
	Vector();
	Vector(const Vector<T>& ref);
	Vector(int capT);
	~Vector();

	inline int GetSize(void)const { return this->_size; }
	inline int GetCapacity(void)const { return this->_capacity; }
	inline int size(void)const { return this->_size; }
	inline int capacity(void)const { return this->_capacity; }

private:
	T* arr;
	int _size;
	int _capacity;
};

