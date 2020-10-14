#include<stdio.h>

int main()
{
int j, aux, i, k;





for(i=1;i<=7;i++){
    for(j=1;j<=i;j++){
    printf("%d",j);
    }
    aux=0;
    for(k=i+1;k<=8;k++){
        aux=aux+1;
        printf("%d",aux);

    }
    printf("\n");
    
return 0;
}
}