#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1,b2;

  initBox(&b1, 1.0, 2.0, 3.0, 4.0);  
  assertEquals("ul=(1.0,2.0),w=3.0,h=4.0", boxToString(b1,2), "boxToString(b1)");

  initPoint(&b2,3.14159,6.2831853071);
  assertEquals("(3.14,6.28)", pointToString(p2), "pointToString(p2)");
  assertEquals("(3,6)", pointToString(p2,1), "pointToString(p2,1)");
  assertEquals("(3.142,6.283)", pointToString(p2,4), "pointToString(p2,4)");
  assertEquals("(3.1416,6.2832)", pointToString(p2,5), "pointToString(p2,5)");

		   
  return 0;
}
