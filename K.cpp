#include <bits/stdc++.h>

using namespace std;

int R, C;
int a[105][105];

int visited[5][105][105];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void printV(){

  for(int i = 0; i< 4; i++){
    for(int j = 1; j <= R; j++){
      for(int k = 1; k <= C; k++){
        printf("%8d", visited[i][j][k]);

      }
      cout << endl;
    }

  }
}
void ini(){
  for(int i = 0; i < 4; i++){
    for(int j = 1; j <= R; j++){
      for(int k = 1; k <= C; k++){
        visited[i][j][k] == 9999999;
      }
  }
}

}

bool safety(int x, int y){
  return x> 0 && y > 0 && x <= R && y <= C;
}

void mach(int x, int y, int bad){

  queue < pair <int, int> > q;
  q.push(make_pair(x,y));
  visited[bad][x][y] = 0;

  while(!q.empty()){
    int cx = q.front().first; int cy = q.front().second;
    q.pop();
    for(int i = 0; i < 4; i++){
      int nx = cx + dx[i]; int ny = cy + dy[i];
      if(safety(nx,ny) && a[nx][ny] != 1){
        if(visited[bad][nx][ny] == 9999999){
          visited[bad][nx][ny] = visited[bad][cx][cy]+1;
          q.push(make_pair(nx,ny));
        }
      }
    }
  }



}


int main(){

  scanf("%d %d", &R, &C);
  for(int i = 1; i <= R; i++){
    for(int j = 1; j <= C; j++){
      scanf("%1d", &a[i][j]);
    }
  }


  ini();

  for(int i = 0; i < 3; i++){
    int temp1, temp2;
    scanf("%d %d", &temp1, &temp2);
    mach(temp1,temp2,i);
  }

    int min1 = INT_MAX;
    for(int j = 1; j <= R; j++){
      for(int k = 1; k <= C; k++){
          visited[3][j][k] = visited[0][j][k] + visited[1][j][k]+visited[2][j][k];
          min1 = min(min1, visited[3][j][k]);
        }
      }

      
      int ct = 0;

      for(int j = 1; j <= R; j++){
        for(int k = 1; k <= C; k++){
            if(min1 == visited[3][j][k]) ct++;
          }
        }

        if(min1 >= 9999999){
          printf("-1");
        }
        else {
          printf("%d\n %d", min1, ct);
        }
}
