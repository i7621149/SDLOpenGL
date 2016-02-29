#include <iostream>
#include "SDLOpenGL.h"
#include <ngl/NGLInit.h>
#include <ngl/VAOPrimitives.h> //library with shapes in

void initializeGL();
void renderGL();


int main(int argc, char *argv[])
{
  std::cout << "hello world" << std::endl;

  SDLOpenGL window("my window", 0,0, 500, 500);
  window.makeCurrent();

  initializeGL();
  bool quit = false;
  while(!quit){
    SDL_Event event;
    window.pollEvent(event);
    switch(event.type){
      case SDL_QUIT:{
        quit = true;
        break;
      }
      case SDL_KEYDOWN : {
        switch(event.key.keysym.sym){
          case SDLK_ESCAPE : {
            quit = true;
            break;
          }
          case SDLK_w : {
            glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
            break;
          }
          case SDLK_s : {
            glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
            break;
          }
        }
      }
    }

    renderGL();
    window.swapWindow(); //updates the window
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
  ngl::VAOPrimitives::instance()->draw("teapot");
}
