#include<bits/stdc++.h>
using namespace std;
#define dis(a) for(auto i: a) cout<<i<<" "
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define f(i,m,n,k) for(int i=m,i<n;i+=k)
#define fo(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define ll long long int
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d",x)
#define deb(x) cout<< #x << "="<<x<<endl
#define all(x) x.begin(),x.end()
const int mod = 1000000007;
 
int main()
{
    string s;
	int c=0;
    cin>>s;
    fo(i,s.length()){
        if(s[i]>='A' && s[i]<='Z') c+=1;
    }
    if(c>s.length()-c) transform(s.begin(),s.end(),s.begin(),::toupper);
    else transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
}
