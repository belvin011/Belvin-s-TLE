#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long res=0;
	long long power5=5;
	while(n>=power5){
		res+=n/power5;
		power5*=5;
	}
	cout<<res<<"\n";
}