#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,y;
  int a=-1,b=-1,c=-1;
  cin >> n >> y;
  
  for(int i=0; i <= n; i++){
    for(int j=0; j <= n-i; j++){
      if(10000*i+5000*j+1000*(n-i-j) == y){
        a = i;
        b = j;
        c = n-i-j;
        break;
      }
    }
  }
  cout << a << " " << b << " " << c << endl;
      
}