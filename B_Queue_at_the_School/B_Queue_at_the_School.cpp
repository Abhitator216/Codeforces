#include<bits/stdc++.h>
#define ll long long int 
#define cy cout<<"YES\n";
#define cn cout<<"NO\n";
#define mod 1000000007
using namespace std;
int main()
{
    string k="",s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='.')
        {
            k+="0";
        }else{
            if (s[i+1]=='.')
            {
                k+="1";
            }else{
                k+="2";
            }
            i++;
        }
        
    }
    
cout<<k;
    return 0;
}
