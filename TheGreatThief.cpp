#include <bits/stdc++.h>
using namespace std;
main(){
	int w,t,j,n,c=0,temp=0;
	cin >> w >> t >> j >> n;
	int x[n];
	for(int i=0;i<n;i++)cin >> x[i];
	
	for(int i=0;i<n;i++){
		for(int j=n-1;j>0;j--){
			if(x[i]<x[j] && i < j){
				int sum = x[j];
				x[j]=x[i];
				x[i]=sum;
			}
		}
	}
	
	if(x[0]+j > w)c=1;

	int l=0;
	
		for(int i=n-1;i>=0;i--){
			if(x[i]+temp+j <= w){
				temp = x[i]+temp;
				x[i]=0;
			}
			else l+=2;
		}
	
	if(c==0)cout << abs(((l*2)-1)*t);
	else cout << "Fail";
	//for(int k=0;k<n;k++)cout << x[k] <<" ";
}
//max --> min

