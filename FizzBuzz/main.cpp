// The FizzBuzz problem is a classic test given in coding interviews.
// The task is simple: Print integers 1 to N, but
// 1. print “Fizz” if an integer is divisible by 3,
// 2. print “Buzz” if an integer is divisible by 5, and
// 3. print “FizzBuzz” if an integer is divisible by both 3 and 5.

#include "FizzBuzz.h"
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int start = 1;
  int end = 100;

  size_t numArgs = 5;
  if (argc == numArgs) {
    for (int i = 1; i < numArgs - 1; i++) {
      char *arg = argv[i];
      if (strcmp("-start", arg) == 0) {
        start = atoi(argv[i + 1]);
        i++;
      } else if (strcmp("-end", arg) == 0) {
        end = atoi(argv[++i]);
        i++;
      }
    }
  }

  FizzBuzz fizzbuzz(start, end);
  fizzbuzz.print();

  return 0;
}
