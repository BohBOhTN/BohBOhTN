#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int num,u,d,c ;
    printf("Entrer Un Entier de 3 Chiffre \n");
    scanf("%d",&num);
    if ( num > 111 && num <= 999){
        u = pow((num %10),3) ;
        printf("L'unite %d\n",u);
        d = pow(((num / 10 ) %10),3);
        printf(" la disene %d\n",d);
        c = pow((num / 100),3) ;
        printf("la centenne %d\n",c);
                if ( u+d+c == num )
                    printf("Le Num %d est cubique \n",num);
                else
                    printf("Le Num %d n'est pas cubique \n ",num);
    }
    else
    printf("Error !! %d  Ne Contien pas 3 chiffres Exact  ",num);

    return 0;
}
