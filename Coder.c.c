#include<string.h>


void encryptdecryptxor(char Message[]) 
{ 
  char Keyxor='D'; 
  int lenstring = strlen(Message); 

  
  for (int i = 0; i < lenstring; i++) 
  { 
      Message[i] = Message[i] ^ Keyxor; 
      printf("%c",Message[i]); 
  } 
} 
