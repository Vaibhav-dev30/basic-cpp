#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int highest_factor = 1;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      highest_factor = i;
    }
  }
  cout << "The highest factor of " << n << " is " << highest_factor << endl;
  return 0;
}