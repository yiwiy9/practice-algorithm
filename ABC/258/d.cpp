#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const long long INF = 1L << 60;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

int main()
{
  long long N, X;
  cin >> N >> X;
  vector<long long> A(N+1), B(N+1);

  for (int i=1; i<=N; i++) {
    cin >> A[i] >> B[i];
  }

  long long time = 0;
  long long ans = INF;
  long long min_b = INF;
  for (int i=1; i<=N; i++) {
    time += A[i]+ B[i];
    chmin(min_b, B[i]);
    chmin(ans, B[i] * (X-i) + time);
  }

  cout << ans << endl;

}
