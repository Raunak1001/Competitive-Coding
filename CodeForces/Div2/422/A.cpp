#include<bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vp vector<pair<long long int,long long int > >
#define vc vector<char>
#define vvi vector<vector<long long int>  >
#define vvp vector<vector<pair<long long int,long long int> > >
#define vvc vector<vector<char>  >
#define ll long long int 
#define pr pair<long long int,long long int>
#define mp make_pair		
#define pb push_back

int main(){

ll n,m;
cin >>n>>m;
n=min(n,m);
ll ans=1;
for(ll i=2;i<=n;i++){
	ans*=i;
}

cout << ans<< endl;
	
}
