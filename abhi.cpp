#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int printname(int n) {
  if (cnt == n) {
    return 0;
  }
  cout << "Hi abhi" << endl;
  cnt += 1;
}

int main() {
  int n;
  cin >> n;
  printname(n);
  return 0;
}