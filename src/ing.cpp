
#include "ing.hpp"

namespace ing 
{
    void test(std::string test_str)
    {
        std::cout << test_str << std::endl;
    }

    void init(int argc, char** argv,
            int x_pos, int y_pos, 
            int size_x, int size_y,
            char *title)
    {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
        glutInitWindowPosition(x_pos, y_pos);
        glutInitWindowSize(size_x, size_y);
        glutCreateWindow(title);
    }

    void triangle(GLfloat x, GLfloat y, GLfloat z)
    {
        glBegin(GL_TRIANGLES);
            glVertex3f(-x, -y, z);
            glVertex3f(x, 0.0, z);
            glVertex3f(0.0, y, z);
        glEnd();
    }
}
