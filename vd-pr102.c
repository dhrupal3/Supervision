#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	
	p=fopen("Write.txt","r");
	
	if(p==NULL)
	{
		printf("File Is Could Not Open...");
	}
	else
	{
		while(fgets(data,25,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
