#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"



int main() {

  struct Box b1,b2;

  initBox(&b1, 1.74867, 2.489, 3.4985, 4.0);  
  assertEquals("ul=(1.7,2.5),w=3.5,h=4", boxToString(b1,2), "boxToString(b1,2)");

  initBox(&b2,6.3,8.43,7.8908,5.7867);
  assertEquals("ul=(6.3,8.43),w=7.89,h=5.79", boxToString(b2,3), "boxToString(b2,2)");
  assertEquals("ul=(6.3,8.43),w=7.891,h=5.787", boxToString(b2,4), "boxToString(b2,3)");
		   
  return 0;
}
