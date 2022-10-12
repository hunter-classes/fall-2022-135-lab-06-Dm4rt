#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

int main()
{
  std::cout<<"encryptCaesar('Way to Go!,5'): "<<encryptCaesar("Way to Go!", 5)<<std::endl;
  std::cout<<"encryptVigenere('Hello, World!', 'cake'): "<<encryptVigenere("Hello, World!", "cake")<<std::endl;
  return 0;
  
}
