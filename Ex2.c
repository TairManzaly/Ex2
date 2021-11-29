#include <stdio.h>
#include <stdbool.h>
#define V 10
typedef int MAT[V][V];
void matrix(){
    MAT mat;
   int i, j;
   for(i=0; i<10; i++) {
      for(j=0;j<10;j++) {
         scanf("%d", &mat[i][j]);
      }
   }
}

bool path_exict(int i, int j){
    return false;
}

int shortest_path(int i, int j){
    MAT A;
    if (i==j)
    {
        return 0;
    }
    
    else if(!path_exict(i,j)) return -1;
    else{
    
    for (int k = 0; i < V; i++)
    {
       for (int i = 0; i < V; i++)
       {
           for (int j = 0; j < V; j++)
           {
              if (A[i][j]>A[i][k]+A[k][j])
              {
                A[i][j]=A[i][k]+A[k][j];
              }
              
           }
           
       }
       
    }
    return A[i][j];
    }
    
}
    int main(int argc, char const *argv[])
    {
       
        return 0;
    }
    


