#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0;
	cin >> n;	
	for(int i=2;i>0;i++){
		bool check=true;
		for(int j=i-1;j>1;j--){
			if(i%j==0){
				check=false;
				break;
			}
		}
		if(check){
			sum++;
			if(sum == n){
				cout << i;
				break;
			}
			
			
		}		
	}
}

