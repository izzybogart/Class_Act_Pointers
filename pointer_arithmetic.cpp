#include <iostream>
using namespace std;
intmain() {
  char shahnaz, mahnaz;
  char * p =&shahnaz;
  char * q =&mahnaz;
  *p = 'h';
  *q=*(++p);
  cout<<"p="<<*p<<endl;
  cout<<"shahnaz="<<shahnaz<<endl;
  cout<<"q="<<*q<<endl;
  return 0;  
}
