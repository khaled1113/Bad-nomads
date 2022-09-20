#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    string TEMPS;

    if (N == 0) {
      cout << 0 << endl;
      return 0;
    }

    getline(cin, TEMPS);

    istringstream buf(TEMPS);

    int t, m;
    buf >> m;
    for (int i = 1; i < N; ++i) {

      buf >> t;

      if (t >= 0 && m > t || t <= 0 && m < t || t > 0 && m <= -t || t < 0 && m > -t) {
        m = t;
      }
    }
    cout << m << endl;
    return 0;
}
