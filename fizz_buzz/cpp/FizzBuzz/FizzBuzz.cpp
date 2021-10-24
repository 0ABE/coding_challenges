#include "FizzBuzz.h"

FizzBuzz::FizzBuzz(int start, int end) {
  if (start > end)
    return;

  bool fizz = false;
  bool buzz = false;
  for (int i = start; i <= end; i++) {
    fizz = isFizz(i);
    buzz = isBuzz(i);
    if (fizz && buzz) {
      _values[i] = FIZZ + BUZZ;
    } else if (fizz) {
      _values[i] = FIZZ;
    } else if (buzz) {
      _values[i] = BUZZ;
    } else {
      _values[i] = std::to_string(i);
    }
  }
}

void FizzBuzz::print() {
  for (const auto &kv : _values) {
    std::cout << kv.first << '\t' << kv.second << '\n';
  }
}

bool FizzBuzz::isFizz(int num) { return (num % 3) == 0; }

bool FizzBuzz::isBuzz(int num) { return (num % 5) == 0; }
