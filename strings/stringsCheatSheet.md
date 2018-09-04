# Strings

## C
___
- Array of characters.
- Unlike Character Array Terminate with a '\0'

### Declaration
- `char str[size + 1] \\ stored in memory just like other arrays i.e in stack `
- +1 for '\0'

### Initialization
```
- char str[] = "AurimusBlack";

- char str[50] = "Aurimus Black";

- char str[] = {'A','u','r','i','m','u', 's',\0'};

- char str[8] = {'A','u','r','i','m','u', 's','\0'};

- char *str  =  "Ab" // read only trying to modify gives segmentation fault. Stored in data segment

- char *str;
int size = 3; /*one extra for ‘\0’*/
str = (char *)malloc(sizeof(char)*size);
*(str+0) = 'A'; 
*(str+1) = 'b';    
*(str+3) = '\0'; /* Dynamic allocated are stored in heap */ 

```

### string.h / cstring

- **strlen(s)** - return length of string number of characters before '\0'
- **strcpy(dest,source)** - copy string source to dest and return dest.
- **strncpy(dest,source,numberOfCharacters)** - copy at most n characters of source to dest and terminates i.e:

```
char str1[] = "aurimus";

// str1 in memory: | A | u | r | i | m | u | s | \0 |

char str2[] = "black";

// str2 in memory: | B | l | a | c | k | \0 |

strcpy(str1,str2);

// str1 in memory after copying: | B | l | a | c | k | \0 | s | \0 |

```
- **strcmp(s,t)** - compare strings s and t and return first difference. i.e:
    1. s > t : positive number
    2. s == t : zero
    3. s < t : negative number 
- **strncmp(s,t,n)** stop after at most n characters.
- **strcat(str1,str2)** - Concatenates str2 at the end of str1.
- **strncat(str1,str2,n)** - Appends a portion of str2 to str1.
- **strchr(str1,\<char\>)** - Returns pointer to first occurrence of char in str1.
- **strrchr(str1,\<char\>)** - Returns pointer to last occurrence of char in str1.
- **strstr(str1,str2)** - Returns pointer to first occurrence of str2 in str1.
- **strrstr(str1,str2)** - Returns pointer to last occurrence of str2 in str1.
- **strlwr(str)** - Converts string to lowercase and returns the converted string.
- **strupr(str)** - Converts string to uppercase and returns the converted string.
- **strrev(str)** - Reverses the given string

Sample Program :
```
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

```

### References

- [https://www.geeksforgeeks.org/]
- [https://courses.cs.washington.edu/courses/cse351/14sp/sections/1/Cheatsheet-c.pdf]
- [https://courses.cs.washington.edu/courses/cse351/14sp/sections/1/Cheatsheet-c.pdf]
