// https://www.hackerrank.com/challenges/lowest-triangle/problem
#include<bits/stdc++.h>

using namespace std;

int main() {
  uint32_t a, b;
  cin >> b >> a;
  cout << 2 * a / b + bool((2 * a) % b) << "\n";
  return 0;
}
