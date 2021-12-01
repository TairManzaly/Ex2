#include "my_mat.h"
#include <stdio.h>
void A(){
   int i, j;
   for(i=0; i<10; i++) {
      for(j=0;j<10;j++) {
         scanf("%d", &MAT[i][j]);
         if(MAT[i][j]==0){
             if(i != j){
                 MAT[i][j]=INF;
             }
         }
      }
   }
}

bool B(int i, int j){
    if(AM[i][j]!=0 && AM[i][j] != INF){
        return true;
    }
    else{ 
        return false;
    }
}
int C(int i, int j){
    if(AM[i][j]!=0 &&  AM[i][j] != INF){
        return AM[i][j];
    }
    else{ 
        return -1;
    }
}
void shortest_path(int MAT[V][V]){
    int i;
    int j;
    for (i = 0; i < V; i++){
        for (j = 0; j < V; j++){
            AM[i][j] = MAT[i][j];
        }
    }

   
    for (int k = 0; k < V; k++)
    {
       for ( i = 0; i < V; i++)
       {
           for ( j = 0; j < V; j++)
           {
              if (AM[i][j]>AM[i][k]+AM[k][j])
              {
                AM[i][j]=AM[i][k]+AM[k][j];
              }
              
           }
           
       }
       
    }  
}