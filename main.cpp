#include <windows.h>
#include<iostream>
#include<GL/gl.h>
#include<GL/glut.h>
#include<math.h>
#define PI  3.14159265358979323846
using namespace std;







    void drawScene(){
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);








   //Lake View

    //1//
      glPushMatrix();
      glBegin(GL_POLYGON);
      glColor3f(0.9f,0.9f,0.1f);
      glVertex3f(-0.75f,-0.33f,0.0f);
      glVertex3f(-0.75f,-0.55f,0.0f);
      glVertex3f(-0.65f,-0.55f,0.0f);
      glVertex3f(-0.65f,-0.33f,0.0f);
      glEnd();
      glPopMatrix();

    //2//
      glPushMatrix();
      glBegin(GL_POLYGON);
      glColor3f(0.9f,0.9f,0.1f);
      glVertex3f(-0.55f,-0.33f,0.0f);
      glVertex3f(-0.55f,-0.55f,0.0f);
      glVertex3f(-0.45f,-0.55f,0.0f);
      glVertex3f(-0.45f,-0.33f,0.0f);
      glEnd();
      glPopMatrix();

      //3//


 int i;

    GLfloat p1=-0.50f; GLfloat q1= -0.55f; GLfloat r1 = 0.054f;
    int  tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.9f,0.3f,0.3f);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    GLfloat p10=-0.50f; GLfloat q10= -0.55f; GLfloat r10 = 0.050f;
    int tringle11=40;

    GLfloat tp11 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.5f,0.5f,1.0f);
    glVertex2f (p10,q10);
    for(i= 0;i<=tringle11; i++)
    {
        glVertex2f (
                    p10+(r10*cos(i*tp11/tringle11)),
                    q10+(r10*sin(i*tp11/tringle11))
                    );


    }
    glEnd ();


    GLfloat p11=-0.70f; GLfloat q11= -0.55f; GLfloat r11 = 0.054f;
    int tringle12=40;

    GLfloat tp12 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.9f,0.3f,0.3f);
    glVertex2f (p11,q11);
    for(i= 0;i<=tringle12; i++)
    {
        glVertex2f (
                    p11+(r11*cos(i*tp12/tringle12)),
                    q11+(r11*sin(i*tp12/tringle12))
                    );


    }
    glEnd ();

    GLfloat p12=-0.70f; GLfloat q12= -0.55f; GLfloat r12 = 0.050f;
    int tringle13=40;

    GLfloat tp13 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.5f,0.5f,1.0f);
    glVertex2f (p12,q12);
    for(i= 0;i<=tringle13; i++)
    {
        glVertex2f (
                    p12+(r12*cos(i*tp13/tringle13)),
                    q12+(r12*sin(i*tp13/tringle13))
                    );


    }
    glEnd ();

    glBegin(GL_POLYGON);
    glColor3f(0.9,0.9, 0.1);
    glVertex3f(-0.75f, -0.54f, 0.0f);
    glVertex3f(-0.65f, -0.54f, 0.0f);
    glVertex3f(-0.65f, -0.4f, 0.0f);
    glVertex3f(-0.75f, -0.4f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.9,0.9, 0.1);
    glVertex3f(-0.55f, -0.54f, 0.0f);
    glVertex3f(-0.45f, -0.54f, 0.0f);
    glVertex3f(-0.45f, -0.4f, 0.0f);
    glVertex3f(-0.55f, -0.4f, 0.0f);
    glEnd();


    ////View Stairs///
    //2//
    glLineWidth(2.5);

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, -0.36f);
	glVertex2f(-0.45f, -0.36f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, -0.40f);
	glVertex2f(-0.45f, -0.40f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, -0.44f);
	glVertex2f(-0.45f, -0.44f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, -0.48f);
	glVertex2f(-0.45f, -0.48f);

	glEnd();

	//1//

	glLineWidth(2.5);

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.75f, -0.36f);
	glVertex2f(-0.65f, -0.36f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.75f, -0.40f);
	glVertex2f(-0.65f, -0.40f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.75f, -0.44f);
	glVertex2f(-0.65f, -0.44f);

	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.75f, -0.48f);
	glVertex2f(-0.65f, -0.48f);

	glEnd();

	//View Border//
    //2(1)//
	glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.4f, 0.2f, 1.0f);
	glVertex2f(-0.55f, -0.33f);
	glVertex2f(-0.55f, -0.547f);

	glEnd();
	//2(2)//
	glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.4f, 0.2f, 1.0f);
	glVertex2f(-0.45f, -0.33f);
	glVertex2f(-0.45f, -0.547f);

	glEnd();
	//1(1)//
	glBegin(GL_LINES);
	glColor3f(0.4f, 0.2f, 1.0f);
	glVertex2f(-0.75f, -0.33f);
	glVertex2f(-0.75f, -0.547f);

	glEnd();
	//1(2)//
	glBegin(GL_LINES);
	glColor3f(0.4f, 0.2f, 1.0f);
	glVertex2f(-0.65f, -0.33f);
	glVertex2f(-0.65f, -0.547f);

	glEnd();

	//Human//
    //1//
glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.5f, 1.0f, 0.5f);
	glVertex2f(-0.53f, -0.40f);
	glVertex2f(-0.53f, -0.43f);

	glEnd();

	glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.5f, 1.0f, 0.5f);
	glVertex2f(-0.53f, -0.40f);
	glVertex2f(-0.55f, -0.42f);

	glEnd();

	glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.5f, 1.0f, 0.5f);
	glVertex2f(-0.53f, -0.40f);
	glVertex2f(-0.51f, -0.42f);

	glEnd();
    glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex2f(-0.53f, -0.43f);
	glVertex2f(-0.55f, -0.45f);

	glEnd();
	glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex2f(-0.53f, -0.43f);
	glVertex2f(-0.51f, -0.45f);

	glEnd();


	glPointSize(5.0);

	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.53f, -0.394f);

	glEnd();


	 //2//
glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.5f, 0.1f, 0.9f);
	glVertex2f(-0.73f, -0.37f);
	glVertex2f(-0.73f, -0.40f);

	glEnd();


    glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex2f(-0.73f, -0.40f);
	glVertex2f(-0.73f, -0.43f);

	glEnd();

	glPointSize(5.0);

	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.73f, -0.374f);

	glEnd();

	 //3//
glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.9f, 0.9f);
	glVertex2f(-0.50f, -0.50f);
	glVertex2f(-0.50f, -0.53f);

	glEnd();

	glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.9f, 0.9f);
	glVertex2f(-0.50f, -0.50f);
	glVertex2f(-0.52f, -0.52f);

	glEnd();

	glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.9f, 0.9f);
	glVertex2f(-0.50f, -0.50f);
	glVertex2f(-0.48f, -0.52f);

	glEnd();
    glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex2f(-0.50f, -0.53f);
	glVertex2f(-0.52f, -0.55f);

	glEnd();
	glLineWidth(4.5);

	glBegin(GL_LINES);
	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex2f(-0.50f, -0.53f);
	glVertex2f(-0.48f, -0.55f);

	glEnd();


	glPointSize(5.0);

	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.50f, -0.496f);

	glEnd();


    //Trees
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(-0.6f,-0.33f,0.0f);
    glVertex3f(-0.566f,-0.33f,0.0f);
    glVertex3f(-0.566f,0.166f,0.0f);
    glVertex3f(-0.6f,0.166f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(-0.1f,-0.33f,0.0f);
    glVertex3f(-0.066f,-0.33f,0.0f);
    glVertex3f(-0.066f,0.166f,0.0f);
    glVertex3f(-0.1f,0.166f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.4f,-0.33f,0.0f);
    glVertex3f(0.433f,-0.33f,0.0f);
    glVertex3f(0.433f,0.166f,0.0f);
    glVertex3f(0.4f,0.166f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.9f,-0.33f,0.0f);
    glVertex3f(0.933f,-0.33f,0.0f);
    glVertex3f(0.933f,0.166f,0.0f);
    glVertex3f(0.9f,0.166f,0.0f);
    glEnd();




    GLfloat p2=-0.66f; GLfloat q2= -0.06f; GLfloat r2 = 0.10f;
    int tringle3=40;

    GLfloat tp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.0f,0.4f,0.0f);
    glVertex2f (p2,q2);
    for(i= 0;i<=tringle3; i++)
    {
        glVertex2f (
                    p2+(r2*cos(i*tp3/tringle3)),
                    q2+(r2*sin(i*tp3/tringle3))
                    );


    }
    glEnd ();


GLfloat p3=-0.52f; GLfloat q3= -0.0f; GLfloat r3 = 0.12f;
    int tringle4=40;

    GLfloat tp4 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.2f,0.4f,0.2f);
    glVertex2f (p3,q3);
    for(i= 0;i<=tringle4; i++)
    {
        glVertex2f (
                    p3+(r3*cos(i*tp4/tringle4)),
                    q3+(r3*sin(i*tp4/tringle4))
                    );


    }
    glEnd ();


    GLfloat p4=-0.64f; GLfloat q4= 0.12f; GLfloat r4 = 0.09f;
    int tringle5=40;

    GLfloat tp5 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.3f,0.8f,0.4f);
    glVertex2f (p4,q4);
    for(i= 0;i<=tringle5; i++)
    {
        glVertex2f (
                    p4+(r4*cos(i*tp5/tringle5)),
                    q4+(r4*sin(i*tp5/tringle5))
                    );

    }
    glEnd ();


    GLfloat p5=-0.52f; GLfloat q5= 0.17f; GLfloat r5 = 0.08f;
    int tringle6=40;

    GLfloat tp6 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.4f,0.9f,0.2f);
    glVertex2f (p5,q5);
    for(i= 0;i<=tringle6; i++)
    {
        glVertex2f (
                    p5+(r5*cos(i*tp6/tringle6)),
                    q5+(r5*sin(i*tp6/tringle6))
                    );


    }
    glEnd ();


    GLfloat p6=-0.60f; GLfloat q6= 0.25f; GLfloat r6 = 0.07f;
    int tringle7=40;

    GLfloat tp7 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.5f,1.0f,0.4f);
    glVertex2f (p6,q6);
    for(i= 0;i<=tringle7; i++)
    {
        glVertex2f (
                    p6+(r6*cos(i*tp7/tringle7)),
                    q6+(r6*sin(i*tp7/tringle7))
                    );


    }
    glEnd ();



    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(-0.15f,-0.166f,0.0f);
    glVertex3f(-0.016f,-0.166f,0.0f);
    glVertex3f(-0.0833f,-0.0f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.85f,-0.166f,0.0f);
    glVertex3f(0.983f,-0.166f,0.0f);
    glVertex3f(0.9166f,0.0f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(-0.15f,-0.05f,0.0f);
    glVertex3f(-0.016f,-0.05f,0.0f);
    glVertex3f(-0.0833f,0.33f,0.0f);
    glEnd();


   GLfloat p7=0.49f; GLfloat q7= -0.02f; GLfloat r7 = 0.12f;
    int tringle8=40;

    GLfloat tp8 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.0f,0.6f,0.0f);
    glVertex2f (p7,q7);
    for(i= 0;i<=tringle8; i++)
    {
        glVertex2f (
                    p7+(r7*cos(i*tp8/tringle8)),
                    q7+(r7*sin(i*tp8/tringle8))
                    );


    }
    glEnd ();



    GLfloat p8=0.35f; GLfloat q8= 0.0f; GLfloat r8 = 0.11f;
    int tringle9=40;

    GLfloat tp9 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.0f,0.5f,0.1f);
    glVertex2f (p8,q8);
    for(i= 0;i<=tringle9; i++)
    {
        glVertex2f (
                    p8+(r8*cos(i*tp9/tringle9)),
                    q8+(r8*sin(i*tp9/tringle9))
                    );


    }
    glEnd ();

    GLfloat p9=0.42f; GLfloat q9= 0.14f; GLfloat r9 = 0.11f;
    int tringle10=40;

    GLfloat tp10 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f (0.0f,1.0f,0.4f);
    glVertex2f (p9,q9);
    for(i= 0;i<=tringle10; i++)
    {
        glVertex2f (
                    p9+(r9*cos(i*tp10/tringle10)),
                    q9+(r9*sin(i*tp10/tringle10))
                    );


    }
    glEnd ();



    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();


    //Bus Stop//

          GLfloat p20=0.774f; GLfloat q20= 0.0968f; GLfloat r20 = 0.026f;
    int tringle21=80;

    GLfloat tp21 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7f,0.3f,0.4f);
    glVertex2f (p20,q20);
    for(i= 0;i<=tringle21; i++)
    {
        glVertex2f (
                    p20+(r20*cos(i*tp21/tringle21)),
                    q20+(r20*sin(i*tp21/tringle21))
                    );
    }
    glEnd ();


    GLfloat p21=0.726f; GLfloat q21= 0.0968f; GLfloat r21 = 0.026f;
    int tringle22=80;

    GLfloat tp22 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.7f,0.3f,0.4f);
    glVertex2f (p21,q21);
    for(i= 0;i<=tringle22; i++)
    {
        glVertex2f (
                    p21+(r21*cos(i*tp22/tringle22)),
                    q21+(r21*sin(i*tp22/tringle22))
                    );
    }
    glEnd ();

    GLfloat p22=0.726f; GLfloat q22= 0.0968f; GLfloat r22 = 0.021f;
    int tringle23=80;

    GLfloat tp23 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.5f,0.0f,0.1f);
    glVertex2f (p22,q22);
    for(i= 0;i<=tringle23; i++)
    {
        glVertex2f (
                    p22+(r22*cos(i*tp23/tringle23)),
                    q22+(r22*sin(i*tp23/tringle23))
                    );
    }
    glEnd ();

    GLfloat p23=0.774f; GLfloat q23= 0.0968f; GLfloat r23 = 0.021f;
    int tringle24=80;

    GLfloat tp24 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.5f,0.0f,0.1f);
    glVertex2f (p23,q23);
    for(i= 0;i<=tringle24; i++)
    {
        glVertex2f (
                    p23+(r23*cos(i*tp24/tringle24)),
                    q23+(r23*sin(i*tp24/tringle24))
                    );
    }
    glEnd ();


    glBegin(GL_QUADS);
     glColor3f( 0.7f,0.3f,0.4f);
       glVertex3f(0.7f, 0.10f, 0.0f);
        glVertex3f(0.7f, 0.0f, 0.0f);
         glVertex3f(0.8f, 0.0f, 0.0f);
          glVertex3f(0.8f, 0.10f, 0.0f);
          glEnd();



          glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(0.701f,0.0968f,0.0f);
    glVertex3f(0.801f,0.0968f,0.0f);
    glEnd();

     glBegin(GL_QUADS);
     glColor3f( 1.0f,1.0f,0.0f);
       glVertex3f(0.704f, 0.095f, 0.0f);
        glVertex3f(0.704f, 0.0f, 0.0f);
         glVertex3f(0.796f, 0.0f, 0.0f);
          glVertex3f(0.796f, 0.095f, 0.0f);
          glEnd();




        glBegin(GL_QUADS);
     glColor3f( 0.3f,0.1f,1.0f);
       glVertex3f(0.708f, 0.04f, 0.0f);
        glVertex3f(0.708f, 0.0f, 0.0f);
         glVertex3f(0.79f, 0.0f, 0.0f);
          glVertex3f(0.79f, 0.04f, 0.0f);
          glEnd();





glutSwapBuffers();
    }

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(2000, 2000);
    glutCreateWindow("City By The Lake");
    glutDisplayFunc(drawScene);

    glutMainLoop();
    return 0;

}

