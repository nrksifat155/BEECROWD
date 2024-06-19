#include <stdio.h>
main()
{
int sum1, sum2, sum3, sum4, sum5, sum6;
int A,B,C,D,sun, sun1;
    scanf("%d%d%d%d", &A,&B,&C,&D);


     if(A==B && B==C && C==D && C==A && B==D && A==D  && A==B)
{ sun = 24;
sun1= 0;
     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S\n",sun,sun1);
}
 else{   sum1= (A*60)+B;
    sum2= (C*60)+D;
    sum3= sum2-sum1;

    sum4= sum3 /60; //print
    sum5= sum4*60;
    sum6=sum3-sum5;//print

     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",sum4,sum6);

}
}
