
//github edit
#include<stdio.h>
int calculate();
void main()
{    int k;
     int count=0;
     scanf("%d",&count);
     int answer[count];
    for(k=0;k<count;k++)
    {
        answer[k]=calculate();
    }
     for(k=0;k<count;k++)
    {
        printf("\n %d",answer[k]);
    }


}
int calculate()
{
    long int a[10000],no;
    long int dv=1,t=1,i=0,l,n=0,j,temp;
    scanf("%d",&no);
 do
  {
      t=t*10;
      dv=dv+t;
      if(no%dv!=0)
      {

      }
      else
      {
          a[i]=no/dv;
          i++;
          n++;

      }
      l=no/dv;
  }
   while(l>1);

   return a[i-1];
}

