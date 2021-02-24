// more pointers
#include <iostream>
using namespace std;
intmain (){
  intnumbers[5];
  int* p;
  p = numbers;  *p = 10;
  p++;  *p = 20;
  p = &numbers[2];  *p = 30;
  p = numbers + 3;  *p = 40;
  p = numbers;  *(p+4) = 50;
  for (intn=0; n<5; n++)
    cout<< numbers[n] << ", ";
  return 0;
}
