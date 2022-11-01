#include <iostream>
#include <fstream>

using namespace std;

/*
  scrieti un subprog care sorteaza crescator un vector
*/

void sort(int v[101], int p, int q) {
  for (int i = p; i <= q - 1; i++) {
    if (v[i] >= 0) {
      for (int k = i + 1; k <= q; k++) {
        if (v[i] > v[k] && v[k] >= 0) {
          swap(v[i], v[k]);
        }
      }
    }
  }
}

int main() {
  ifstream fin;
  fin.open("vec.in");
  int v[101], n;

  // cout << "Ce marime are vectorul? ";
  fin >> n;

  for (int i = 1; i <= n; i++) {
    fin >> v[i];
  }

  sort(v, 3, 10);

  for (int i = 1; i <= n; i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}