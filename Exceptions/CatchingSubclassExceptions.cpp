#include <iostream>
#include <exception>
using namespace std;

void GoesWrong() {
  bool error1 = true;
  bool error2 = false;

  if (error1) {
    throw bad_alloc();
  }
  if (error2) {
    throw exception();
  }
}

int main() {
  try {
    GoesWrong();
  }
  catch(exception &e) {
    cout << "Catching exception: " << e.what() << endl;
  }
  catch(bad_alloc &e) {
    cout << "Catching bad_alloc: " << e.what() << endl;
  }

  // C++ enters the first catch block that matches the exception thrown.
  // bad_alloc is a sub class of exception
  // therefore, if a bad_alloc exception is thrown 
  // it will enter the first catch block on account of polymorphism
  // therefore it is recommended to catch all subclass exceptions first

  return 0;
}
