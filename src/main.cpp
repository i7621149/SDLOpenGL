#include <iostream>
#include "SDLOpenGL.h"
#include <ngl/NGLInit.h>

void initializeGL();
void renderGL();


int main(int argc, char *argv[])
{
  std::cout << "hello world" << std::endl;

  SDLOpenGL window("my window", 0,0, 500, 500);
  window.makeCurrent();

  initializeGL();

  while(true){
    renderGL();
    window.swapWindow();
    SDL_Delay(10);
  }

  return EXIT_SUCCESS;
}

void initializeGL()
{
  ngl::NGLInit::instance();
  glClearColor(1.0, 0.0, 0.0, 1.0);
}

void renderGL()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}
