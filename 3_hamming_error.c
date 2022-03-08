#include<stdio.h>
int main()
{
int p1,p2,p4;
int data[10],i,j,c1,c2,c3,rec[20];
printf("enter the binary data to send:-\n");
scanf("%d",&data[0]);
scanf("%d",&data[1]);
scanf("%d",&data[2]);
scanf("%d",&data[4]);
data[5]=data[0]^data[1]^data[4];
data[6]=data[4]^data[2]^data[0];
data[3]=data[2]^data[1]^data[0];
printf("enterd list are:-\n");
for(i=0;i<7;i++)
{
printf("%d",data[i]);
}
printf("\nenter the encoded bits:-\n");
for(j=0;j<7;j++)
{
scanf("%d",&rec[j]);
}
c1=rec[6]^rec[4]^rec[2]^rec[0];
c2=rec[5]^rec[0]^rec[1]^rec[4];
c3=rec[3]^rec[2]^rec[1]^rec[0];
int c=c3*4+c2*2+c1*1;
if(c==0)
{
printf("there is no error:-\n");
}
else 
printf("error in position %d:-\n",c);
}

