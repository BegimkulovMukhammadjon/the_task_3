#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
  float a,y,y3,y4,h,b;
  float x,eps,y1=1,y2,S,n=3;
  int p=5;
  printf("Zadanie 1-Napechatat tablisu znacheniy funksii na otrezke [a,b].\n Zadanie 1 iz 3-go taska\n");
  printf("Zadanie 2-Vichislit summu ryada Maklorena s pogreshnostyu E\n Zadanie 3 iz 3-go taska\n");
  while (p!=0){ //0-vihod programmi
    printf("Viberite zadanie:");
    scanf("%d",&p);
  switch(p){
      case 1:
  printf("Zadadim funksiyu y=(5x+3)/(x+2)\n");
  int k=0;
  printf("Vvedite promejutok \na=" );
  scanf("%f,", &a);
  printf("b=");
  scanf("%f", &b);
  printf("Vvedite shag h=");
  scanf("%f", &h);
  while(a<=b){
    k++;
    y3=5*a+3;
    y4=a+2;
    y=y3/y4;
    //naydu znacheniya i uchtu delenie na 0
    if(fabs(y4*10000000)>=10)
    //takoe uslovie ispravlyaet bag,pri kotorom vihodila pogreshnost,tak kak lyuboe chislo umnjennoe na bolshoe budet bolshe 10,esli ono tolko ne sverxmaloe.
        {
    printf("rezultat nomer %d\n pri §Ñ=%.2f otvet:%.2f\n",k,a,y);
    }

    else {
        printf("rezultat nomer %d\n pri §Ñ=%.2f otvet: na nol delit nelzya\n",k,a);
    }
    a=a+h;



}

break;


      case 2:
          printf("Poschitaem ryad Maklorena funksii cos(x)\n");
printf("Razlojenie prinimaet vid: cos(x)=1-(x^2)/(2!)+(x^4)/(4!)-(x^6)/(6!)+...+(-1^(n)*x^2n)/((2n)!)\n");
printf("Vvedite znachenie x=");
scanf("%f", &x);
printf("Vvedite pogreshnost E=");
scanf("%f", &eps);
y2=-x*x/2;
S=y1+y2;
do{
    y1 = y2;
    y2=y2*((-x*x)/((n+1)*n));
    //y2 /= (n + 1) * n;
    n += 2;
    S += y2;

}while(fabs(fabs(y2) - fabs(y1)) >= eps);
printf("S=%.5f i znachenie cos(x) v tochke §ç=%.2f ravno %.5f\n",S,x,cos(x));


        break;
  }
  }














return 0;
}
