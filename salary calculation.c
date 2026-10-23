#include<stdio.h>
int main()
{
float bs,hra,da,gross,pf,net,tax;
printf("Enter basic salary: ");
scanf("%f",&bs);
if(bs<=10000){
    printf("HRA=%f, DA=%f,tax=%f\n",bs*0.2,bs*0.2,bs*0.15);
} else if(bs>10000 && bs<=20000){
    printf("HRA=%f, DA=%f,tax=%f\n",bs*0.25,bs*0.25,bs*0.25);
} else {
    printf("HRA=%f, DA=%f,tax=%f\n",bs*0.3,bs*0.3,bs*0.3);
}
printf("pf=%f\n",bs*0.08);
printf("gross=%f\n",bs+hra+da);
printf("net=%f\n",gross-(pf+tax));
return 0;
}