TARGET=SDLOpenGL #program to make

OBJECTS_DIR=obj

SOURCES+=$$PWD/src/main.cpp \ #list of source files
         $$PWD/src/SDLOpenGL.cpp

HEADERS+=$$PWD/include/SDLOpenGL.h #list of headers

include($(HOME)/NGL/UseNGL.pri) #includes this in the project, it's some kind of NGL helper thing maybe?
