#include <iostream>
#include <fstream>
using namespace std;


int main() {
  string line;
  string inputFileName = "input.txt";
  ifstream inputFile;

  inputFile.open(inputFileName);
  if(!inputFile.is_open()) {
    cout << "Could not open file: " << inputFileName << endl;
    return 1;
  }

  // READ ALL LINES ONE BY ONE IN FILE
  while (!inputFile.eof()) {
    getline(inputFile, line, ':');

    string rhs;
    inputFile >> rhs;

    // TO DISCARD THE NEWLINE CHAR AT THE END OF THE LINE, DO BELOW
    // WS IS A PRE-DEFINED VARIABLE IN C++ FOR EXTRA WHITESPACES
    inputFile >> ws;

    cout << line << " --- " << rhs << endl;
  }
  inputFile.close();
  return 0;
}
