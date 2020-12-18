#include <stdio.h>
#include <string.h>




int Number(const char* Message)
{
	int lenMessage;
	lenMessage=strlen(Message);
	int i=0;
	int Number=1;
	while(Number&&(i<lenMessage))
	{
		if((Message[i]<='0')||(Message[i]>='9'))
		{
			Number=0;
		}
		i+=1;
	}
	return Number;
}
int Letter(const char* Message)
{
	int lenMessage;
	lenMessage=strlen(Message);
	int i=0;
	int Number=1;
	while(Number&&(i<lenMessage))
	{
		if((Message[i]<='a')||((Message[i]>='z')&&(Message[i]<='A'))||(Message[i]>='Z'))
		{
			Number=0;
		}
		i+=1;
	}
	return Number;
}
