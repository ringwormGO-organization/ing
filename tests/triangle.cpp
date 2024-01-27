#include "../src/ing.hpp"

void render(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    ing::triangle(0.5,0.5,0);

    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    ing::init(argc, argv, 100, 100, 320, 320, "triangle test");
    glutDisplayFunc(render);
    glutMainLoop();
    return 1;
}
