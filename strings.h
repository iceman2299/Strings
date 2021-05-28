#pragma once
#include <iostream>
#include "string.h"

class Strings
{
private:
	int size;
	char* str;
public:
	Strings();
	Strings(const Strings& _str);
	Strings(const char* instr);
	Strings(int _size);
	Strings operator+(const Strings& sec);
	Strings operator=(const Strings& sec);
	char& operator[](int i);
	Strings compared(Strings& first, Strings& second);
	~Strings();

	
};