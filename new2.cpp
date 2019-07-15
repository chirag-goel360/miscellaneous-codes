#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define V vector
#define pb push_back

void the_martian(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
    #endif
}

const int N=100005;

vector<P> factors;
void factorisation(int n){
    int cnt=0;
    while(n%2==0){
        n/=2;
        cnt++;
    }
    if(cnt) factors.pb({2,cnt});
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }                      
            factors.pb({i,cnt});
        }
    }
    if(n>1){
        factors.pb({n,1});
    }
}

int32_t main()
{
    the_martian();
    // int t;cin>>t;while(t--)
    {
        int i,j,k,n,m,ans=0,cnt=0,sum=0;
        factorisation(10);

    }
}