#include <bits/stdc++.h>
using namespace std;

int abso(int h){
    int f=(int)floor(h/2)+10;
    return f;
}
int lig(int h){
    int f=h-10;
    return f;
    return f;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
	   int x,n,m;
	   cin>>x>>n>>m;
	   while(x>0){
	       if(abso(x)<lig(x)){
	           while(n--){
	               x=abso(x);
	               cout<<x<<" ";
	           }
	       }
	       else{
	           while(m--){
	               x=lig(x);
	           }
	       }
	       if(x<=0)
	       break;
	   }
	   if(x<=0)
       cout<<"YES"<<"\n";
       else
       cout<<"NO"<<"\n";
	}
	return 0;
}
