#include <iostream>
#include <exception>
using namespace std;

class MyCustomException : public exception {
public:
  MyCustomException() {
  }

  virtual const char* what() const throw() {
    return "Something bad happened";
  }
};

class Test {
public:
  void GoesWrong() {
    throw MyCustomException();
  }
};

int main() {
  Test t;
  try {
    t.GoesWrong();
  }
  catch(MyCustomException &e) {
    cout << e.what() << endl;
  }

  return 0;
}
