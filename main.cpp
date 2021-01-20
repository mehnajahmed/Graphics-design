#include <windows.h>
#include <GL/glut.h>

void display()
{
    /*
    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, -0.5);
    glColor3f(0,1,0);
    glVertex2f(-0.5,0.5);
    glVertex2f(0.5,-0.5);
    glEnd();
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2f(0,0.5);
    glEnd();
    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0,1);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glEnd();
    glColor3f(0.4,0.6,0);
    glBegin(GL_QUADS);
    glVertex2f(-0.5,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,-1);
    glVertex2f(-0.5,-1);
    glEnd();
    */
    /*
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,0.7);
    glVertex2f(0.7,0.3);
    glVertex2f(0.7,-0.3);
    glVertex2f(0,-0.7);
    glVertex2f(-0.7,-0.3);
    glVertex2f(-0.7,0.3);
    glEnd();
    */
     glColor3f(1,0,0);
     glBegin(GL_TRIANGLES);
     glVertex2f(0,0.8);
     glVertex2f(0.2,0.5);
     glVertex2f(-0.2,0.5);
     glEnd();

     glColor3f(1,0,0);
     glBegin(GL_TRIANGLES);
     glVertex2f(0.6,0.4);
     glVertex2f(0.5,0);
     glVertex2f(0.2,0.5);
     glEnd();

     glColor3f(1,0,0);
     glBegin(GL_TRIANGLES);
     glVertex2f(-0.6,0.4);
     glVertex2f(-0.5,0);
     glVertex2f(-0.2,0.5);
     glEnd();

     glColor3f(1,0,0);
     glBegin(GL_TRIANGLES);
     glVertex2f(-0.2,0.5);
     glVertex2f(-0.5,0);
     glVertex2f(-0.2,-0.5);
     glEnd();

     glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.2,0.5);
    glVertex2f(0.2,-0.5);
    glVertex2f(-0.2,-0.5);
    glVertex2f(-0.2,0.5);
    glEnd();

     glColor3f(1,0,0);
     glBegin(GL_TRIANGLES);
     glVertex2f(0,-0.8);
     glVertex2f(0.2,-0.5);
     glVertex2f(-0.2,-0.5);
     glEnd();

     glColor3f(1,0,0);
     glBegin(GL_TRIANGLES);
     glVertex2f(0.6,-0.4);
     glVertex2f(0.5,-0);
     glVertex2f(0.2,-0.5);
     glEnd();

     glColor3f(1,0,0);
     glBegin(GL_TRIANGLES);
     glVertex2f(-0.6,-0.4);
     glVertex2f(-0.5,-0);
     glVertex2f(-0.2,-0.5);
     glEnd();

     glColor3f(1,0,0);
     glBegin(GL_TRIANGLES);
     glVertex2f(0.2,0.5);
     glVertex2f(0.5,0);
     glVertex2f(0.2,-0.5);
     glEnd();

    glFlush();
}
int main(int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("Computer Graphics Lab");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
