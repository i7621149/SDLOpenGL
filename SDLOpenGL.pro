TARGET=SDLOpenGL #program to make

OBJECTS_DIR=obj

INCLUDEPATH+=./include #could use . or $$PWD, either works

SOURCES+=$$PWD/src/main.cpp \ #list of source files
         $$PWD/src/SDLOpenGL.cpp

HEADERS+=$$PWD/include/SDLOpenGL.h #list of headers

QMAKE_CXXFLAGS+=$$system(sdl2-config --cflags) #flags needed for sdl compilation, so that it will vary depending on system
LIBS+=$$system(sdl2-config --libs) #libraries for sdl, taken from system command

include($(HOME)/NGL/UseNGL.pri) #includes this in the project, it's some kind of NGL helper thing maybe?

OTHER_FILES+=README.md \
           ./shaders/*.glsl
