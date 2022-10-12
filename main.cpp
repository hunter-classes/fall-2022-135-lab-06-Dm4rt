#include <iostream>
#include "funcs.h"
#include "caesar.h"

int main()
{
  std::string phrase;
  phrase="Way to Go!";
  std::cout<<"encryptCaesar(Way to go!,5): "<<encryptCaesar(phrase, 5)<<std::endl;
  return 0;
}
