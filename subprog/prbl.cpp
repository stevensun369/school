#include <iostream>

using namespace std;

int nr_cifre(int n) {
  int c, nr = 0;

  while (n != 0) {
    c = n % 10;
    n = n / 10;
    nr++;
  }

  return nr;
}

void sort_col(int m[11][11], int n, int col) {
  int temp = 0;
  for (int i = 1; i <= n-1; i++) {
    for (int k = i; k <= n; k++) {
      if (m[i][col] > m[k][col]) {
        temp = m[i][col];
        m[i][col] = m[k][col];
        m[k][col] = temp;
      }
    }
  }
}

int main() {
  int col;
  cin >> col;

  int n;
  cin >> n;

  int m[11][11];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> m[i][j];
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << "[";
    for (int j = 1; j <= n; j++) {
      cout << " " << m[i][j];
    }
    cout << " ]" << endl;
  }

  sort_col(m, n, col);

  for (int i = 1; i <= n; i++) {
    cout << "[";
    for (int j = 1; j <= n; j++) {
      cout << " " << m[i][j];
    }
    cout << " ]" << endl;
  }
}