#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define pb push_back
int N = 4000;

// void somuchfun(){

// #ifndef ONLINE_JUDGE
//     freopen("C:\\Users\\user\\CLionProjects\\play1\\input.txt", "r", stdin);
//     freopen("C:\\Users\\user\\CLionProjects\\play1\\output.txt", "w", stdout);
// #endif

// }

int main()
{

    //  somuchfun();
    // int t;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin>>n;
        vector<pair<ll,ll> > vp;
        for (int i = 0; i < n; i++)
        {
            int l,r;
            cin>>l>>r;
            vp.pb({r,l});
        }
        sort(vp.begin(),vp.end());
        int curend=vp[0].first;
        int ans=1;
        for (int i = 1; i < n; i++)
        {
            if(vp[i].second>curend){
                ans++;
                curend=vp[i].first;
            }
        }
        
        cout<<ans<<endl;
        
        

       
    // }
}
