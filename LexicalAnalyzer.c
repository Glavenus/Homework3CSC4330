#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char arr[32][8] = 
{
    "auto"
    "break"
    "case"
    "char"
    "const"
    "continue"
    "default"
    "do"
    "double"
    "else"
    "enum"
    "extern"
    "float"
    "for"
    "goto"
    "if"
    "int"
    "long"
    "register"
    "return"
    "short"
    "signed"
    "sizeof"
    "static"
    "struct"
    "switch"
    "typedef"
    "union"
    "unsigned"
    "void"
    "volatile"
    "while"
}


//check special characters based on the list provided form https://www.tutorialspoint.com/what-are-the-special-symbols-in-c-language

bool isSpecialCharacter(char ch)
{
    if (ch == '~' || ch == '!' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*' || ch == '(' || ch == ')' || ch == '+' || ch == ',' || 
    ch == '.' || ch == '/' || ch == '|' || ch == '\\' || ch == ',' || ch == '-' || ch == '=' || ch == '<' || ch == '>' || ch == '?' || ch == '{' || ch == '}' || ch == '[' || ch == ']' || 
    ch == ':' || ch == '\"' || ch == ';' ||)
    return (true);

    else 

    return (false);
}

bool isValid(string str, int n)
{
    //check for keyword

    int result=0,i;

   for(i = 0; i < 32; i++) {
      if(strcmp(str,arr[i])==0) {
         result=1;
      }
   }
   if(result==1)

   return (false);

   else
 
    // If first character is invalid
    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_'))
        return false;
 
    // Traverse the string for the rest of the characters
    for (int i = 1; i < str.length(); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_'))
            return false;
    }
 
    // String is a valid identifier
    return true;
}


bool isInteger(char* str)
{
    int i, len = strlen(str);
 
    if (len == 0)
        return (false);
        
    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && str[i] != '8' && 
        str[i] != '9' || (str[i] == '-' && i > 0))
            return (false);
    }
    return (true);
}