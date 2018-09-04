#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "aurimus";
    char str2[] = "black";
    char str3[] = "hey";
    char str4[] = "Hello";
    char str5[] = "World";
    printf("\nsize : %d\n", strlen(str1));
    printf("strcpy(str1,str2) : %s\n", strcpy(str1,str2));
    printf("strncpy(str3,str2,3) : %s\n", strncpy(str3,"bla",3));
    printf("strcmp(str1,str3) : %d\n",strcmp(str1,str3));
    printf("strcmp(str1,str1) : %d\n",strcmp(str1,str1));
    printf("strcmp(str3,str1) : %d\n",strcmp(str3,str1));
    printf("str4 : %s, str5 : %s\n",str4,str5);
    printf("strcat(str4,str5) : %s\n",strcat(str4,str5));
    printf("strchr(str4,'l') : address : %d\n",strchr(str4,'l'));
    printf("strrchr(str4,'l') :address :%d\n",strrchr(str4,'l'));
    printf("str4 : %s, str5 : %s\n",str4,str5);
    printf("strstr(str4,str5): %d",strstr(str4,str5));
    printf("str4 : %s, str5 : %s\n",str4,str5);

    return 0;
}