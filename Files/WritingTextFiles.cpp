#include <iostream>
#include <fstream>
using namespace std;


int main() {
  string outputFileName = "test.txt";

  ofstream outputFile;
  outputFile.open(outputFileName);

  // // ALTERNATIVE WAY TO ACHIEVE THE SAME
  // fstream outputFile;
  // fstream.open(outputFileName, ios::out);

  if(outputFile.is_open()) {
    outputFile << "Hello there!" << endl;
    outputFile.close();
  }
  else {
    cout << "Could not open/create file: " << outputFileName << endl;
  }

  return 0;
}
