#include<stdio.h>
#include<fcntl.h>
#include<arpa/inet.h>
int main(){
	char fname[20],buffer[1024];
	int s,n;
	struct sockaddr_in address;
	address.sin_family=AF_INET;
	address.sin_port=htons(15000);
	address.sin_addr.s_addr=INADDR_ANY;
	if((s=socket(AF_INET,SOCK_STREAM,0))<0)
		perror("socket");
	connect(s,(struct sockaddr*)&address,sizeof(address));
	printf("Enter the file name:\t");
	scanf("%s",fname);
	printf("Sending Request..\n");
	send(s,fname,sizeof(fname),0);
	while((n=recv(s,buffer,sizeof(buffer),0))>0)
	{
		printf("\nReceived response\n");
		printf("Display %s",buffer);
	}	
	return 0;	
}
