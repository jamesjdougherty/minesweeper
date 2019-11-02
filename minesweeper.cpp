// g++ minesweeper.cpp && ./a.out < sample-input > output && diff output sample-output

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, m;
  int fieldNumber = 1;

  while(cin >> n >> m, !(n == 0 && m == 0) ) {
    vector<string> field;
    string line;

    for (int i = 0; i < n; i++) {
      cin >> line;
      field.push_back(line);
    }

    // printf("Field #%d:\n", fieldNumber);
    cout << "Field #" << fieldNumber++ << ":" << endl;

    for (int i = 0; i < n; i++) {
      cout << field[i] << endl;
    }

    cout << endl;
  }
}
