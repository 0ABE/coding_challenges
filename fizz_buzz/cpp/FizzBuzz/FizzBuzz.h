#pragma once

#include <iostream>
#include <string>
#include <map>

class FizzBuzz {
public:
  FizzBuzz(int start = 1, int end = 100);

  // int* list();
  void print();

protected:
  bool isFizz(int num);
  bool isBuzz(int num);
  const std::string FIZZ = "Fizz";
  const std::string BUZZ = "Buzz";
  std::map<int, std::string> _values;
};
