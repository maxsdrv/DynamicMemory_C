#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "FileManager.h"
#include "DynamicMemory.h"

char* helloFunction(char* name, char* out){
	char welcome[255] = "Hello, ";
	name[0] = tolower(name[0]);
	if (strcmp("Ivan", name) == 0){
	  strcpy(name, "Master");
	}
	name[0] = toupper(name[0]);
	strcat(welcome, name);
	strcpy(out, welcome);
}

 struct Fraction{
  int integer;
  int divisible;
  int divider;
};
typedef struct Fraction fraction;

 void frPrint(fraction f){
   if (f.divisible != 0){
	 if (f.integer == 0){
	   printf("%d / %d", f.divisible, f.divider);
	 }
	 else {
	   printf("%d | %d / %d", f.integer, f.divisible, f.divider);
	 }
   }
   else {
	 printf("%d", f.integer);
   }
 }

 void frDesinteger(fraction* f){
   int sign = (f->integer < 0) ? -1 : 1;
   if (f->integer < 0)
	 f->integer = -f->integer;
   f->divisible = f->divisible + (f->integer * f->divider);
   f->divisible *= sign;
   f->integer = 0;
 }

 void frMul(fraction f1, fraction f2,fraction* r){
   frDesinteger(&f1);
   frDesinteger(&f2);
   r->divisible = f1.divisible * f2.divisible;
   r->divider = f1.divider * f2.divider;
 }

int main()
{
  //Strings

  /*char name[255];
  char result[255];
  gets(name);
  puts(name);
  helloFunction(name, result);
  printf("%s\n", result);
  char num[64];
  puts("Input decimal: ");
  gets(num);
  int number = atoi(num);
  number *= number;
  printf("We made your decimal in square: %d", number);*/

//Structs
  /*
  fraction f1, f2, result;
  f1.integer = -1;
  f1.divisible = 1;
  f1.divider = 5;

  f2.integer = 1;
  f2.divisible = 1;
  f2.divider = 5;
  result.integer = 0;
  result.divisible = 0;
  result.divider = 0;

  frPrint(f1);
  puts("");
  frPrint(f2);
  puts("");
  frMul(f1, f2, &result);
  frPrint(result);
  printf("\n");
  */

//Read and write from text file...
//  FunctionOpen();

//Dynamic memory allocation...

MemoryAllocation();







  return 0;
}
