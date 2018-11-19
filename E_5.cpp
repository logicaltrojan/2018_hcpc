#include <bits/stdc++.h>

using namespace std;

int a[100005];


int main(){

  int N;
  scanf("%d", &N);

  N = N-2019;

  for(int i = 0; i <= N; i++){
    if(i%4 == 0 || i%4 == 1) a[i] = 2;
    else a[i] =1;
  }
  int sum =0;
  for(int i = 0; i <= N; i++){
    sum += a[i];
  }

  cout << sum;

}
