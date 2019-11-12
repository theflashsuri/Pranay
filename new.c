#include<stdio.h>
#include<string.h>
#include <conio.h>

int main()
{
 
    char username[15];
    char password[12];
    char arr[500]; char key[100];
    int i,k,j, c=0, n, x, first = 1, second = 1, next;
 
  
 // for storing password
  
  
  printf("Enter your username : ");
  //gets(username);
  scanf("%s",username);
  
  printf("Enter your password : ");
  /* accept password */
 
  for(i=0;i<9;i++)
  {
   password[i]=getch();
   printf("*");   	
  }
  password[i]='\0';
 
/*------------------*/
 
  printf("\n\nPress any key to continue");
  getch();
 
 if(!strcmp(username,"pranjal") && !strcmp(password,"123456789"))
 {
  printf("\n\nLogged In Successful");
        
    //generation of source code and message


   printf("\nEnter a source message for the encryption\n");
   scanf("%s",&arr);
   printf("Enter the source message key\n");
   scanf("%s",&key);
 
    /*for(i=0; key[i]!='\0'; i++);
   {
   printf("length of string: %d", i);
}*/

i=strlen(key);
   
//generation of fibionacci series
   
   int s = 2;
   for (c = 3; c <= i; c++)
  {
      next = first + second;
      first = second;
      second = next;
       s = s+ next;
    //printf("\n%d", next);
}

   i =0 ;
   printf("\n1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d", &x);
   //using switch case statements
   switch(x)
   {
   case 1:
{   strrev(arr);
       strcat(arr,key);
   printf("\n");
   printf("message after been merged with password: ");
   printf(arr);
	   
	while (i <= s)
{
	for(j = 0; (j < 100 && arr[j] != '\0'); j++)
   {   if (j%2==0)
      { if (arr[j]=='z' || arr[j]=='Z')
    arr[j]=(int)arr[j]- 26 + 1;
else
arr[j] = (int)arr[j]+1;
    }
 
         else {
if (arr[j]=='a'|| arr[j]=='A')
arr[j] = (int)arr[j]+26 - 1;
else
arr[j]= (int)arr[j]-1;
}
       
    }
   i ++ ;  
    }
 printf("\nEncrypted String: %s\n", arr);}
      break;


   case 2:
{  i =0 ;
        
	while (i <= s)
{
	for(j = 0; (j < 100 && arr[j] != '\0'); j++)
   {   if (j%2==0)
      { if (arr[j]=='a' || arr[j]=='A')
    arr[j]=((int)arr[j]+26)- 1;
else
arr[j] = (int)arr[j]-1;
    }
 
       else {
if (arr[j]=='z'|| arr[j]=='Z')
arr[j] = ((int)arr[j]-26) + 1;
else
arr[j]= (int)arr[j]+1;
}
       
    }
   i ++ ;  
    }
    strrev(arr);
 printf("\Decrypted string: %s\n", arr);
 
 }
      break;
default:
      printf("\nError\n");
   }
 
 
        
    }else{
    printf("\nUser doesn't exist");
} 


   
return 0;
}
