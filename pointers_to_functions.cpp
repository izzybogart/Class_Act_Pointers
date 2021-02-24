/ pointer to functions
#include <iostream>
using namespace std;
intaddition (inta, intb){
  return (a+b);
}
intsubtraction (inta, intb){ 
  return (a-b); 
}
intoperation (intx, inty, int(*functocall)(int,int)){
  intg;
  g = (*functocall)(x,y);
  return (g);
}
intmain (){
  intm,n;
  int(*minus)(int,int) = subtraction;
  m = operation (7, 5, addition);
  n = operation (20, m, minus);
  cout<<n;
  return 0;
}
