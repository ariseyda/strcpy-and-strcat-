#include<stdio.h>
#include<string.h>

//What are the outputs of the following programs? Provide screenshots. 


int main() {  

   char s1[]="is";  
   
   char s2[]="C";
     
   char s3[]="the best"; 
    
   char s4[]="programming language";
     
   char message[100];
     
   strcpy(message,s2);  
   strcat(message,s1);  //The strcat () function adds the second of two character strings to the end of the first.
   strcat(message,s3);  
   strcat(message,s4);
     
   printf("%s",message);
   
     
   return 0; 
   
} 
