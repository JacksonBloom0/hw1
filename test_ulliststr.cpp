#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "ulliststr.h"

//Use this file to test your ulliststr implementation before running the test suite
using namespace std;
int main(int argc, char* argv[])
{

  ULListStr dat;
  dat.push_back("8");
  dat.push_back("8");
  // dat.push_back("9");
  // cout << dat.get(0) << " " << dat.get(1) << " " << dat.get(2) << endl;
  // prints: 8 7 9
  // cout << dat.size() << endl; // prints 3 since there are 3 strings stored
  dat.pop_back();
  dat.pop_front();
  cout << dat.size() << endl;
  for(size_t i = 0; i < dat.size(); i++) {
    cout << i << ": " << dat.get(i) << endl;
  }
}
