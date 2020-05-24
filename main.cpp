#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1)
#define lli long long int
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define fir first
#define sec second
#define MAXN 200010
#define MAXL 5201
#define mod 1000000007

signed main()
{
  string s;
  int j = 1;
  ifstream myfile("1.in");
  if (myfile.is_open())
  {
    while (getline(myfile, s))
    {
      string num1 = "", num2 = "";
      for (int i = s.size() - 1; i >= 0; i--)
      {
        if (s[i] == ' ')
        {
          s.erase(i, 1);
          break;
        }
        num1 = num1 + s[i];
        s.erase(i, 1);
      }
      for (int i = s.size() - 1; i >= 0; i--)
      {
        if (s[i] == ' ')
        {
          s.erase(i, 1);
          break;
        }
        num2 = num2 + s[i];
        s.erase(i, 1);
      }
      reverse(num1.begin(), num1.end());
      reverse(num2.begin(), num2.end());
      cout << "<tr>\n";
      cout << "<td>\n";
      cout << j << endl;
      cout << "</td>\n";
      cout << "<td>\n";
      cout << s << endl;
      cout << "</td>\n";
      cout << "<td>\n";
      cout << num2 << endl;
      cout << "</td>\n";
      cout << "<td>\n";
      cout << num1 << endl;
      cout << "</td>\n";
      cout << "</tr>\n";
      j++;
    }
    myfile.close();
  }
  return 0;
}