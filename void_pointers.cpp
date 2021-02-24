// increaser#include <iostream>
using namespace std;
void increase (void* data, intpsize){
  if ( psize== sizeof(char) ){ 
    char* pchar; 
    pchar=(char*)data; ++(*pchar); }
  else if (psize== sizeof(int) ){ 
    int* pint;
    pint=(int*)data; ++(*pint); }
}

intmain (){
  char a = 'x';
  intb = 1602;
  increase (&a,sizeof(a));
  increase (&b,sizeof(b));
  cout<< a << ", " << b << endl;
  return 0;
}
