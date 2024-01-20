
#include <stdio.h>
#include <iostream>

#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

namespace ing
{
    /*
     *  test function!!!
     */
    void test(std::string test_str);

    /*
     *  init
     *  ------------------------------
     *      x_pos  - window position on X cord.
     *      y_pos  - window position on Y cord.
     *      size_x - size of window width
     *      size_y - size of window height
     *      title  - window title
     */
    void init(int argc, char** argv,
              int x_pos, int y_pos, 
              int size_x, int size_y,
              char *title);

    /*
     *  triangle
     *  --------------------------------
     *      x - x cord.
     *      y - y cord.
     *      z - z cord.
     */
    void triangle(GLfloat x, GLfloat y, GLfloat z);
}