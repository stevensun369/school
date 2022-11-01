#include <iostream>
#include <fstream>

using namespace std;

int S1(int k) {
  int nr = 0;
  for (int i = 2; i < k; i++) {
    if (k % i == 0) {
      nr++;
    }
  }
  return nr;
}

void S2(int p, int q, int v[101]) {
  int temp;
  for (int i = p; i <= q-1; i++) {
    for (int k = i + 1; k <= q; k++) {
      if (v[i] > v[k]) {
        // temp = v[i];
        // v[i] = v[k];
        // v[k] = temp;
        swap(v[i], v[k]);
      }
    }
  }
}

int main() {
  ifstream fin;
  fin.open("date.in");

  int n;
  fin >> n;

  int v[101];

  for (int i = 1; i <= n; i++) {
    fin >> v[i];
  }
  cout << endl;

  S2(1, n, v);
  for (int i = 1; i <= n; i++) {
    if (S1(v[i]) == 0) {
      cout << v[i] << " ";
    }
  }

  cout << endl;

  return 0;
} 