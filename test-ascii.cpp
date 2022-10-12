#include <iostream>

int main(){
  std::string inp;
  std::cout<<"Input: ";
  std::getline(std::cin,inp);
  std::cout<<"\n";
  for(int x=0;x<inp.length();x++){
    char c=inp[x];
    std::cout<<inp.substr(x,1)<<" "<<(int)c<<std::endl;
  }
  return 0;
}
