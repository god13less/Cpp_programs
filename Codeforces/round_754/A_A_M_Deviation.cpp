#include <bits\stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const double PI = acos(-1.0);
const double EI = exp(1.0);
const int inf = 0x3f3f3f3f;
inline ll rd(){
    ll x=0;char c=getchar();bool f=0;
    while(!isdigit(c)){if(c=='-')f=1;c=getchar();}
    while(isdigit(c)){x=(x<<1)+(x<<3)+(c^48);c=getchar();}
    return f?-x:x;
}
int t,a,b,c;
int main(){
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int tem=abs(a+c-2*b);
        if(tem%3==0)
        {
            cout<<0<<endl;
        }else
        {
            cout<<1<<endl;
        }
    }

    return 0;
}