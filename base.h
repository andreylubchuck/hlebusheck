// Базовый класс для программы.
// Единственный член-данное это имя работника
// так же есть чисто виртуальный метод double GetMonthSalary(); который считает месячную з/п
// он перекрыт во всех базовых классах

#pragma once

#include <iostream>

class Base
{
private:
  char* name;
public:
  Base(): name("") { }
  Base(const char* name) { this->name = name; }
  virtual ~Base()
  {
    delete name;
    name = 0;
  }
  
  virtual double GetMonthSalary() = 0; // метод пустой!
  
}
