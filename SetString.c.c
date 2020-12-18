#include <string.h>
#include <stdlib.h>

// immutable 




char* encryptdecryptxor(const char* Message[]) 
{ 
    
    char Keyxor='D'; 
    int lenstring = strlen(Message); 
  
    
    for (int i = 0; i < lenstring; i++) 
    { 
        Message[i] = Message[i] ^ Keyxor; 
        printf("%c",Message[i]); 
    } 
    return Message;
} 
  



char * EncryptCaesarCipher(const char* Message[],  unsigned int Key);
char * EncryptCaesarCipher(const char* Message[],  unsigned int Key)
{
    unsigned int i;
    for( i=0; i < strlen(Message); i++)
    {
         if ((Message[i] >= ' ' && Message[i] <= '@') >=1 ||
            (Message[i] >= '[' && Message[i] <= '`') >=1 ||
            (Message[i] >= '{' && Message[i] <= '~') >=1 ) 
        continue;
        
        else if(isalpha(Message[i] + Key) == 0) 
              Message[i] = (Message[i] - 26) + Key; 
              
        else Message[i] += Key;
    }
    
    return Message;
}


char* Filter(const char* Message)
{
	int lenMessage;
	lenMessage = strlen(Message);
	char* Message1;
	Message1 = malloc(lenMessage * sizeof(char));
	int l = 0;
	for(int i = 0; i < lenMessage; i++)
             {
		if (((47 < Message[i]) && (Message[i] < 57)) || ((64 < Message[i]) && (Message[i] < 91)) || ((96 < Message[i]) && (Message[i] < 122)) || (Message[i] == ' '))
		{
			Message1[l] = Message[i];
   			l += 1;
		}
	}
	Message1 = realloc(Message1,(1 + l) * sizeof(char));
       Message1[l]='\0';
	return Message1;
        free(Message1);
}
   




char* removeSpaces(const char* Message) 
{ 
    
    int Size = 0; 
  
    
    for (int i = 0; Message[i]; i++) 
        if (Message[i] != ' ') 
            Message[Size++] = Message[i]; 
    Message[Size] = '\0'; 
    return Message;
}   



char* toUpper(const char* Message)
{
    while (Message != '\0')
    {
        Message = toupper(Message);
        Message++;
    }
    return Message;
}
char* toLower(const char* Message)
{
      while (Message != '\0')
    {
        Message = tolower(Message);
        Message++;
    }
    return Message;
}



char* strip(const char* Message) 
{
        int i = 0;
        int lenMessage = strlen(Message) - 1;

        while(Message[i] == ' ') {
                i++;
        }

        while(Message[lenMessage] == ' ') {
                lenMessage--;
        }

        for(int k = 0; k < lenMessage; k++, i++) {
                Message[k] = Message[i];
        }
        Message[lenMessage-1] = '\0';
        return Message;
}


//mutable
void Mencryptdecryptxor(char Message[])
{
       char* Message1;
       Message1 = encryptdecryptxor(Message);
       *Message = Message;
}
void MEncryptCaesarCipher(char Message[],  unsigned int Key)
{
        char* Message1;
        Message1 = EncryptCaesarCipher(Message,key);
        *Message = Message;
}
void  MFilter(char* Message)
{
	char* Message1;
	Message1 = Filter(Message);
	*Message=Message1;
}
void MremoveSpaces(char* Message)
{
	Message = removeSpaces(Message);
}

void MtoUpper(char* Message)
{
	Message = toUpper(Message);
}

void MtoLower(char* Message)
{
	Message = toLower(Message);
}

void Mstrip(char* Message)
{
        Message = strip(Message);
}

