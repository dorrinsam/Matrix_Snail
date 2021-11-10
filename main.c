#include <stdio.h>
#include <stdlib.h>

int main(){

int i, j, k;
int a1 = 0, a2 = 0, n = 0, m = 0, b1 = 0, b2 = 0;
  scanf("%d", &k);

n = k;
m = k;

int a[k][k];
  for(i = 0; i < k; i++){
    for(j = 0; j < k; j++){
      scanf("%d", &a[i][j]);
                                    }
                                         }
  while(a2 < m && a1 < n){
    for(i = a1; i < n; ++i){
       b1 += a[a2][i];

int temp = sqrt(b1);
  if(temp - sqrt(b1) == 0)
    b2++;
                                               }
    a2++;

      for(i = a2; i < m; ++i){
        b1 += a[i][n - 1];
int temp = sqrt(b1);
  if(temp - sqrt(b1) == 0)
    b2++;
                                                     }
    n--;

  if( a2 < m){
    for(i = n - 1; i >= a1; --i){
       b1 += a[m - 1][i];

int temp = sqrt(b1);
  if(temp - sqrt(b1) == 0)
    b2++;
                                                              }
    m--;
                                                                 }
  if(a1 < n){
    for(i = m - 1; i >= a2; --i){
       b1 += a[i][a1];

int temp = sqrt(b1);
  if(temp - sqrt(b1) == 0)
    b2++;
                                                                          }
    a1++;
                                                                              }
                                                                                   }
       printf("%d", b2);


return 0;
                                                                                          }
