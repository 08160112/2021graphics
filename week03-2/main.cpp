#include <GL/glut.h>//(0)記得include
static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_TRIANGLES);//之前偷來的程式碼

    glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);//之前偷來的程式碼

    glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);//之前偷來的程式碼

    glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);//之前偷來的程式碼

    glEnd();//之前偷來的程式碼
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);//(1)設定GLUT的初始化
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);//(2)顯示模式
    glutCreateWindow("GLUT Shapes");//(3)開GLUT視窗
    glutDisplayFunc(display);//(4)顯示的韓式
    glutMainLoop();//(5)GLUT主要的迴圈，卡住不要結束
}
