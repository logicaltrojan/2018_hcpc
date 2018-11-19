#include <bits/stdc++.h>

using namespace std;

int  N;
vector < long long > a;
vector < long long > v;

int main(){

  scanf("%d", &N);

  a.push_back(0);
  for(int i = 1; i <= N; i++){
    long long temp;
    scanf("%lld", &temp);
    a.push_back(temp);
  }

  sort(a.begin(),a.end());

  int cnt;
  for(int i = 1; i <= N+1; i++){
    if(a[i] != i){
      cnt = i;
      break;
    }
  }

  printf("%d", cnt);



  return 0;

}
