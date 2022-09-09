#include "iostream"

using namespace std;

int main() {
  int v[100][100];
  int m, n, i, j;

  cin >> m >> n;

  cout << "citire" << endl; 
  for (i = 1; i <= m; i++) {
    for (j = 1; j <= n; j++) {
      cin >> v[i][j];
    }
  }

  cout << "scriere" << endl;
  for (i = 1; i<= m; i++) {
    cout << "[";
    for (j = 1;j <= n; j++) {
      if (j != n) {
        cout << v[i][j] << ", ";
      } else {
        cout << v[i][j];
      }
    }
    cout << "]" <<  endl;
  }

  return 0;
}