#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <stdlib.h>
#include <windows.h>
#include<math.h>

void display();

void reshape(int w,int h);
void timer(int);


void reshape(int w, int h);
void init(){
    glClearColor(0.5,0.74,0.89,1.0);
}

int main(int argc,char**argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,0);
    glutInitWindowSize(1200,800);

    glutCreateWindow("20109771 & 20100883");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    init();

    glutMainLoop();
}

float step=0;

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


//boat
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.35,0.05);

    double radius=4;


    for(int i=180 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(radius*cos(angle)+step,radius*sin(angle));


    }


    glEnd();
//sail_line
glPushMatrix();
glColor3f(1,1,1);
glLineWidth(7.5);
glBegin(GL_LINES);
glVertex2f(0+step,0);
glVertex2f(0+step,4);
glEnd();

//sail
glPushMatrix();
glColor3f(1,1,1);
glLineWidth(7.5);
glColor3f(0.5,0.5,0.05);
glBegin(GL_TRIANGLES);
glVertex2f(-0.107+step,5);
glVertex2f(4+step,1);
glVertex2f(-0.107+step,1);
glEnd();

//c2
glTranslatef( -6.0, 5.0, 1.0 );

glColor3f(1,1,1);
glBegin(GL_POLYGON);

    double rad=1.7;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(rad*cos(angle),rad*sin(angle)*1.5);


    }




    glEnd();

//sea
glPushMatrix();
glColor3f(0,0.5,1);
glBegin(GL_POLYGON);
glVertex2f(-6,-8);
glVertex2f(-6,-16);
glVertex2f(16,-16);
glVertex2f(16,-8);
glVertex2f(16,-16);
glVertex2f(16,-16);
glEnd();







//sun
glTranslatef( -3.0, 4.0, 0.0  );
glColor3f(1,1,0);
glBegin(GL_POLYGON);

    double r=1.9;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(r*cos(angle),r*sin(angle));


    }


    glEnd();
//c1
glTranslatef( 1.5, -4, 0.0 );

glColor3f(1,1,1);
glBegin(GL_POLYGON);

    double ra=1.3;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(ra*cos(angle),ra*sin(angle)*1.15);


    }




    glEnd();
    //c3
    glTranslatef( 3.0, 0, 0.0 );

glColor3f(1,1,1);
glBegin(GL_POLYGON);

    double x=1.7;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(x*cos(angle),x*sin(angle)*1.15);


    }




    glEnd();
//c4
    glTranslatef( 6, 2.0, 0.0 );

glColor3f(1,1,1);
glBegin(GL_POLYGON);

    double y=1.7;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(y*cos(angle),y*sin(angle)*1.15);


    }




    glEnd();
    //c5
    glTranslatef( 1.9, 0.0, 0.0 );

glColor3f(1,1,1);
glBegin(GL_POLYGON);

    double t=1.7;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(t*cos(angle),t*sin(angle)*1.15);


    }




    glEnd();
//c6
     glTranslatef( 1.1, 0.0, 0.0 );

glColor3f(1,1,1);
glBegin(GL_POLYGON);

    double n=1;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(n*cos(angle),n*sin(angle)*1.15);


    }




    glEnd();
    //c8
     glTranslatef( -2, 1.0, 0.0 );

glColor3f(1,1,1);
glBegin(GL_POLYGON);

    double v=1.5;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(v*cos(angle),v*sin(angle)*1.15);


    }




    glEnd();
    //c7
    glTranslatef( -2.3, -1.0, 0.0 );

glColor3f(1,1,1);
glBegin(GL_POLYGON);

    double j=1;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(j*cos(angle),j*sin(angle)*1.15);


    }




    glEnd();
    //c9

    glTranslatef( -3.3, -2.0, 0.0 );

glColor3f(1,1,1);
glBegin(GL_POLYGON);

    double k=1;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(k*cos(angle),k*sin(angle)*1.15);


    }




    glEnd();

    //island

       glTranslatef( -5.3, -9.0, 0.0 );

glColor3f(1,0.9,0.48);
glBegin(GL_POLYGON);

    double w=1.9;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(w*cos(angle)*-1.7,w*sin(angle)*-1.2);


    }



//tree's steam
    glEnd();
    glPushMatrix();
glColor3f(0.45,0,0);
glLineWidth(20);
glBegin(GL_LINES);
glVertex2f(-0.5 ,0);
glVertex2f(-0.2,5);
glEnd();

glTranslatef( -0.7, 4.8, 0.0 );

glColor3f(0,0.47,0);
glBegin(GL_POLYGON);

    double z=0.8;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(z*cos(angle),z*sin(angle)*1.15);


    }




    glEnd();

    glTranslatef( 1.0, -0.15, 0.0 );

glColor3f(0,0.47,0);
glBegin(GL_POLYGON);

    double p=0.8;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(p*cos(angle),p*sin(angle)*1.15);


    }




    glEnd();

        glTranslatef( 0.5, 1.15, 0.0 );

glColor3f(0,0.47,00);
glBegin(GL_POLYGON);

    double m=0.8;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(m*cos(angle),m*sin(angle)*1.15);


    }

    glEnd();
        glTranslatef( -1.3, 0.15, 0.0 );

glColor3f(0,0.47,0);
glBegin(GL_POLYGON);

    double c=0.8;


    for(int i=0 ;i<=360 ;i++ ){


        double angle=i*3.14/180;
        glVertex2d(c*cos(angle),c*sin(angle)*1.15);


    }




    glEnd();

 glPushMatrix();
glColor3f(0.45,0,0);
glLineWidth(20);
glBegin(GL_POLYGON);
glVertex2f(6.7-step,3.7);
glVertex2f(6.7-step,5.7);
glVertex2f(2.66-step,5.7);
glVertex2f(2.66-step,3.7);
glEnd();

glBegin(GL_POLYGON);
    glVertex2f(2.7-step,5.7);
    glVertex2f(2.7-step,3.7);
    glVertex2f(0.7-step,4.7);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(2.7-step,5.7);
    glVertex2f(4.2-step,5.7);
     glVertex2f(4.2-step,8.7);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(2.7-step,3.7);
    glVertex2f(4.2-step,3.7);
    glVertex2f(4.2-step,0.7);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(5.2-step,3.7);
    glVertex2f(6.3-step,1.7);
    glVertex2f(6.3-step,3.7);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(5.2-step,5.7);
    glVertex2f(6.3-step,7.7);
    glVertex2f(6.3-step,5.7);
    glEnd();



    glFlush();
}

void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
	step+=0.03;


}

