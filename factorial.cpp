
#include "factorial.h"
#include <iostream>

using namespace std;

int fact(int n) {
  
  //useless
  /*int foo = 200;*/ 
  if (n < 30) {
    if (n <= 1) {
      return 1;
    }
    return n * fact(n - 1);
  }
  cout << "Too large: " << n << endl;
  return -1;
}

int memoryLeakFunction() {

  cout << "Hello World" << endl;
  cout << "Fact 5: " << fact(5) << endl;
  // dont need to use delete() method
  // delete(Arr);
  return 0;
}

void unusedFunction() {
  cout << "A cout statement ";
  cout << "that is never called " << endl;
}
