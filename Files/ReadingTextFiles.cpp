#include <iostream>
#include <fstream>
using namespace std;


int main() {
  string inputFileName = "input.txt";

  ifstream inputFile;
  inputFile.open(inputFileName);

  // // ALTERNATIVE WAY TO ACHIEVE THE SAME
  // fstream inputFile;
  // fstream.open(inputFileName, ios::in);

  if(inputFile.is_open()) {
    string line;

    // // READS FIRST WORD ONLY, USES SPACE AS SEPARATOR
    // inputFile >> line;

    // // READ LINE
    // getline(inputFile, line);

    // READ ALL LINES IN FILE
    while (!inputFile.eof()) {
    // while (inputFile) {  // RETURNS BOOL OF WHETHER THERE IS MORE TO BE READ
      getline(inputFile, line);
      cout << line << endl;
    }

    inputFile.close();
  }
  else {
    cout << "Could not open file: " << inputFileName << endl;
  }

  return 0;
}
