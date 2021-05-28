
#include <iostream>
#include "strings.h"

Strings::Strings()
{

};

Strings::Strings(const Strings& instr)//копирование
{
    size = instr.size;
    str = new char[size];
    for (int i = 0; i < size; i++)
    {
        str[i] = instr.str[i];
    }
};

Strings::Strings(const char* instr)//преобр типа
{
    size = strlen(instr)+1;
    str = new char[size];
    for (int i = 0; i < size; i++)
    {
        str[i] = instr[i];
    }
};

Strings::Strings(int _size)//инициализатор
{
    size = _size;
    str = new char [size];
    str[0] = '\0';
};

Strings Strings::operator+(const Strings& sec)//перегрузка сложения
{
    int tmpsize = size + sec.size - 1;
    Strings tmpstr(tmpsize);
    int i = 0;
    for (i = 0; i < size - 1; i++)
    {
        tmpstr.str[i] = str[i];
    }
    for (i = size; i < tmpsize; i++)
    {
        tmpstr.str[i] = sec.str[i - size + 1];
    }
    return tmpstr;
};

Strings Strings::operator=(const Strings& sec)//перегрузка присваивания
{
    if (&sec == this)
    {
        return *this;
    }
    if (&sec != this)
    {
        if (size != sec.size)
        {
            delete[] str;
            size = sec.size;
            str = new char[size];
        }
        for (int i = 0; i < size; i++)
        {
            str[i] = sec.str[i];
        }
        return *this;
    }
};

Strings::~Strings()//перегрузка деструктора
{
    delete[]str;
    size = 0;
};

char& Strings::operator[](int i)//перегрузка доступа по индексу
{

}

Strings Strings::compared(Strings& first, Strings& second)
{

}

int main()
{
    std::cout << "Введите строку" << std::endl;

}

