
/*
 *  Main test file as of now
 *  since I can't bother to make
 *  actual files in /test directory
 */

#include "ing.hpp"

/*
 * TODO:
 *      - move this to ing namespace
 *      - make this an ing function
 */
void renderScene(void) {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	ing::triangle(0.5,0.5,0);

    glutSwapBuffers();
}

int main(int argc, char **argv)
{

    // initiate the window
    ing::init(argc, argv, 100, 100, 320, 320, "test");

	// Draw a triangle
    // TODO: move to ing!
	glutDisplayFunc(renderScene);

    // TODO: move to ing!
	// enter GLUT event processing cycle
	glutMainLoop();

    return 1;
}
