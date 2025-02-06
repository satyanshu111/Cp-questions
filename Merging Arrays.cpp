#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int mod = 1e9 + 7;
const int N = 2e5 + 10;

void solve()
{
  int n, m;
  cin >> n >> m;

  vector<int> a(N), b(N);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }

  vector<int> c(n + m);

  int i = 0, j = 0, k = 0;

  while (i < n || j < m)
  {
    if (j == m || (i < n && a[i] < b[j]))
    {
      c[k++] = a[i++];
    }
    else
    {
      c[k++] = b[j++];
    }
  }

  for (int i = 0; i < n + m; i++)
  {
    cout << c[i] << " ";
  }
  cout << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  t = 1;

  while (t--)
  {
    solve();
  }

  return 0;
}
