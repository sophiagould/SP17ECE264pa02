#include <stdio.h>
#include <stdlib.h>

void f1(void) 
{
  int f1_top = 0xAAAA; // used as references
  unsigned char name[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int f1_bottom = 0xBBBB; // used as references

  // TODO: modify name's elements so that the program prints
  // REALLY BAD IF YOU SEE THIS
}

void f2(void) 
{
  int f2_top = 0xCCCC; // used as references
  char message[] = "REALLY BAD IF YOU SEE THIS\n"; 
  printf(message);
  int f2_btm = 0xDDDD; // used as references
}

int main(int argc, char * * argv) 
{
  int main_top = 0xEEEE; // used as references
  f1();	
  int main_btm = 0xFFFF; // used as references
  return EXIT_SUCCESS;
}
