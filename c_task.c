#include<stdio.h>
#include<conio.h>
#include <string.h>
int main(){
    char LoginId[100];
    char Password[100];

   // while(1){
    printf("Welcome to the Login_System\n");
    printf("Please Enter your LoginID\n");
    //gets(LoginId);
    scanf("%s" ,&LoginId);
    printf("Please Enter your Password\n");
    //gets(Password);
     scanf("%s", &Password);
    if(strcmp(LoginId,"Raneem")==0){
        if(strcmp(Password,"12345")==0){
            printf("Hi,You are Welcome\n");
           // break;
        }
    }
    else{
        printf(" Worng password or username please,Try Again!!\n");
    }
  //  }
    return 0;
}
 

