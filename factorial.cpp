/*
 * factorial definition
 *
 * @author Yusuf Pisan
 * @date 20 Jan 2020
 */

#include "factorial.h"
#include <iostream>

using namespace std;

int fact(int n) {
  int foo = 200;
  if (n < 30) {
    if (n <= 1){
      return 1;}
    return n * fact(n - 1);
  }  
    cout << "Too large: " << n << endl;
    return -1;
  
}

int memoryLeakFunction() {
  
  
  cout << "Hello World" << endl;
  cout << "Fact 5: " << fact(5) << endl;
  // memory leak if we do not delete it
  // delete(Arr);
  return 0;
}

void unusedFunction() {
  cout << "A cout statement ";
  cout << "that is never called " << endl;
}
