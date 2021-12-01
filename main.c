#include "my_mat.h"
#include <stdio.h>
int main()
{
char a;
int i,j;
scanf("%c",&a);
while(a != 'D'){
    if(a == 'A'){
       A();
       shortest_path(MAT);
    }
    else{
        if (a == 'B')
        {
            scanf("%d",&i);
            scanf("%d",&j);
            if(B(i,j)){
                printf("True\n");
            }
            else{
                printf("False\n");
            }
        }
        if(a == 'C'){
            scanf("%d",&i);
            scanf("%d",&j);
            int shorte=C(i,j);
            if(shorte != -1){
                printf("%d\n",shorte);
            }
            else{
                printf("-1\n");
            }
        } 
    }
    scanf("%c",&a);
}
return 0;}