#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int count=0;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		if(tmp >= k){
			count++;
		}
	}

	cout << count << endl;
}