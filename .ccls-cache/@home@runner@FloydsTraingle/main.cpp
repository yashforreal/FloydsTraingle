#include <iostream>
using namespace std;

void FTByHeight(int ht) {
  int count = 1;
  int end = 1;
  for (int h = 1; h <= ht; h++) {
    for (int i = 1; i <= end; i++) {
      cout << count << " ";
      count++;
    }
    cout << endl;
    end++;
  }
}

void FTByNumber(int num) {
  int count = 1;
  int end = 1;
  while (count <= num) {
    for (int i = 1; i <= end && count <= num; i++) {
      cout << count << " ";
      count++;
    }
    cout << endl;
    end++;
  }
}

int main() {
  cout << "Welcome to the Floyd's Triagle programme" << endl;
  cout << "1. By height\n2. By number" << endl;
  cout << "Enter your option: ";
  int option;
  cin >> option;
  while (!(option == 1 || option == 2)) {
    cout << "Please enter either 1 or 2" << endl;
    cin >> option;
  }
  switch (option) {
  case 1: {
    cout << "Enter height: ";
    int height;
    cin >> height;
    FTByHeight(height);
    break;
  }
  case 2: {
    cout << "Enter terminating number: ";
    int number;
    cin >> number;
    FTByNumber(number);
    break;
  }
  }
  return 0;
}