#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M��

    glutSolidTeapot(0.3);///��߯���

    glutSwapBuffers();///�洫�⭿��buffers
}
int main(int argc, char ** argv)///�H�e�Oint main()
{
    glutInit(&argc, argv);///(1)GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)��ܼҦ�
    glutCreateWindow("08160112");///(3)�}��
    glutDisplayFunc(display);///(4)���@�U��ܪ��禡
    glutMainLoop();///(5)�D�n�j��
}
