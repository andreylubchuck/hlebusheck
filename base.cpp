#pragma once

#include <iostream>
//#include "exceptions.h"

class Base
{
private:
  char* name;
public:
  Base(): name("") { }
  Base(const char* name) { this->name = name; }
  ~Base()
  {
    delete name;
    name = 0;
  }

}
