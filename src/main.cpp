#include <iostream>
#include "SDLOpenGL.h"

int main(int argc, char *argv[])
{
  std::cout << "hello world" << std::endl;

  SDLOpenGL window("my window", 0,0, 500, 500);

  return EXIT_SUCCESS;
}
