#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清空

    glutSolidTeapot(0.3);///實心茶壺

    glutSwapBuffers();///交換兩倍的buffers
}
int main(int argc, char ** argv)///以前是int main()
{
    glutInit(&argc, argv);///(1)GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("08160112");///(3)開窗
    glutDisplayFunc(display);///(4)等一下顯示的函式
    glutMainLoop();///(5)主要迴圈
}
