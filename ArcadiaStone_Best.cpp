#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	if(b>a){
		int sum;
		sum = a;
		a=b;
		b=sum;
	}
	if(a%b!=0)cout << a%b;
	else cout << b;
}
