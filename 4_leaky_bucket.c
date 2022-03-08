#include<stdio.h>
int main()
{
int inc,outg,bucs,n,store=0;
printf("enter the number of packets to send\n");
scanf("%d",&n);
printf("enter the capacity of outgoing value\n");
scanf("%d",&outg);
printf("enter the size of the bucket\n");
scanf("%d",&bucs);
printf("enter the value for incomming data\n");
while(n!=0)
{
scanf("%d",&inc);
if(inc<=(bucs-store))
{
store+=inc;
//printf("Store are %d ,incomming are %d\n",store,inc);
}
else
{
int e=inc-(bucs-store);
printf("dropped packet are %d\n",e);
printf("bucketsize %d out of %d is full\n",store,bucs);
store=bucs;
}
store=store-outg;
printf("for data %d. Store value is=%d Bucket size is=%d\n",inc,store,bucs);
n--;
}
}
