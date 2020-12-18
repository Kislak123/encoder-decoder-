#include<stdio.h>
#include<ctype.h>
#include"SetString.h"
#include"TestString.h"
#include"Coder.h"

#define MaxMessageSize 256

int main()
{
  char Message[MaxMessageSize];
  scanf("%s", Message);
  printf("Encrypt: \n"); 
  encryptdecryptxor(Message);
  printf("Decrypt: \n");
  encryptdecryptxor(Message);
  return 0;
}