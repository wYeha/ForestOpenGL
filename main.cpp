#include<windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <iostream>
#include <math.h>
float WinWid = 1000, WinHei = 500;
int rY = 0;
int rZ = 0;
int rX = 0;

void init() {
    glClearColor(1, 1, 1, 1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-WinWid / 2, WinWid / 2, -WinHei / 2, WinHei / 2, -10000.0, 10000.0);
    glMatrixMode(GL_MODELVIEW);
}
void rotY() { //право
    rY += -3;
}
void rotX() { //лево
    rX += 3;
}
void rotZ() { //вниз
    rZ += 3;
}


void key(int key, int x, int y) {
    switch (key)
    {
    case 27: break;
    case 100: rotX(); break;
    case 102: rotY(); break;
    case 103: rotZ(); break;
    }

}


void draw() {

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(rX, 1.0, 0, 0);
    glRotatef(rY, 0.0, 1.0, 0);
    glRotatef(rZ, 0.0, 0.0, 1.0);

    glPushMatrix();
        glScaled(2,2,2);
        glRotatef(-45, 1, 0, 0);
        //средняя
        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.4f, 0.25f, 0.2f);
            glTranslatef(0.0, 0.0, -4.0);             //ствол 1
            glutSolidCone(3.0, 30.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.5f, 0.0f);
            glTranslatef(0.0, 0.0, 0.0);             //первый конус 1
            glutSolidCone(10.0, 20.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.55f, 0.0f);
            glTranslatef(0.0, 0.0, 8.0);            //второй конус 1
            glutSolidCone(8.0, 20.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.6f, 0.0f);
            glTranslatef(0.0, 0.0, 16.0);            //третий конус 1
            glutSolidCone(6.0, 15.0, 10.0, 1.0);
        glPopMatrix();

        //большая
        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.4f, 0.25f, 0.2f);
            glTranslatef(30.0, 0.0, -4.0);             //ствол 2
            glutSolidCone(3.0, 30.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.5f, 0.0f);
            glTranslatef(30.0, 0.0, 0.0);             //первый конус 2
            glutSolidCone(11.0, 22.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.55f, 0.0f);
            glTranslatef(30.0, 0.0, 9.0);            //второй конус 2
            glutSolidCone(9.0, 20.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.6f, 0.0f);
            glTranslatef(30.0, 0.0, 18.0);            //третий конус 2
            glutSolidCone(6.0, 17.0, 10.0, 1.0);
        glPopMatrix();

        //маленькая
        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.4f, 0.25f, 0.2f);
            glTranslatef(15.0, 0.0, -4.0);             //ствол 3
            glutSolidCone(2.0, 20.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.5f, 0.0f);
            glTranslatef(15.0, 0.0, 0.0);             //первый конус 3
            glutSolidCone(6.0, 14.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.55f, 0.0f);
            glTranslatef(15.0, 0.0, 5.0);            //второй конус 3
            glutSolidCone(5.0, 12.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.6f, 0.0f);
            glTranslatef(15.0, 0.0, 10.0);            //третий конус 3
            glutSolidCone(4.0, 9.0, 10.0, 1.0);
        glPopMatrix();


        //вторая средняя
        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.4f, 0.25f, 0.2f);
            glTranslatef(25.0, 15.0, -4.0);             //ствол 4
            glutSolidCone(3.0, 30.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.5f, 0.0f);
            glTranslatef(25.0, 15.0, 0.0);             //первый конус 4
            glutSolidCone(10.0, 20.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.55f, 0.0f);
            glTranslatef(25.0, 15.0, 8.0);            //второй конус 4
            glutSolidCone(8.0, 20.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.6f, 0.0f);
            glTranslatef(25.0, 15.0, 16.0);            //третий конус 4
            glutSolidCone(6.0, 15.0, 10.0, 1.0);
        glPopMatrix();


         glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.4f, 0.25f, 0.2f);
            glTranslatef(15.0, -10.0, -4.0);             //ствол 5
            glutSolidCone(2.0, 20.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.5f, 0.0f);
            glTranslatef(15.0, -10.0, 0.0);             //первый конус 5
            glutSolidCone(8.0, 16.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.55f, 0.0f);
            glTranslatef(15.0, -10.0, 5.0);            //второй конус 5
            glutSolidCone(7.0, 14.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.6f, 0.0f);
            glTranslatef(15.0, -10.0, 10.0);            //третий конус 5
            glutSolidCone(6.0, 11.0, 10.0, 1.0);
        glPopMatrix();


        //не ели (голодные) 1
        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.4f, 0.25f, 0.2f);               //ствол 1
            glTranslatef(50.0, -35.0, 0.0);
            glutSolidCone(2.0, 30.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.5f, 0.0);
            glTranslatef(52.0, -37.0, 18.0);            //шар большой 1
            glutSolidSphere(8.0, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.54f, 0.0);
            glTranslatef(48.0, -34.0, 20.0);            //шар поменьше 1
            glutSolidSphere(7.5, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.57f, 0.0);
            glTranslatef(50.0, -30.0, 22.0);            //шар еще поменьше 1
            glutSolidSphere(7.2, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.6f, 0.0);
            glTranslatef(52.0, -39.0, 23.0);            //шар еще еще поменьше 1
            glutSolidSphere(7.0, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.54f, 0.0);
            glTranslatef(52.0, -36.0, 26.0);            //шар еще еще поменьше 1
            glutSolidSphere(7.0, 25.0, 30.0);
        glPopMatrix();

        //не ели (голодные) 2
        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.4f, 0.25f, 0.2f);               //ствол 2
            glTranslatef(66.0, -40.0, 0.0);
            glutSolidCone(2.0, 20.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.54f, 0.0);
            glTranslatef(68.0, -42.0, 15.0);            //шар большой 2
            glutSolidSphere(8.0, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.5f, 0.0);
            glTranslatef(64.0, -39.0, 17.0);            //шар поменьше 2
            glutSolidSphere(7.5, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.6f, 0.0);
            glTranslatef(66.0, -35.0, 19.0);            //шар еще поменьше 2
            glutSolidSphere(7.2, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.57f, 0.0);
            glTranslatef(68.0, -44.0, 20.0);            //шар еще еще поменьше 2
            glutSolidSphere(7.0, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.55f, 0.0);
            glTranslatef(66.0, -41.0, 23.0);            //шар еще еще поменьше 2
            glutSolidSphere(7.0, 25.0, 30.0);
        glPopMatrix();

        //не ели (голодные) 3
        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.4f, 0.25f, 0.2f);               //ствол 3
            glTranslatef(50.0, -55.0, 0.0);
            glutSolidCone(2.0, 30.0, 10.0, 1.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.54f, 0.0);
            glTranslatef(52.0, -57.0, 20.0);            //шар большой 3
            glutSolidSphere(8.0, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.5f, 0.0);
            glTranslatef(48.0, -54.0, 22.0);            //шар поменьше 3
            glutSolidSphere(7.5, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.6f, 0.0);
            glTranslatef(50.0, -50.0, 24.0);            //шар еще поменьше 3
            glutSolidSphere(7.2, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.57f, 0.0);
            glTranslatef(52.0, -59.0, 25.0);            //шар еще еще поменьше 3
            glutSolidSphere(7.0, 25.0, 30.0);
        glPopMatrix();

        glPushMatrix();
            glScaled(2, 2, 2);
            glColor3f(0.0f, 0.55f, 0.0);
            glTranslatef(50.0, -56.0, 28.0);            //шар еще еще поменьше 3
            glutSolidSphere(7.0, 25.0, 30.0);
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
}





int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WinWid, WinHei);
    glutInitWindowPosition(400, 150);
    glutCreateWindow("Forest");
    init();
    glutDisplayFunc(draw);
    glutSpecialFunc(key);
    glutIdleFunc(draw);

    glutMainLoop();
}

