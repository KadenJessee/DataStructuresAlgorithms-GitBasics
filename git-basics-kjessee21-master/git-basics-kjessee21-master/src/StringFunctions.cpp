#include "StringFunctions.h"

int StringFunctions::myStringLen(const char* str){
   int count = 0;
   while(*str != '\0'){
       str++;
       count++;
   }
   return count;
}
