#include <bits/stdc++.h>
#include <string.h>

using namespace std;


int N;

int getJarisu(int n){

  int cnt = 0;
  int n1 = n;
  while(n1 > 0){
    cnt++;
    n1 = n1/10;

  }

  return cnt;
}

int mach(int n, int jari){
  if(n == 0 ) return 9;
  if(n == 100) return 100;
  int c[5];
  int x= n;
  for(int i = 1 ; i <= jari ; i++){
    c[i] = x%10;
    x = x/10;
  }
  int sum = 0;
  for(int i = 1; i <= jari; i++){
    if(c[i] == 0 || c[i] == 6) c[i] = 9;
    sum += (c[i]*pow(10, i-1));
  }
  return sum;


}

int main(){

  scanf("%d", &N);
  float ans = 0.0;
  for(int i =0; i < N; i++){
    int temp;
    scanf("%d", &temp);
    int t = mach(temp,getJarisu(temp));
    ans += (float)t;
  }

  printf("%d", (int)round(ans/(float)N));

}
