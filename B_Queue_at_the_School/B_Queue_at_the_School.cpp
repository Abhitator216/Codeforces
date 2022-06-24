#include <bits/stdc++.h>
#define ll long long int
#define cy cout << "YES\n";
#define cn cout << "NO\n";
#define mod 1000000007
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin>>s;
    while (t--)
    {

        for (int i = 0; i < s.size()-1; i++)
        {
            if (s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
            i++;
            }
        }
    }
    cout<<s;
    return 0;
}
