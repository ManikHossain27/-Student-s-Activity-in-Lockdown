#include<windows.h>    //for windows device
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
float charX=3, charY=3,charX1=50, charY1=50, cxl=0, cyl=0,cxr=0, cyr=0, angleB=0, angleS=0,angleM=0, angleH=0, anglef=-60;

void init(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);//for background color
    glOrtho(-25,+25,-25,+25,-25,+25);//for padding in background
}

void circle(float radiusX, float radiusY){
    int i=0;
    float angle=0.0;
    glBegin(GL_POLYGON);
    for(i=0;i<50;i++){
        angle=2*PI*i/50;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
    }
    glEnd();

}
void rotateClock(){
    angleS=angleS+0.05;
    angleM=angleM+0.00001;
    angleH=angleH+0.000001;
    glutPostRedisplay();
}
                                            //character
void character(){
glPushMatrix();
    glScaled(1.2,1.2,1);
    glTranslated(charX,charY,0);
    glRotated(angleB,0,0,1);
    glPushMatrix();
    glBegin(GL_QUADS);//left hand
        glColor3f(0.91,0.58,0.47);
        glVertex2d(-18.3,-9.7);
        glVertex2d(-18.9,-14.5);
        glVertex2d(-18.5,-14.3);
        glVertex2d(-17.8,-9.4);
    glEnd();
    glBegin(GL_QUADS);//left hand c
        glColor3f(0.69,0.18,0.37);
        glVertex2d(-18.3,-9.7);
        glVertex2d(-18.6,-11.8);
        glVertex2d(-18.2,-12.3);
        glVertex2d(-17.8,-9.4);
    glEnd();
    glBegin(GL_QUADS);//right hand
        glColor3f(0.91,0.58,0.47);
        glVertex2d(-15.7,-9.7);
        glVertex2d(-14.7,-14.5);
        glVertex2d(-15.2,-14.3);
        glVertex2d(-16.3,-9.3);
    glEnd();
    glBegin(GL_QUADS);//right hand cloth
        glColor3f(0.69,0.18,0.37);
        glVertex2d(-15.7,-9.7);
        glVertex2d(-15.2,-12);
        glVertex2d(-15.65,-12.3);
        glVertex2d(-16.3,-9.3);
    glEnd();
    glBegin(GL_QUADS);//left leg
        glColor3f(0.91,0.58,0.47);
        glVertex2d(-17.2,-17.5);
        glVertex2d(-17.7,-17.5);
        glVertex2d(-17.7,-19.5);
        glVertex2d(-17.2,-19.5);
    glEnd();
    glBegin(GL_QUADS);//right leg
        glColor3f(0.91,0.58,0.47);
        glVertex2d(-16.8,-17.5);
        glVertex2d(-16.3,-17.5);
        glVertex2d(-16.3,-19.5);
        glVertex2d(-16.8,-19.5);
    glEnd();
    glPushMatrix();//left foot
        glColor3f(0,0,0);
        glTranslated(-17.5,-19.5,0);
        circle(0.4,0.5);
    glPopMatrix();
    glPushMatrix();//right foot
        glColor3f(0,0,0);
        glTranslated(-16.5,-19.5,0);
        circle(0.4,0.5);
    glPopMatrix();

    glBegin(GL_POLYGON);//body

     glColor3f(0.69,0.18,0.37);
        glVertex2d(-15.7,-9.7);//r1
        glVertex2d(-17.1,-8.9);
        glVertex2d(-18.3,-9.7);//l1
        glVertex2d(-17.8,-14);//l2
        glVertex2d(-16,-14);//r2
        glVertex2d(-15.7,-9.7);
    glEnd();
    glBegin(GL_QUADS);//belt
        glColor3f(0,0,0);
        glVertex2d(-17.8,-14);
        glVertex2d(-16,-14);
        glVertex2d(-16,-14.5);
        glVertex2d(-17.8,-14.5);
    glEnd();
    glBegin(GL_QUADS);//skirt
        glColor3f(1,0,0);
        glVertex2d(-17.8,-14.5);
        glVertex2d(-16,-14.5);
        glVertex2d(-15,-17.5);
        glVertex2d(-18.8,-17.5);
    glEnd();

    glPushMatrix();//bun
    glColor3f(0,0,0);
    glTranslated(-17,-5.2,0);
    circle(0.5,0.5);
    glPopMatrix();

    glPushMatrix();//hair
    glColor3f(0,0,0);
    glTranslated(-17,-7.3,0);
    circle(1.0,2.1);
    glPopMatrix();

    glPushMatrix();//face
    glColor3f(0.91,0.58,0.47);
    glTranslated(-17,-7.7,0);
    circle(1.0,1.7);
    glPopMatrix();

    glPushMatrix();//eye left
    glColor3f(0,0,0);
    glTranslated(-17.5,-7.6,0);
    circle(0.1,0.2);
    glPopMatrix();

    glPushMatrix();//eye right
    glColor3f(0,0,0);
    glTranslated(-16.5,-7.6,0);
    circle(0.1,0.2);
    glPopMatrix();

    glBegin(GL_LINE_LOOP);// nose
     glColor3f(0,0,0);
       glVertex2d(-17,-7.5);
       glVertex2d(-17,-8);
      glEnd();

      glBegin(GL_QUADS);//mouth
     glColor3f(1,0,0);

       glVertex2d(-17.25,-8.6);
       glVertex2d(-16.7,-8.6);
       glVertex2d(-16.7,-8.9);
        glVertex2d(-17.25,-8.9);
    glEnd();
glPopMatrix();
glPopMatrix();
                                            //End Character
                                            //character1
}
void character1(){
glPushMatrix();
    glScaled(0.9,0.9,1);
    glTranslated(charX1,charY1,0);
    glRotated(angleB,0,0,1);
    glPushMatrix();
    glBegin(GL_QUADS);//left hand
        glColor3f(0.91,0.58,0.47);
        glVertex2d(-18.3,-9.7);
        glVertex2d(-18.9,-14.5);
        glVertex2d(-18.5,-14.3);
        glVertex2d(-17.8,-9.4);
    glEnd();
    glBegin(GL_QUADS);//left hand c
        glColor3f(0.69,0.18,0.37);
        glVertex2d(-18.3,-9.7);
        glVertex2d(-18.6,-11.8);
        glVertex2d(-18.2,-12.3);
        glVertex2d(-17.8,-9.4);
    glEnd();
    glBegin(GL_QUADS);//right hand
        glColor3f(0.91,0.58,0.47);
        glVertex2d(-15.7,-9.7);
        glVertex2d(-14.7,-14.5);
        glVertex2d(-15.2,-14.3);
        glVertex2d(-16.3,-9.3);
    glEnd();
    glBegin(GL_QUADS);//right hand cloth
        glColor3f(0.69,0.18,0.37);
        glVertex2d(-15.7,-9.7);
        glVertex2d(-15.2,-12);
        glVertex2d(-15.65,-12.3);
        glVertex2d(-16.3,-9.3);
    glEnd();
    glBegin(GL_QUADS);//left leg
        glColor3f(0.91,0.58,0.47);
        glVertex2d(-17.2,-17.5);
        glVertex2d(-17.7,-17.5);
        glVertex2d(-17.7,-19.5);
        glVertex2d(-17.2,-19.5);
    glEnd();
    glBegin(GL_QUADS);//right leg
        glColor3f(0.91,0.58,0.47);
        glVertex2d(-16.8,-17.5);
        glVertex2d(-16.3,-17.5);
        glVertex2d(-16.3,-19.5);
        glVertex2d(-16.8,-19.5);
    glEnd();
    glPushMatrix();//left foot
        glColor3f(0,0,0);
        glTranslated(-17.5,-19.5,0);
        circle(0.4,0.5);
    glPopMatrix();
    glPushMatrix();//right foot
        glColor3f(0,0,0);
        glTranslated(-16.5,-19.5,0);
        circle(0.4,0.5);
    glPopMatrix();

    glBegin(GL_POLYGON);//body

     glColor3f(0.69,0.18,0.37);
        glVertex2d(-15.7,-9.7);//r1
        glVertex2d(-17.1,-8.9);
        glVertex2d(-18.3,-9.7);//l1
        glVertex2d(-17.8,-14);//l2
        glVertex2d(-16,-14);//r2
        glVertex2d(-15.7,-9.7);
    glEnd();
    glBegin(GL_QUADS);//belt
        glColor3f(0,0,0);
        glVertex2d(-17.8,-14);
        glVertex2d(-16,-14);
        glVertex2d(-16,-14.5);
        glVertex2d(-17.8,-14.5);
    glEnd();
    glBegin(GL_QUADS);//skirt
        glColor3f(1,0,0);
        glVertex2d(-17.8,-14.5);
        glVertex2d(-16,-14.5);
        glVertex2d(-15,-17.5);
        glVertex2d(-18.8,-17.5);
    glEnd();

    glPushMatrix();//bun
    glColor3f(0,0,0);
    glTranslated(-17,-5.2,0);
    circle(0.5,0.5);
    glPopMatrix();

    glPushMatrix();//hair
    glColor3f(0,0,0);
    glTranslated(-17,-7.3,0);
    circle(1.0,2.1);
    glPopMatrix();

    glPushMatrix();//face
    glColor3f(0.91,0.58,0.47);
    glTranslated(-17,-7.7,0);
    circle(1.0,1.7);
    glPopMatrix();

    glPushMatrix();//eye left
    glColor3f(0,0,0);
    glTranslated(-17.5,-7.6,0);
    circle(0.1,0.2);
    glPopMatrix();

    glPushMatrix();//eye right
    glColor3f(0,0,0);
    glTranslated(-16.5,-7.6,0);
    circle(0.1,0.2);
    glPopMatrix();

    glBegin(GL_LINE_LOOP);// nose
     glColor3f(0,0,0);
       glVertex2d(-17,-7.5);
       glVertex2d(-17,-8);
      glEnd();

      glBegin(GL_QUADS);//mouth
     glColor3f(1,0,0);

       glVertex2d(-17.25,-8.6);
       glVertex2d(-16.7,-8.6);
       glVertex2d(-16.7,-8.9);
        glVertex2d(-17.25,-8.9);
    glEnd();
glPopMatrix();
glPopMatrix();
                                            //End Character1

}

void myDisplay(){
    glClear(GL_COLOR_BUFFER_BIT);//clear previous color if exists

                                                                //Start Wall
    glBegin(GL_POLYGON); //left wall
        glColor3f(0.29,0.41,0.46);
        glVertex2f(-21.6,1);
        glVertex2f(-21.6,24);
        glVertex2f(-22,25);
        glVertex2f(-25,25);
        glVertex2f(-25,-8);
    glEnd();
    glBegin(GL_POLYGON);//middle wall
        glColor3f(0.29,0.41,0.46);
        glVertex2f(-21.6,24);
        glVertex2f(-0.5,21);
        glVertex2f(-0.5,4.3);
        glVertex2f(-21.6,1);
    glEnd();
    glBegin(GL_POLYGON);//right wall
        glColor3f(0.29,0.41,0.46);
        glVertex2f(-0.5,21);
        glVertex2f(13,25);
        glVertex2f(25,25);
        glVertex2f(25,-14.8);
        glVertex2f(-0.5,4.3);
    glEnd();
    glBegin(GL_POLYGON);//top wall
        glColor3f(0.68,0.67,0.62);
        glVertex2f(-22,25);
        glVertex2f(-21.6,24);
        glVertex2f(-0.5,21);
        glVertex2f(13,25);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-21.6,1);
        glVertex2f(-21.6,24);

        glVertex2f(-21.6,1);
        glVertex2f(-25,-8);

        glVertex2f(-21.6,24);
        glVertex2f(-22,25);

        glVertex2f(-21.6,24);
        glVertex2f(-0.5,21);

        glVertex2f(-0.5,21);
        glVertex2f(-0.5,4.3);

        glVertex2f(-0.5,4.3);
        glVertex2f(-21.6,1);
    glEnd();
     glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2f(-0.5,21);
        glVertex2f(13,25);
        glVertex2f(25,25);
        glVertex2f(25,-14.8);
        glVertex2f(-0.5,4.3);
    glEnd();
                                                        // End wall

                                                        // Start window
glBegin(GL_QUADS);
    glColor3f(0.32,0.286,0.274);// windoe main frame
    glVertex2f(1,8);
    glVertex2f(1,18);
    glVertex2f(7,19);
    glVertex2f(7,4);

    glColor3f(0.498,0.498,0.498);//windor right border
    glVertex2f(7,19);
    glVertex2f(7,4);
    glVertex2f(7.2,4.3);
    glVertex2f(7.2,19);

    glColor3f(0,0.6,1);//window right glass
    glVertex2f(3.7,18.1);
    glColor3f(0.3,0.4,0.6);
    glVertex2f(6.8,18.5);
    glColor3f(0.2,0.9,0.5);
    glVertex2f(6.8,4.7);
    glColor3f(0.6,1,0.2);
    glVertex2f(3.7,6.6);

    glColor3f(0.498,0.498,0.498);//window right glass  left frame
    glVertex2f(3.7,18.1);
    glVertex2f(3.9,17.8);
    glVertex2f(3.9,6.8);
    glVertex2f(3.7,6.6);

    glColor3f(0.498,0.498,0.498);//window right glass  bottom frame
    glVertex2f(3.9,6.8);
    glVertex2f(3.7,6.6);
    glVertex2f(6.8,4.7);
    glVertex2f(6.8,5.1);

    glColor3f(0.498,0.498,0.498);//window right glass  bottom frame
    glVertex2f(3.7,18.1);
    glVertex2f(3.9,17.8);
    glVertex2f(6.8,18.1);
    glVertex2f(6.8,18.5);

    glColor3f(0,0.6,1);//window left glass
    glVertex2f(1.2,17.6);
    glColor3f(0.3,0.4,0.6);
    glVertex2f(3.48,17.95);
    glColor3f(0.2,0.9,0.5);
    glVertex2f(3.48,6.9);
    glColor3f(0.6,1,0.2);
    glVertex2f(1.2,8.3);

    glColor3f(0.498,0.498,0.498);//window right glass  bottom frame
    glVertex2f(1.4,8.5);
    glVertex2f(3.48,7.3);
    glVertex2f(3.48,6.9);
    glVertex2f(1.2,8.3);

    glColor3f(0.498,0.498,0.498);//window glass  left frame
    glVertex2f(1.4,8.5);
    glVertex2f(1.2,8.3);
    glVertex2f(1.2,17.6);
    glVertex2f(1.4,17.3);

    glColor3f(0.498,0.498,0.498);//window glass  top frame
    glVertex2f(1.2,17.6);
    glVertex2f(1.4,17.3);
    glVertex2f(3.48,17.6);
    glVertex2f(3.48,17.95);


glEnd();
                                        //Line**********************
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(1,8);
    glVertex2f(1,18);
    glVertex2f(7,19);
    glVertex2f(7,4);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(7,19);
    glVertex2f(7,4);
    glVertex2f(7.2,4.3);
    glVertex2f(7.2,19);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(3.7,18.1);
    glVertex2f(6.8,18.5);
    glVertex2f(6.8,4.7);
    glVertex2f(3.7,6.6);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(3.7,18.1);
    glVertex2f(3.9,17.8);
    glVertex2f(3.9,6.8);
    glVertex2f(3.7,6.6);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(3.9,6.8);
    glVertex2f(3.7,6.6);
    glVertex2f(6.8,4.7);
    glVertex2f(6.8,5.1);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2f(3.7,18.1);
    glVertex2f(3.9,17.8);
    glVertex2f(6.8,18.1);
    glVertex2f(6.8,18.5);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);//window left glass lines
    glVertex2f(1.2,17.6);
    glVertex2f(3.48,17.95);
    glVertex2f(3.48,6.9);
    glVertex2f(1.2,8.3);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);//window top glass lines
    glVertex2f(1.2,17.6);
    glVertex2f(1.4,17.3);
    glVertex2f(3.48,17.6);
    glVertex2f(3.48,17.95);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);//window left glass lines
    glVertex2f(1.4,8.5);
    glVertex2f(1.2,8.3);
    glVertex2f(1.2,17.6);
    glVertex2f(1.4,17.3);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);//window left glass lines
    glVertex2f(1.4,8.5);
    glVertex2f(3.48,7.3);
    glVertex2f(3.48,6.9);
    glVertex2f(1.2,8.3);
glEnd();

                                                        // End window


                                                        //Start table

    glBegin(GL_QUADS);
        glColor3f(0.5,0.3,0); //table top
        glVertex2f(-10.8,10);
        glVertex2f(-1,10);
        glVertex2f(0,8);
        glVertex2f(-9.5,8);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0); //table top
        glVertex2f(-10.8,10);
        glVertex2f(-1,10);
        glVertex2f(0,8);
        glVertex2f(-9.5,8);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0,0,0);//table left font leg
        glVertex2f(-9.5,8);
        glVertex2f(-9,8);
        glVertex2f(-9,0);
        glVertex2f(-9.5,0);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//table left font leg
        glVertex2f(-9.5,8);
        glVertex2f(-9,8);
        glVertex2f(-9,0);
        glVertex2f(-9.5,0);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.5,0.3,0);//table left back inner
        glVertex2f(-9.5,8);
        glVertex2f(-9.5,0);
        glVertex2f(-10.8,2);
        glVertex2f(-10.8,10);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//table left back inner
        glVertex2f(-9.5,8);
        glVertex2f(-9.5,0);
        glVertex2f(-10.8,2);
        glVertex2f(-10.8,10);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0,0,0);//table right font leg
        glVertex2f(0,8);
        glVertex2f(-0.5,8);
        glVertex2f(-0.5,1.5);
        glVertex2f(-0,1.5);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.5,0.3,0);//table right font inner
        glVertex2f(-0.5,1.5);
        glVertex2f(-1.8,4);
        glVertex2f(-1.8,8);
        glVertex2f(-0.5,8);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//table right font inner
        glVertex2f(-0.5,1.5);
        glVertex2f(-1.8,4);
        glVertex2f(-1.8,8);
        glVertex2f(-0.5,8);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.5,0.3,0);//table drawer
        glVertex2f(-9,8);
        glVertex2f(-0.5,8);
        glVertex2f(-0.5,5.5);
        glVertex2f(-9,5.5);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//table drawer
        glVertex2f(-9,8);
        glVertex2f(-0.5,8);
        glVertex2f(-0.5,5.5);
        glVertex2f(-9,5.5);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0,0,0);//table font black
        glVertex2f(0,8);
        glVertex2f(0,7.5);
        glVertex2f(-9.5,7.5);
        glVertex2f(-9.5,8);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0,0,0);//table left font black
        glVertex2f(-9.5,7.5);
        glVertex2f(-9.5,8);
        glVertex2f(-10.8,10);
        glVertex2f(-10.8,9.5);
    glEnd();

    glPushMatrix();  //table dowar knob
            glTranslated(-7,6.5,1);
            glColor3f(0,0,0);
            circle(0.2,0.4);
    glPopMatrix();
    glPushMatrix();
            glTranslated(-2.3,6.5,1);
            glColor3f(0,0,0);
            circle(0.2,0.4);
    glPopMatrix();


                                                        //End table
                                                        // start Computer
glBegin(GL_QUADS);
    glColor3f(0.07,0.07,0.07);//Keyboard
    glVertex2f(-7.1,9.1);
    glVertex2f(-3.9,9.1);
    glVertex2f(-3.9,8.2);
    glVertex2f(-7.1,8.2);
glEnd();
glBegin(GL_LINES);
    glColor3f(0,0,0);//Keyboard wire
    glVertex2f(-5.2,9.1);
    glVertex2f(-4.5,10);

    glVertex2f(-3.5,9);  //mouse wire
    glVertex2f(-3.5,10);

glEnd();


glPushMatrix();
    glTranslated(-1.5,4.5,1);
    glPushMatrix();
        glTranslated(-4.4,5.2,1);
        glColor3f(0,0,0);
        circle(0.8,0.6);
    glPopMatrix();
      glBegin(GL_QUADS);        //computer
        glColor3f(0,0,0);
        glVertex2f(-4.8,8.6);
        glVertex2f(-4.8,5.5);
        glVertex2f(-4.1,5.5);
        glVertex2f(-4.1,8.6);

        glColor3f(0,0,0);
        glVertex2f(-6,7);
        glVertex2f(-3,7);
        glVertex2f(-3,10);
        glVertex2f(-6,10);

        glColor3f(1,1,0);
        glVertex2f(-5.9,7.1);
        glVertex2f(-3.1,7.1);
        glVertex2f(-3.1,9.8);
        glVertex2f(-5.9,9.8);

    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.07,0.07,0.07);//cpu front
        glVertex2f(-0.5,10);
        glVertex2f(1,10);
        glVertex2f(1,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,10);//cpu left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,11);

        glVertex2f(-0.5,10);//cpu top
        glVertex2f(1,10);
        glVertex2f(0,11);
        glVertex2f(-1.3,11);
    glEnd();

    glBegin(GL_LINE_LOOP);      //line
        glColor3f(0.53,0.53,0.53);
        glVertex2f(-0.5,10);
        glVertex2f(1,10);
        glVertex2f(1,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,10);
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,11);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,10);//cpu top
        glVertex2f(1,10);
        glVertex2f(0,11);
        glVertex2f(-1.3,11);
    glEnd();

    glBegin(GL_LINE_LOOP);//cd rome
        glVertex2f(-0.3,9);
        glVertex2f(0.8,9);
        glVertex2f(0.8,8.5);
        glVertex2f(-0.3,8.5);
    glEnd();

glPopMatrix();
glPushMatrix();//power button
    glTranslated(-1.28,11,1);
    circle(0.2,0.3);
glPopMatrix();
glPushMatrix();//mouse
    glColor3f(0,0,0);
    glTranslated(-3.5,9.1,1);
    circle(0.2,0.6);
glPopMatrix();
                                    // Start Books
glPushMatrix();
    glTranslated(-7.9,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(1,.56,0.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-8.3,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(1,.56,0.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-8.7,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(1,.56,0.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-9,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(1,.56,0.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
                                // End book


glPushMatrix();
    glTranslated(0,-1.7,1);
    glBegin(GL_QUADS);                                  //Start Chair
        glColor3f(0.047,0.24,0.38);
        glVertex2f(-6,7);
        glVertex2f(-3,7);
        glVertex2f(-3,10);
        glVertex2f(-6,10);

        glColor3f(0.74,0.76,0.78);
        glVertex2f(-5.2,8);
        glVertex2f(-3.8,8);
        glVertex2f(-3.8,9.2);
        glVertex2f(-5.2,9.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2f(-5.2,8);
        glVertex2f(-3.8,8);
        glVertex2f(-3.8,9.2);
        glVertex2f(-5.2,9.2);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2f(-6,7);
        glVertex2f(-3,7);
        glVertex2f(-3,10);
        glVertex2f(-6,10);
    glEnd();

    glPushMatrix();//chair sit
        glTranslated(-4.5,5.2,1);
        glColor3f(0,0,0);
        circle(1.8,0.8);
        glColor3f(0.047,0.24,0.38);
        circle(1.7,0.7);
    glPopMatrix();

    glPushMatrix();     //wheel
        glTranslated(-5.3,3.3,1);
        glColor3f(0,0,0);
        circle(0.3,0.3);
    glPopMatrix();
    glPushMatrix();     //wheel
        glTranslated(-3.7,3.3,1);
        glColor3f(0,0,0);
        circle(0.3,0.3);
    glPopMatrix();
    glPushMatrix();     //wheel
        glTranslated(-5.8,1.35,1);
        glColor3f(0,0,0);
        circle(0.3,0.3);
    glPopMatrix();
    glPushMatrix();     //wheel
        glTranslated(-3.3,1.28,1);
        glColor3f(0,0,0);
        circle(0.3,0.3);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-0.3,1.1,1);
        glBegin(GL_QUADS); //chair wheel x
            glColor3f(0.74,0.76,0.78);
            glVertex2f(-5.3,2.6);
            glVertex2f(-3,0);
            glVertex2f(-2.8,0.5);
            glVertex2f(-4.9,2.6);
        glEnd();
        glBegin(GL_LINE_LOOP);
            glColor3f(0,0,0);
            glVertex2f(-5.3,2.6);
            glVertex2f(-3,0);
            glVertex2f(-2.8,0.5);
            glVertex2f(-4.9,2.6);
        glEnd();

        glTranslated(-5.8,-2.5,1);
        glRotated(-90,0,0,1);
        glBegin(GL_QUADS);

            glColor3f(0.74,0.76,0.78);
            glVertex2f(-5.3,2.6);
            glVertex2f(-3,0);
            glVertex2f(-2.8,0.5);
            glVertex2f(-4.9,2.6);
        glEnd();
        glBegin(GL_LINE_LOOP);
            glColor3f(0,0,0);
            glVertex2f(-5.3,2.6);
            glVertex2f(-3,0);
            glVertex2f(-2.8,0.5);
            glVertex2f(-4.9,2.6);
        glEnd();
    glPopMatrix();


    glBegin(GL_QUADS); //chair backline
        glColor3f(0.74,0.76,0.78);
        glVertex2f(-4.8,8.6);
        glVertex2f(-4.8,2.5);
        glVertex2f(-4.1,2.5);
        glVertex2f(-4.1,8.6);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-4.8,8);
        glVertex2f(-4.8,2.67);

        glVertex2f(-4.1,2.67);
        glVertex2f(-4.1,8);
    glEnd();
glPopMatrix();
                                            //chair end

    //********************************************
                                                        //Start almirah
glBegin(GL_QUADS);//almirah
    glColor3f(0.4,0.1,0.7);
    glVertex2d(-22,21);
    glVertex2d(-22,0);
    glVertex2d(-11,0);
    glVertex2d(-11,21);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2d(-22,21);
    glVertex2d(-22,0);
    glVertex2d(-11,0);
    glVertex2d(-11,21);
glEnd();


glBegin(GL_QUADS);//center
    glColor3f(0.4,0.1,0.5);
    glVertex2d(-15,0);
    glVertex2d(-15,21);
    glVertex2d(-18,21);
    glVertex2d(-18,0);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2d(-15,0);
    glVertex2d(-15,21);
    glVertex2d(-18,21);
    glVertex2d(-18,0);
glEnd();


//**********************************


glBegin(GL_QUADS);//up
    glColor3f(0.4,0.1,0.7);
    glVertex2d(-18,21);
    glVertex2d(-18,20);
    glVertex2d(-15,20);
    glVertex2d(-15,21);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2d(-18,21);
    glVertex2d(-18,20);
    glVertex2d(-15,20);
    glVertex2d(-15,21);
glEnd();


glBegin(GL_QUADS);//up in
    glColor3f(0,0,0);
    glVertex2d(-18,20);
    glVertex2d(-15,20);
    glVertex2d(-15.3,19);
    glVertex2d(-17.7,19);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2d(-18,20);
    glVertex2d(-15,20);
    glVertex2d(-15.3,19);
    glVertex2d(-17.7,19);
glEnd();

glBegin(GL_QUADS);//down in
    glColor3f(0,0,0);
    glVertex2d(-15,4);
    glVertex2d(-18,4);
    glVertex2d(-17.7,5);
    glVertex2d(-15.3,5);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2d(-15,4);
    glVertex2d(-18,4);
    glVertex2d(-17.7,5);
    glVertex2d(-15.3,5);
glEnd();

glBegin(GL_QUADS);//middle box
glColor3f(0.89,0.89,0.90);

glVertex2d(-15.3,5);
  glVertex2d(-17.7,5);
   glVertex2d(-17.7,19);
 glVertex2d(-15.3,19);

glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2d(-15.3,5);
    glVertex2d(-17.7,5);
    glVertex2d(-17.7,19);
    glVertex2d(-15.3,19);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(0,0,0);
    glVertex2d(-15,2);
    glVertex2d(-18,2);

glEnd();


glPushMatrix();//drawer knob up
glColor3f(0.74,0.76,0.78);
glTranslated(-16.5,3,0);
circle(0.1,0.3);
glPopMatrix();

glPushMatrix();//drawer knob down
glColor3f(0.74,0.76,0.78);
glTranslated(-16.5,1,0);
circle(0.1,0.3);
glPopMatrix();
//******************
glPushMatrix();   //left almira inner
    glTranslated(-3.5,0,0);
glBegin(GL_QUADS);//center
    glColor3f(0.4,0.1,0.5);
    glVertex2d(-15,1);
    glVertex2d(-15,20);
    glVertex2d(-18,20);
    glVertex2d(-18,1);
glEnd();
glBegin(GL_LINE_LOOP);
    glColor3f(0,0,0);
    glVertex2d(-15,1);
    glVertex2d(-15,20);
    glVertex2d(-18,20);
    glVertex2d(-18,1);
glEnd();
    glBegin(GL_QUADS);//up in
        glColor3f(0,0,0);
        glVertex2d(-18,20);
        glVertex2d(-15,20);
        glVertex2d(-15.3,19);
        glVertex2d(-17.7,19);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(-18,20);
        glVertex2d(-15,20);
        glVertex2d(-15.3,19);
        glVertex2d(-17.7,19);
    glEnd();

    glBegin(GL_QUADS);//middle box
    glColor3f(0.4,0.1,0.7);

    glVertex2d(-15.3,2);
      glVertex2d(-17.7,2);
       glVertex2d(-17.7,19);
     glVertex2d(-15.3,19);

    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(-15.3,2);
        glVertex2d(-17.7,2);
        glVertex2d(-17.7,19);
        glVertex2d(-15.3,19);
    glEnd();



  glPushMatrix();
    glTranslated(0,4,0);

    glBegin(GL_QUADS);//down in
        glColor3f(0,0,0);
        glVertex2d(-15,2);
        glVertex2d(-18,2);
        glVertex2d(-17.7,3);
        glVertex2d(-15.3,3);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(-15,2);
        glVertex2d(-18,2);
        glVertex2d(-17.7,3);
        glVertex2d(-15.3,3);
    glEnd();

glPopMatrix();
glPopMatrix();

glBegin(GL_QUADS);//drawer in
        glColor3f(0.4,0.1,0.5);
        glVertex2d(-18.5,6);
        glVertex2d(-18.5,1);
        glVertex2d(-21.5,1);
        glVertex2d(-21.5,6);
    glEnd();

glBegin(GL_LINE_LOOP);//drawer in
        glColor3f(0,0,0);
        glVertex2d(-18.5,6);
        glVertex2d(-18.5,1);
        glVertex2d(-21.5,1);
        glVertex2d(-21.5,6);
    glEnd();

    glBegin(GL_LINE_LOOP);//drawer in
        glColor3f(0,0,0);
        glVertex2d(-18.5,4.3);
        glVertex2d(-21.5,4.3);
        glEnd();

        glBegin(GL_LINE_LOOP);//drawer in
        glColor3f(0,0,0);
        glVertex2d(-18.5,2.5);
        glVertex2d(-21.5,2.5);
        glEnd();

glPushMatrix();//drawer knob up
glColor3f(0.74,0.76,0.78);
glTranslated(-20.2,3.3,0);
circle(0.1,0.3);
glPopMatrix();

glPushMatrix();//drawer knob down
glColor3f(0.74,0.76,0.78);
glTranslated(-20.2,5.1,0);
circle(0.1,0.3);
glPopMatrix();

glPushMatrix();//drawer knob down
glColor3f(0.74,0.76,0.78);
glTranslated(-20.2,1.8,0);
circle(0.1,0.3);
glPopMatrix();


glPushMatrix();
    glTranslated(-3.5,16,0);

glBegin(GL_QUADS);//down in
        glColor3f(0,0,0);
        glVertex2d(-15.1,2);
        glVertex2d(-17.9,2);
        glVertex2d(-17.9,1.5);
        glVertex2d(-15.1,1.5);
    glEnd();

glPopMatrix();
//000000000000000000000000000000000000000000000000000000000000000000000000000
                                    // Start Books
glPushMatrix();

glTranslated(-12.4,-0.7,0);
glScaled(0.8,0.8,1);
glPushMatrix();
    glTranslated(-7.9,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(0.6,0.5,.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-8.3,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(.9,.56,0.32);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-8.7,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(0.3,.36,0.32);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-9,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(1,1,0.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPopMatrix();
                                // End book
glPushMatrix();
    glTranslated(cxl,cyl,0);
    glBegin(GL_QUADS);//left door
        glColor3f(0.4,0.1,0.5);
        glVertex2d(-21.5,1);
        glVertex2d(-21.5,20);
        glVertex2d(-18.5,20);
        glVertex2d(-18.5,1);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(-21.5,1);
        glVertex2d(-21.5,20);
        glVertex2d(-18.5,20);
        glVertex2d(-18.5,1);
    glEnd();
    glPushMatrix();//almirah knob left
        glColor3f(0.74,0.76,0.78);
        glTranslated(-19.3,11,0);
        circle(0.3,0.4);
    glPopMatrix();
glPopMatrix();


//**********************
                        //right door start
glPushMatrix();   //right almira inner
    glTranslated(3.5,0,0);
    glBegin(GL_QUADS);//center
        glColor3f(0.4,0.1,0.5);
        glVertex2d(-15,1);
        glVertex2d(-15,20);
        glVertex2d(-18,20);
        glVertex2d(-18,1);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(-15,1);
        glVertex2d(-15,20);
        glVertex2d(-18,20);
        glVertex2d(-18,1);
    glEnd();
    glBegin(GL_QUADS);//up in
        glColor3f(0,0,0);
        glVertex2d(-18,20);
        glVertex2d(-15,20);
        glVertex2d(-15.3,19);
        glVertex2d(-17.7,19);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(-18,20);
        glVertex2d(-15,20);
        glVertex2d(-15.3,19);
        glVertex2d(-17.7,19);
    glEnd();

    glBegin(GL_QUADS);//down in
        glColor3f(0,0,0);
        glVertex2d(-15,2);
        glVertex2d(-18,2);
        glVertex2d(-17.7,3);
        glVertex2d(-15.3,3);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(-15,2);
        glVertex2d(-18,2);
        glVertex2d(-17.7,3);
        glVertex2d(-15.3,3);
    glEnd();

    glBegin(GL_QUADS);//middle box
    glColor3f(0.4,0.1,0.7);
    glVertex2d(-15.3,3);
      glVertex2d(-17.7,3);
       glVertex2d(-17.7,19);
     glVertex2d(-15.3,19);

    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(-15.3,3);
        glVertex2d(-17.7,3);
        glVertex2d(-17.7,19);
        glVertex2d(-15.3,19);
    glEnd();
glPopMatrix();

glPushMatrix();
    glTranslated(3.5,8,0);

     glBegin(GL_QUADS);//down in
        glColor3f(0,0,0);
        glVertex2d(-15,2);
        glVertex2d(-18,2);
        glVertex2d(-17.7,3);
        glVertex2d(-15.3,3);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(-15,2);
        glVertex2d(-18,2);
        glVertex2d(-17.7,3);
        glVertex2d(-15.3,3);
    glEnd();//99999999999999999999999999999999999999999999

glPopMatrix();

glPushMatrix();
    glTranslated(7,5,0);

     glBegin(GL_QUADS);//drawer in
        glColor3f(0.4,0.1,0.5);
        glVertex2d(-18.5,5);
        glVertex2d(-18.5,1);
        glVertex2d(-21.5,1);
        glVertex2d(-21.5,5);
    glEnd();

glBegin(GL_LINE_LOOP);//drawer in
        glColor3f(0,0,0);
        glVertex2d(-18.5,5);
        glVertex2d(-18.5,1);
        glVertex2d(-21.5,1);
        glVertex2d(-21.5,5);
    glEnd();

    glBegin(GL_LINE_LOOP);//drawer in
        glColor3f(0,0,0);
        glVertex2d(-18.5,3);
        glVertex2d(-21.5,3);
        glEnd();



glPushMatrix();//drawer knob up
glColor3f(0.74,0.76,0.78);
glTranslated(-20.2,2,0);
circle(0.1,0.3);
glPopMatrix();

glPushMatrix();//drawer knob down
glColor3f(0.74,0.76,0.78);
glTranslated(-20.2,4.1,0);
circle(0.1,0.3);
glPopMatrix();


glPushMatrix();
    glTranslated(-3.5,7.7,0);

     glBegin(GL_QUADS);//down in
        glColor3f(0,0,0);
        glVertex2d(-15,2);
        glVertex2d(-18,2);
        glVertex2d(-17.7,3);
        glVertex2d(-15.3,3);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(-15,2);
        glVertex2d(-18,2);
        glVertex2d(-17.7,3);
        glVertex2d(-15.3,3);
    glEnd();//99999999999999999999999999999999999999999999

    glBegin(GL_QUADS);//down in
        glColor3f(0.4,0.1,0.5);
        glVertex2d(-15,2);
        glVertex2d(-18,2);
        glVertex2d(-18,1.5);
        glVertex2d(-15,1.5);
    glEnd();

glBegin(GL_LINE_LOOP);//down in
        glColor3f(0,0,0);
        glVertex2d(-15,2);
        glVertex2d(-18,2);
        glVertex2d(-18,1.5);
        glVertex2d(-15,1.5);
    glEnd();

glPopMatrix();
glPopMatrix();
                          // Start Books
glPushMatrix();

glTranslated(-6.4,-4.35,0);
glScaled(0.7,0.75,1);
glPushMatrix();
    glTranslated(-7.9,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(0.6,0.5,.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-8.3,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(.9,.56,0.32);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-8.7,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(0.3,.36,0.32);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-9,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(1,1,0.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPopMatrix();
                                // End book
// Start Books
glPushMatrix();

glTranslated(-5.9,3.8,0);
glScaled(0.7,0.75,1);
glPushMatrix();
    glTranslated(-7.9,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(0.6,0.5,.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-8.3,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(.9,.56,0.32);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-8.7,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(0.3,.36,0.32);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-9,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(1,1,0.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPopMatrix();
                            // End book
glPushMatrix();
glTranslated(-7,3.8,0);
glScaled(0.7,0.75,1);
glPushMatrix();
    glTranslated(-7.9,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(0.6,0.5,.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-8.3,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(.9,.56,0.32);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-8.7,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(0.3,.36,0.32);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPushMatrix();
    glTranslated(-9,4.5,1);
    glBegin(GL_QUADS);
        glColor3f(1,1,0.02);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);

        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);

        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);//books front
        glVertex2f(-0.5,8);
        glVertex2f(-0.3,8);
        glVertex2f(-0.3,4);
        glVertex2f(-0.5,4);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books left inner
        glVertex2f(-0.5,4);
        glVertex2f(-1.3,5.5);
        glVertex2f(-1.3,9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.5,8);//books top
        glVertex2f(-0.3,8);
        glVertex2f(-1.1,9);
        glVertex2f(-1.3,9);
    glEnd();
glPopMatrix();
glPopMatrix();
                                // End book

 glPushMatrix();
    glTranslated(cxr,cyr,0);
    glBegin(GL_QUADS);//right door
        glColor3f(0.4,0.1,0.5);
        glVertex2f(-11.5,1);
        glVertex2f(-11.5,20);
        glVertex2f(-14.5,20);
        glVertex2f(-14.5,1);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2f(-11.5,1);
        glVertex2f(-11.5,20);
        glVertex2f(-14.5,20);
        glVertex2f(-14.5,1);
    glEnd();
    glPushMatrix();//almirah knob right
        glColor3f(0.74,0.76,0.78);
        glTranslated(-13.7,11,0);
        circle(0.3,0.4);
    glPopMatrix();
glPopMatrix();     //right door end
                          //Finish almari

                                                        //start tree
glBegin(GL_QUADS);//tree trunk
 glColor3f(0.5,0.3,0);

   glVertex2d(-23.9,0);
   glVertex2d(-24.8,0);
   glVertex2d(-24.8,-10);
    glVertex2d(-23.9,-10);

glEnd();

glBegin(GL_LINE_LOOP);//tree trunk
 glColor3f(0,0,0);

  glVertex2d(-23.9,0);
   glVertex2d(-24.8,0);
   glVertex2d(-24.8,-10);
    glVertex2d(-23.9,-10);
glEnd();


glPushMatrix();//tree
glColor3f(0,0.3,0);
glTranslated(-24,0.8,0);
circle(0.8,1.4);
glPopMatrix();

glPushMatrix();//tree
glColor3f(0,0.3,0);
glTranslated(-24.8,0.7,0);
circle(0.8,1.4);
glPopMatrix();

glPushMatrix();//tree
glColor3f(0,0.3,0);
glTranslated(-24.8,3,0);
circle(0.8,1.4);
glPopMatrix();

glPushMatrix();//tree
glColor3f(0,0.3,0);
glTranslated(-24.8,4.6,0);
circle(0.8,1.4);
glPopMatrix();

glPushMatrix();//tree right
glColor3f(0,0.3,0);
glTranslated(-23.2,0.9,0);
circle(0.8,1.4);
glPopMatrix();

glPushMatrix();//tree
glColor3f(0,0.3,0);
glTranslated(-23.5,2.7,0);
circle(0.8,1.4);
glPopMatrix();

glPushMatrix();//tree
glColor3f(0,0.3,0);
glTranslated(-23.7,4.3,0);
circle(0.8,1.4);
glPopMatrix();

glPushMatrix();//tree
glColor3f(0,0.3,0);
glTranslated(-24.5,6,0);
circle(0.8,1.4);
glPopMatrix();

glBegin(GL_QUADS);//pot
 glColor3f(1,0,0);

   glVertex2d(-22.5,-3.3);
   glVertex2d(-25.5,-4);
   glVertex2d(-25,-10);
    glVertex2d(-23.5,-10);

glEnd();

glBegin(GL_LINE_LOOP);//pot
 glColor3f(0,0,0);

 glVertex2d(-22.5,-3.3);
   glVertex2d(-25.5,-4);
   glVertex2d(-25,-10);
    glVertex2d(-23.5,-10);
glEnd();
                                                    //End tree
//    **********************************************************************************************************
                                            //Start Character
character();

                                                    //swith board
glPushMatrix();
glTranslated(1.33,4.5,0);
    glBegin(GL_QUADS);//base
        glColor3f(0.498,0.498,0.498);
        glVertex2d(6,0);
        glVertex2d(6,2);
        glVertex2d(7.5,1.5);
        glVertex2d(7.5,-1.0);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);

        glVertex2d(6,0);
        glVertex2d(6,2);
        glVertex2d(7.5,1.5);
        glVertex2d(7.5,-1.0);
    glEnd();



    glBegin(GL_QUADS);// topbase
        glColor3f(0,0,0);
        glVertex2d(6.2,0.3);
        glVertex2d(6.2,1.5);
        glVertex2d(7.3,1.1);
        glVertex2d(7.3,-0.5);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1,1,1);

        glVertex2d(6.3,0.4);
        glVertex2d(6.3,1.25);
        glVertex2d(7.2,0.9);
        glVertex2d(7.2,-0.2);
    glEnd();


    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(6.6,0.2);
        glVertex2d(6.6,1.3);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3f(0,0,0);
        glVertex2d(6.9,0);
        glVertex2d(6.9,1.3);
    glEnd();
glPopMatrix();
                                            //end of switchboard
                                            //Start Bed
glPushMatrix();
glTranslated(0,-4,1);
glBegin(GL_QUADS);//bed left
 glColor3f(0.40,0.27,0.14);

   glVertex2d(-11,-3);
   glVertex2d(-11,-8);
   glVertex2d(-5,-22);
   glVertex2d(-5,-16);
glEnd();
glBegin(GL_LINE_LOOP);
 glColor3f(0,0,0);

   glVertex2d(-11,-3);
   glVertex2d(-11,-8);
   glVertex2d(-5,-22);
   glVertex2d(-5,-16);

glEnd();
glBegin(GL_QUADS);//bed left surface
 glColor3f(0.419,0.415,0.419);
   glVertex2d(-11,-3);
   glVertex2d(-11,-6);
   glVertex2d(-5,-19);
   glVertex2d(-5,-16);
glEnd();

glBegin(GL_QUADS);//bed front down
   glColor3f(0.40,0.27,0.14);
   glVertex2d(20,-2);
   glVertex2d(19.5,-8);
   glVertex2d(-5,-22);
   glVertex2d(-5,-16);
glEnd();
glBegin(GL_LINE_LOOP);
 glColor3f(0,0,0);

   glVertex2d(20,-2);
   glVertex2d(19.5,-8);
   glVertex2d(-5,-22);
   glVertex2d(-5,-16);
glEnd();
glBegin(GL_QUADS);//bed front down surface
   glColor3f(0.419,0.415,0.419);
   glVertex2d(20,-2);
   glVertex2d(19.5,-5);
   glVertex2d(-5,-19);
   glVertex2d(-5,-16);

glEnd();
glBegin(GL_QUADS);//bed front surface
 glColor3f(0.419,0.415,0.419);
   glVertex2d(9,4);
   glVertex2d(-11,-3);
   glVertex2d(-5,-16);
   glVertex2d(20,-2);
glEnd();
glBegin(GL_LINE_LOOP);
 glColor3f(0,0,0);
   glVertex2d(9,4);
   glVertex2d(-11,-3);
   glVertex2d(-5,-16);
   glVertex2d(20,-2);
glEnd();

glBegin(GL_QUADS);//bed head
 glColor3f(0.40,0.27,0.14);

   glVertex2d(9,4);
   glVertex2d(9,10);
   glVertex2d(20,5);
   glVertex2d(20,-2);

glEnd();
glBegin(GL_LINE_LOOP);
 glColor3f(0,0,0);

   glVertex2d(9,4);
   glVertex2d(9,10);
   glVertex2d(20,5);
   glVertex2d(20,-2);

glEnd();

glBegin(GL_QUADS);//bed head up
 glColor3f(0.40,0.27,0.14);
   glVertex2d(9,10);
   glVertex2d(20,5);
   glVertex2d(21,6);
   glVertex2d(10,11);
glEnd();
glBegin(GL_LINE_LOOP);
 glColor3f(0,0,0);
   glVertex2d(9,10);
   glVertex2d(20,5);
   glVertex2d(21,6);
   glVertex2d(10,11);
glEnd();

glBegin(GL_QUADS);//bed head down
 glColor3f(0.40,0.27,0.14);

   glVertex2d(21,6);
   glVertex2d(20,5);
   glVertex2d(19.5,-8);
   glVertex2d(20.5,-7.2);

glEnd();
glBegin(GL_LINE_LOOP);
 glColor3f(0,0,0);

   glVertex2d(21,6);
   glVertex2d(20,5);
   glVertex2d(19.71,-2);
   glVertex2d(19.5,-8);
   glVertex2d(20.5,-7.2);

glEnd();


glBegin(GL_QUADS);//pillow
 glColor3f(0.7,0.8,0.9);

   glVertex2d(9,2);
   glVertex2d(14,-2);
    glVertex2d(16,1);
   glVertex2d(11,4);
glEnd();
glBegin(GL_LINE_LOOP);
 glColor3f(0,0,0);

   glVertex2d(9,2);
   glVertex2d(14,-2);
    glVertex2d(16,1);
   glVertex2d(11,4);
glEnd();


glPushMatrix();//doll body
glColor3f(0,1,0);
glTranslated(9.3,4.8,0);
circle(0.7,1.8);
glPopMatrix();

glPushMatrix();//doll leg left
glColor3f(0,0,0);
glTranslated(9.6,2.5,0);
circle(0.3,1.1);
glPopMatrix();

glPushMatrix();//doll leg right
glColor3f(0,0,0);
glTranslated(8.9,2.5,0);
circle(0.3,1.1);
glPopMatrix();

glPushMatrix();//doll left hand
glColor3f(0,1,0);
glTranslated(8.5,5.1,0);
circle(0.3,1);
glPopMatrix();

glPushMatrix();//doll right hand
glColor3f(0,1,0);
glTranslated(10.1,5.1,0);
circle(0.3,1.1);
glPopMatrix();

glPushMatrix();//doll  head
glColor3f(0,1,0);
glTranslated(9.3,6.9,0);
circle(0.7,1.5);
glPopMatrix();

glPushMatrix();//doll left eye
glColor3f(0,0,0);
glTranslated(9,7.3,0);
circle(0.125,0.3);
glPopMatrix();

glPushMatrix();//doll right eye
glColor3f(0,0,0);
glTranslated(9.6,7.3,0);
circle(0.125,0.3);
glPopMatrix();

//doll nose
glBegin(GL_TRIANGLES);
glColor3f(1,0,0);

   glVertex2d(9.1,7);
   glVertex2d(9.5,7);
   glVertex2d(9.3,6.2);

   glEnd();


glBegin(GL_QUADS);//blanket
 glColor3f(0.7,0.8,0.9);

   glVertex2d(-9,-4);//1
   glVertex2d(-5.5,-12);//down
    glVertex2d(-2.2,-10.2);
   glVertex2d(-6,-3);//4
glEnd();
glBegin(GL_LINE_LOOP);//blanket
 glColor3f(0,0,0);

   glVertex2d(-9,-4);//1
   glVertex2d(-5.5,-12);//down
    glVertex2d(-2.2,-10.2);
   glVertex2d(-6,-3);//4
glEnd();
glPopMatrix();
                                //End Bed
character1();
                                //front table lapm and carpet
glPushMatrix();
glTranslated(1,-2.5,1);
glBegin(GL_QUADS);//side table top
 glColor3f(0.5,0.3,0);

   glVertex2d(21.3,-1);
   glVertex2d(17.5,-2.8);
    glVertex2d(25,-7);
   glVertex2d(25,-2.4);
glEnd();

glBegin(GL_LINE_LOOP);//side table top
 glColor3f(0,0,0);

   glVertex2d(21.3,-1);
   glVertex2d(17.5,-2.8);
    glVertex2d(25,-7);
   glVertex2d(25,-2.4);
glEnd();

glBegin(GL_QUADS);//side table top left inner layer
 glColor3f(0.5,0.3,0);

    glVertex2d(17.8,-3.5);
   glVertex2d(21,-5);
   glVertex2d(21,-10);
    glVertex2d(18,-12);

glEnd();

glBegin(GL_LINE_LOOP);//side table top left inner layer
 glColor3f(0.5,0.3,0);

    glVertex2d(17.8,-3.5);
   glVertex2d(21,-5);
   glVertex2d(21,-10);
    glVertex2d(18,-12);

glEnd();

glBegin(GL_QUADS);//side table top left stand
 glColor3f(0,0,0);

    glVertex2d(17.8,-3.5);
   glVertex2d(18.5,-3.5);
   glVertex2d(18.5,-11.7);
    glVertex2d(17.8,-12.1);

glEnd();



glBegin(GL_QUADS);//side table top down border
 glColor3f(0,0,0);

   glVertex2d(17.5,-2.8);
   glVertex2d(17.5,-3.7);
   glVertex2d(25,-8);
    glVertex2d(25,-7);

glEnd();

glBegin(GL_LINE_LOOP);//side table top down border
 glColor3f(0,0,0);

    glVertex2d(17.5,-2.8);
   glVertex2d(17.5,-3.7);
   glVertex2d(25,-8);
    glVertex2d(25,-7);
glEnd();


glBegin(GL_QUADS);//side table drawer
 glColor3f(0.5,0.3,0);

   glVertex2d(18.5,-6.5);
   glVertex2d(18.5,-4.3);
   glVertex2d(25,-8);
    glVertex2d(25,-10.3);

glEnd();

glBegin(GL_LINE_LOOP);//side table drawer
 glColor3f(0,0,0);
    glVertex2d(18.5,-6.5);
   glVertex2d(18.5,-4.3);
   glVertex2d(25,-8);
    glVertex2d(25,-10.3);

glEnd();

glBegin(GL_LINE_LOOP);//side table drawer middle border
 glColor3f(0,0,0);
    glVertex2d(22.5,-6);
   glVertex2d(22.5,-8.9);

     glEnd();

glPushMatrix();//side table drawer knob
glColor3f(0,0,0);
glTranslated(20.3,-6.36,0);
circle(0.2,0.4);
glPopMatrix();




//******************8

glPushMatrix();//lamp down last cicle
glColor3f(0,0,0);
glTranslated(22,-3,0);
circle(1.3,0.7);
glPopMatrix();

glPushMatrix();//lamp down last then up cicle
glColor3f(0.42,0.12,0.30);
glTranslated(22,-3,0);
circle(1.2,0.6);
glPopMatrix();

glBegin(GL_QUADS);//lamp pillar
 glColor3f(0.42,0.12,0.30);

   glVertex2d(21.6,-2.9);
   glVertex2d(22.3,-2.9);
   glVertex2d(22.3,4);
    glVertex2d(21.6,4);

glEnd();

glBegin(GL_LINES);//lamp pillar
    glColor3f(0,0,0);
    glVertex2d(22.3,-2.9);
    glVertex2d(22.3,4);

    glVertex2d(21.6,4);
    glVertex2d(21.6,-2.9);

glEnd();

glBegin(GL_LINE_LOOP);//lamp chain
 glColor3f(0,0,0);

   glVertex2d(20.5,4);
   glVertex2d(20.5,0.5);


glEnd();

glPushMatrix();//lamp key
glColor3f(0,0,0);
glTranslated(20.5,0.5,0);
circle(0.18,0.4);
glPopMatrix();


glBegin(GL_QUADS);//lamp pillar top
 glColor3f(0.7,0.21,0.44);

   glVertex2d(19,3);
   glVertex2d(20.8,8);
   glVertex2d(22.8,8);
    glVertex2d(24.6,3);

glEnd();

glBegin(GL_LINE_LOOP);//lamp pillar top
 glColor3f(0,0,0);

   glVertex2d(19,3);
   glVertex2d(20.8,8);
   glVertex2d(22.8,8);
    glVertex2d(24.6,3);

glEnd();
//*****************8

glBegin(GL_QUADS);//carpet
 glColor3f(1,0,0);

   glVertex2d(4.5,-19.4);
   glVertex2d(12,-15);
   glVertex2d(16,-20);
    glVertex2d(7.5,-25.5);

glEnd();

glBegin(GL_LINE_LOOP);//carpet
 glColor3f(0,0,0);

glVertex2d(4.5,-19.4);
   glVertex2d(12,-15);
   glVertex2d(16,-20);
    glVertex2d(7.5,-25.5);

glEnd();


glPushMatrix();//carpet design
glColor3f(0,0,0);
glTranslated(10,-19,0);
circle(0.8,0.9);
glPopMatrix();

glPushMatrix();//carpet design
glColor3f(0,0,0);
glTranslated(10,-21,0);
circle(0.8,0.9);
glPopMatrix();

glPushMatrix();//carpet design
glColor3f(0,0,0);
glTranslated(9,-20,0);
circle(0.8,0.9);
glPopMatrix();

glPushMatrix();//carpet design
glColor3f(0,0,0);
glTranslated(11,-20,0);
circle(0.8,0.9);
glPopMatrix();

glPushMatrix();//carpet design
glColor3f(0,0,1);
glTranslated(10,-20,0);
circle(0.5,0.7);
glPopMatrix();
glPopMatrix();                                      //Finish tabel lapp and carpet


                         //   **************************************************************
glPushMatrix();
    glTranslated(-2,22,0);
    glScaled(0.6,0.6,1);
    glBegin(GL_QUADS);
    glColor3f(0,1,1);
        glVertex2d(-0.3,0);  //fan hanger
        glVertex2d(0.3,0);
        glVertex2d(0.3,5);
        glVertex2d(-0.3,5);
    glEnd();

    glPushMatrix();                                                    //Start fan
        glRotated(anglef,0,0,1);

        glBegin(GL_QUADS);
            glColor3f(0.2,0.27,0.44); //right pad for fan
            glVertex2f(0,0.7);
            glVertex2f(0,-0.7);
            glVertex2f(5,-5);
            glVertex2f(5.4,-2);

            glVertex2f(0,0.7);//left pad for fan
            glVertex2f(0,-0.7);
            glVertex2f(-5,-5);
            glVertex2f(-5.4,-2);

            glVertex2f(0.7,0);//top pad for fan
            glVertex2f(-0.7,0);
            glVertex2f(-1.5,7);
            glVertex2f(1.5,7);

        glEnd();
        glBegin(GL_LINE_LOOP);
            glColor3f(0,0,0);
            glVertex2f(0,0.7);
            glVertex2f(0,-0.7);
            glVertex2f(5,-5);
            glVertex2f(5.4,-2);
        glEnd();

        glBegin(GL_LINE_LOOP);
            glColor3f(0,0,0);
            glVertex2f(0,0.7);//left pad for fan
            glVertex2f(0,-0.7);
            glVertex2f(-5,-5);
            glVertex2f(-5.4,-2);
        glEnd();

        glBegin(GL_LINE_LOOP);
            glColor3f(0,0,0);
            glVertex2f(0.7,0);//top pad for fan
            glVertex2f(-0.7,0);
            glVertex2f(-1.5,7);
            glVertex2f(1.5,7);
        glEnd();

        glColor3f(1,0,0);
        circle(1.2,1.2);
        glColor3f(1,0,1);
        circle(1,1);
        glBegin(GL_LINES);
        glColor3f(0,0,0);
            glVertex2d(0,0);
            glVertex2d(0.7,0.7);
            glVertex2d(0,0);
            glVertex2d(-0.7,0.7);
            glVertex2d(0,0);
            glVertex2d(-0.7,-0.7);
            glVertex2d(0,0);
            glVertex2d(0.7,-0.7);

            glVertex2d(0,0);
            glVertex2d(1,0);
            glVertex2d(0,0);
            glVertex2d(-1,0);

            glVertex2d(0,0);
            glVertex2d(0,-1);
            glVertex2d(0,0);
            glVertex2d(0,1);
        glEnd();
        glColor3f(1,1,0);
        circle(0.5,0.5);
    glPopMatrix();
glPopMatrix();

                                                    //End fan
                                                    //Start Clock
rotateClock();
glPushMatrix();
    glTranslated(16,17,0);
    glScaled(0.6,1,0);
    glColor3f(0.827,0.66,0.47);
    circle(3.1,3.1);
    glColor3f(0.07,0.11,0.27);
    circle(2.9,2.9);

    glBegin(GL_QUADS);//timing block
        glColor3f(1,1,1);
            glVertex2d(-2.9,0.05);
            glVertex2d(-2.9,-0.05);
            glVertex2d(-2.5,-0.05);
            glVertex2d(-2.5,0.05);
        glEnd();
        glBegin(GL_QUADS);//timing block
        glColor3f(1,1,1);
            glVertex2d(2.9,0.05);
            glVertex2d(2.9,-0.05);
            glVertex2d(2.5,-0.05);
            glVertex2d(2.5,0.05);
        glEnd();
        glBegin(GL_QUADS);//timing block
        glColor3f(1,1,1);
            glVertex2d(-0.05,2.9);
            glVertex2d(0.05,2.9);
            glVertex2d(0.05,2.5);
            glVertex2d(-0.05,2.5);
        glEnd();
        glBegin(GL_QUADS);//timing block
        glColor3f(1,1,1);
            glVertex2d(-0.05,-2.9);
            glVertex2d(0.05,-2.9);
            glVertex2d(0.05,-2.5);
            glVertex2d(-0.05,-2.5);
        glEnd();
    glPushMatrix();
        glRotated(angleH,0,0,-1);//hour
        glBegin(GL_QUADS);
        glColor3f(1,1,1);
            glVertex2d(0.11,0);
            glVertex2d(-0.11,0);
            glVertex2d(-0.11,2);
            glVertex2d(0.11,2);
        glEnd();
    glPopMatrix();
    glPushMatrix();
        glRotated(angleM,0,0,-1);//Minuite
        glBegin(GL_QUADS);
        glColor3f(1,1,1);
            glVertex2d(0,0.1);
            glVertex2d(0,-0.1);
            glVertex2d(2.5,-0.1);
            glVertex2d(2.5,0.1);
        glEnd();
    glPopMatrix();
    glPushMatrix();
        glRotated(angleS,0,0,-1);//second
        glBegin(GL_QUADS);
        glColor3f(1,1,1);
            glVertex2d(0.05,0);
            glVertex2d(-0.05,0);
            glVertex2d(-0.05,2.7);
            glVertex2d(0.05,2.7);
        glEnd();
    glPopMatrix();

    glColor3f(1,1,1);
    circle(0.2,0.2);
glPopMatrix();
                                                    //End clock
                                                    //Start teddy bear


    glPushMatrix();//doll body
    glColor3f(0.53,0.27,0.07);
    glTranslated(19.1,4.0,0);
    circle(0.8,1.8);
    glPopMatrix();

    glPushMatrix();//doll body
    glColor3f(0.80,0.52,0.24);
    glTranslated(19.1,4.0,0);
    circle(0.6,1.3);
    glPopMatrix();


    glPushMatrix();//doll leg left
    glColor3f(0.53,0.27,0.07);
    glTranslated(18.7,2.3,0);
    circle(0.3,0.7);
    glPopMatrix();

    glPushMatrix();//doll leg left
    glColor3f(0.80,0.52,0.24);
    glTranslated(18.7,2.0,0);
    circle(0.2,0.2);
    glPopMatrix();

    glPushMatrix();//doll leg right
    glColor3f(0.53,0.27,0.07);
    glTranslated(19.4,2.2,0);
    circle(0.3,0.7);
    glPopMatrix();

    glPushMatrix();//doll leg right
    glColor3f(0.80,0.52,0.24);
    glTranslated(19.4,2.0,0);
    circle(0.2,0.2);
    glPopMatrix();


    glPushMatrix();//doll left hand
    glColor3f(0.53,0.27,0.07);
    glTranslated(18.2,5.1,0);
    circle(0.3,1);
    glPopMatrix();

    glPushMatrix();//doll left hand
    glColor3f(0.80,0.52,0.24);
    glTranslated(18.2,5.5,0);
    circle(0.2,0.5);
    glPopMatrix();

    glPushMatrix();//doll right hand
    glColor3f(0.53,0.27,0.07);
    glTranslated(20,5.1,0);
    circle(0.3,1.1);
    glPopMatrix();

    glPushMatrix();//doll right hand
    glColor3f(0.80,0.52,0.24);
    glTranslated(20,5.5,0);
    circle(0.2,0.5);
    glPopMatrix();


    //doll ear left
    glBegin(GL_TRIANGLES);

    glColor3f(0.53,0.27,0.07);

       glVertex2d(19,7.8);
       glVertex2d(18.6,7.8);
       glVertex2d(18.7,8.9);

       glEnd();

       //doll ear right
    glBegin(GL_TRIANGLES);

    glColor3f(0.53,0.27,0.07);
       glVertex2d(19.2,7.8);
       glVertex2d(19.6,7.8);
       glVertex2d(19.5,8.9);

       glEnd();

    glPushMatrix();//doll  head
    glColor3f(0.53,0.27,0.07);
    glTranslated(19.1,6.7,0);
    circle(0.7,1.5);
    glPopMatrix();

    glPushMatrix();//mouth
    glColor3f(1,0,0);
    glTranslated(19.1,6.1,0);
    circle(0.2,0.2);
    glPopMatrix();

    glPushMatrix();//doll left eye
    glColor3f(0,0,0);
    glTranslated(18.8,7.1,0);
    circle(0.125,0.3);
    glPopMatrix();

    glPushMatrix();//doll right eye
    glColor3f(0,0,0);
    glTranslated(19.4,7.1,0);
    circle(0.125,0.3);
    glPopMatrix();

                                                    //end teddy bear





    glFlush();
    //glutSwapBuffers(); for GLUT_DOuble
}
void rotateCircle(){
    anglef=anglef-5;
    glutPostRedisplay();
}


void normalKey(unsigned char key, int x, int y){
    switch(key){
    case 's':
        angleB=-60;
        charX=50;
        charY=50;
        charX1=29;
        charY1=-14.5;
        glutPostRedisplay();
        break;
    case 'w':
        charX=16;
        charY=15;
        charX1=50;
        charY1=50;
        angleB=0;
        glutPostRedisplay();
        break;
    case 'f':
        glutIdleFunc(rotateCircle);
        break;
    case 'g':
        glutIdleFunc(NULL);
        glutPostRedisplay();
        break;
    case 'n':   //for right shifting almira
        if(cxr>0)
        cxr--;
        glutPostRedisplay();
        break;
    case 'm':   //for right shifting almira
        if(cxr<3)
        cxr++;
        glutPostRedisplay();
        break;
    case 'c':   //for left shifting almira
        if(cxl>-3)
        cxl--;
        glutPostRedisplay();
        break;
    case 'v':   //for left shifting almira
        if(cxl<0)
        cxl++;
        glutPostRedisplay();
        break;
    default:
        break;
    }
}
void specialKey(int key, int x, int y){
    switch(key){
    case GLUT_KEY_UP:
        if(charY<19 && charX>-2){
            charY++;
        }/*else if(charY<20 && charX>15){
            charY++;
        }*/
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN:
        if(charY>-1 && charX<=5){
            charY--;
        }else if(charX>5){
            if(charY>14)
            charY--;
        }
        glutPostRedisplay();
        break;
    case GLUT_KEY_LEFT:
        if(charX>-2 && charY<10){
            charX--;
        }else if(charX>-1){
            if(charX<=20 && charY>10){
                charX--;
            }
        }
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        if(charX<5 && charY<11){
            charX++;
        }else if(charX<20 && charY>11){
            charX++;
        }
        glutPostRedisplay();
        break;
    default:
        break;
    }
}
int main(){
    glutInitWindowSize(1500,785);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Project");
    init();
    glutDisplayFunc(myDisplay);
    glutSpecialFunc(specialKey);
    glutKeyboardFunc(normalKey);
    glutMainLoop();


    return 0;
}
