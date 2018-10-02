#include <iostream>
using namespace std;

bool isPrimeSqrt(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int n;
  cout << "input a single number: ";

  cin >> n;

  bool isPrime = isPrimeSqrt(n);
  cout << "integer " << n << " is " << (isPrime ? "" : "not ") << "a prime number" << endl;

  return 0;
}