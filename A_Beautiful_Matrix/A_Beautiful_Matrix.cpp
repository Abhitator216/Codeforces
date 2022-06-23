#include<bits/stdc++.h>
#define ll long long int 
#define cy cout<<"YES\n";
#define cn cout<<"NO\n";
#define mod 1000000007
using namespace std;
int main()
{
    vector<vector<int>> vec;
    int x,y;
    for (int i = 0; i < 5; i++)
    {
        vector<int> vc;
        for (int j = 0; j < 5; j++)
            int k;
            cin>>k;
            vc.push_back(k);
            if (k==1)
            {
                x=i;
                y=j;
            }
            
        }
        vec.push_back(vc);
    }
    int res=abs(2-x)+abs(2-y);
    cout<<res;

    return 0;
}
