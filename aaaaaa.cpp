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
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            int flag=0;
            while( i<n &&  ((s1[i]-'0') ^ (s2[i]-'0') )==1){
                flag=1;
                i++;
            }
            
           if(flag==1) ans++;
           
      
        }
          cout << ans << endl;
    // }
}
