#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	
	p=fopen("Write.txt","a");
	
	if(p==NULL)
	{
		printf("File Is Could Not Open");
	}
	else
	{
		printf("Enter Data = ");
		gets(data);
		fputs(data,p);
		printf("Data Add Succesful...");
	}
	fclose(p);
}
