#include <iostream>

using namespace std;

int a[50][50], m, n, l, maxim = 0, p;

void citeste(int a[50][50]) {
  cout << "m = ";
  cin >> m;

  cout << "n = ";
  cin >> n;

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
}

void scrie(int a[50][50]) {
  for (int i = 1; i <= m; i++) {
    cout << "[";
    for (int j = 1; j <= n; j++) {
      cout << " " << a[i][j];
    }
    cout << " ]" << endl;
  }
}

int suma_linie(int a[50][50], int l) {
  int s = 0;
  for (int j = 1; j <= n; j++) {
    s += a[l][j];
  }
  return s;
}

int main() {
  citeste(a);
  scrie(a);

  for (int i = 1; i <= m; i++) {
    if (suma_linie(a, i) > maxim) {
      maxim = suma_linie(a, i);
      p = i;
    }
  }

  scrie(a);
  cout << "Valoarea maxima " << maxim << " la indexul liniei " << p << endl;
  return 0;
}