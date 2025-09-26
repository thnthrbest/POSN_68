#include <bits/stdc++.h>
using namespace std;
main(){
	int n,s,p=0,c=-1,sum=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)cin >> a[i];
	
	for(int i=1;i<n;i++){
		
		
		if(c==1){
			for(int j=0;j<n;j++){
				if(a[j]==0)p=j;
			}
		}
		if(c==-1){
			 for(int j=n-1;j>0;j--){
				if(a[j]==0)p=j;
			}
		}
		
		
		if(sum <= a[p+c] &&  a[p+c] != 0){
			a[p+c] = 0;
			c*=-1;
		}else if(sum > a[p+c] && a[p+c] != 0){
			a[p+c] = 0;
			p++;
			sum++;
		}
		//cout << p << " : " << c << endl;
		for(int k=0;k<n;k++)cout << a[k] <<" ";
		cout << endl << endl;
	}
	if(c==1)cout << "S";
	else cout << "N";
	cout<< sum;
}

