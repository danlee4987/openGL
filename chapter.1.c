#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#define WINDOW_TITLE_PREFIX "Chapter 1"

int
    CurrentWidth = 800,
    CurrentHeight = 600,
    WindowHandle = 0;

void Initialize(int, char*[]);
void InitWindow(int, char*[]);
void ResizeFunction(int, int);
void RenderFunction(void);

int main(int argc, char* argv[])
{
    Initilialize(argc, argv);
    
    glutMainLoop();
    
    exit(EXIT_SUCCESS);
}

void Initialize(int argc, char* argv[])
{
    InitWindow(argc, argv);
    
    fprintf(
        stdout,
        "INFO: OpenGL Version: %s\n",
        glGetString(GL_VERSION)
    );
    
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

}

