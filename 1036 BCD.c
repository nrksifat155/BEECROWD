#include<stdio.h>
main()
{
    float A,B,C,sum1,R1,R2;
    scanf("%f%f%f",&A,&B,&C);
    sum1 = sqrt((B*B)-(4*A*C));
    R1= (-B+sum1)/(2*A);
    R2= (-B-sum1)/(2*A);
    if(R1>0 && R1<0 && R2>0 && R2<0)
    {
    printf("R1 = %.5f\nR2 = %.5f\n",R1,R2);
    }

    else
    {
printf("Impossivel calcular\n");
    }


}
