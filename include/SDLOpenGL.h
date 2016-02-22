#ifndef SDLOPENGL_H__
#define SDLOPENGL_H__

#include <SDL.h>
#include <string>

class SDLOpenGL
{
public :
  SDLOpenGL(const std::string &_name,
            int _x,
            int _y,
            int _width,
            int _height);

private :
  int m_x;
  int m_y;
  int m_width;
  int m_height;
  std::string m_name;
  SDL_GLContext m_gl_context;
  SDL_Window *m_window;

  void init();
  void createGLContext();
  void errorExit(const std::string &_msg) const; //read only method, doesn't change attributes of class
};

#endif/*SDLOPENGL_H__*/
