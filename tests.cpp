#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"

// add your tests here
TEST_CASE("shiftChar"){
  CHECK(shiftChar('n',5)=='s');
  CHECK(shiftChar('N',5)=='S');
  CHECK(shiftChar('y',7)=='f');
  CHECK(shiftChar('Y',7)=='F');
  CHECK(shiftChar('!',10)=='!');
}

TEST_CASE("encryptCaesar"){
  CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
  CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
}
