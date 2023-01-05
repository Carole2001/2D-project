#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <stdlib.h>
#include <windows.h>
#include<mmsystem.h>
#include <math.h>

float xRotated = 90.0, yRotated = 0.0;

//------------------------------  reshapeFunc  ---------------------------------

void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40.0, (GLdouble)w / (GLdouble)h, 0.5, 20.0);

    glMatrixMode(GL_MODELVIEW);
}
//-----------------------------function--------------------------------


float zRotated=0;
void tree (){
    glTranslatef    (0.0, 0.0, -15.0);
    glRotatef(60.0, 0 , 1 ,0);
    glRotatef(zRotated, 0 , 1 ,0);
    //christmas tree
    glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles
      // Front
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(-1.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(1.0f, -1.0f, 1.0f);

      // Right
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(1.0f, -1.0f, 1.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(1.0f, -1.0f, -1.0f);

      // Back
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(1.0f, -1.0f, -1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-1.0f, -1.0f, -1.0f);

      // Left
      glColor3f(1.0f,0.0f,0.0f);       // Red
      glVertex3f( 0.0f, 1.0f, 0.0f);
      glColor3f(0.0f,0.0f,1.0f);       // Blue
      glVertex3f(-1.0f,-1.0f,-1.0f);
      glColor3f(0.0f,1.0f,0.0f);       // Green
      glVertex3f(-1.0f,-1.0f, 1.0f);
   glEnd();   // Done drawing the pyramid

   glLoadIdentity ();
    glTranslatef    (0.0, -1.0, -15.0);
    glRotatef(60.0, 0 , 1 ,0);
    glRotatef(zRotated, 0 , 1 ,0);

   glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles
      // Front
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f( 0.0f, 1.5f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(-1.5f, -1.5f, 1.5f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(1.5f, -1.5f, 1.5f);

      // Right
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.5f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.5f);     // Blue
      glVertex3f(1.5f, -1.5f, 1.5f);
      glColor3f(0.0f, 1.5f, 0.0f);     // Green
      glVertex3f(1.5f, -1.5f, -1.5f);

      // Back
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 1.5f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(1.5f, -1.5f, -1.5f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-1.5f, -1.5f, -1.5f);

      // Left
      glColor3f(1.0f,0.0f,0.0f);       // Red
      glVertex3f( 0.0f, 1.5f, 0.0f);
      glColor3f(0.0f,0.0f,1.0f);       // Blue
      glVertex3f(-1.5f,-1.5f,-1.5f);
      glColor3f(0.0f,1.0f,0.0f);       // Green
      glVertex3f(-1.5f,-1.5f, 1.5f);
   glEnd();   // Done drawing the pyramid

   glLoadIdentity ();
    glTranslatef    (0.0, -2.0, -15.0);
    glRotatef(60.0, 0 , 1 ,0);
    glRotatef(zRotated, 0 , 1 ,0);

   glBegin(GL_TRIANGLES);           // Begin drawing the pyramid with 4 triangles
      // Front
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f( 0.0f, 2.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(-2.0f, -2.0f, 2.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(2.0f, -2.0f, 2.0f);

      // Right
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 2.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.5f);     // Blue
      glVertex3f(2.0f, -2.0f, 2.0f);
      glColor3f(0.0f, 1.5f, 0.0f);     // Green
      glVertex3f(2.0f, -2.0f, -2.0f);

      // Back
      glColor3f(1.0f, 0.0f, 0.0f);     // Red
      glVertex3f(0.0f, 2.0f, 0.0f);
      glColor3f(0.0f, 1.0f, 0.0f);     // Green
      glVertex3f(2.0f, -2.0f, -2.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-2.0f, -2.0f, -2.0f);

      // Left
      glColor3f(1.0f,0.0f,0.0f);       // Red
      glVertex3f( 0.0f, 2.0f, 0.0f);
      glColor3f(0.0f,0.0f,1.0f);       // Blue
      glVertex3f(-2.0f,-2.0f,-2.0f);
      glColor3f(0.0f,1.0f,0.0f);       // Green
      glVertex3f(-2.0f,-2.0f, 2.0f);
   glEnd();
}
//snow
void snow (){

    glLoadIdentity ();
    glTranslatef    (0.0, -2.0, -15.0);


    glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
       glTranslatef(-3.0,4, 0.35);
        glutSolidSphere(0.09, 6,3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
        glTranslatef(-3.0,4, 0.35);
        glutWireSphere(0.2, 5, 10);
        glPopMatrix();
      glEnd();   // Done drawing the pyramid


    glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
       glTranslatef(-3.5,5, 0.35);
        glutSolidSphere(0.09, 6,3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
        glTranslatef(-3.5,5, 0.35);
        glutWireSphere(0.2, 5, 10);
        glPopMatrix();
      glEnd();   // Done drawing the pyramid



      glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
       glTranslatef(3.0,4, 0.35);
        glutSolidSphere(0.09, 6,3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
        glTranslatef(3.0,4, 0.35);
        glutWireSphere(0.2, 5, 10);
        glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
       glTranslatef(3.0,5, 0.35);
        glutSolidSphere(0.09, 6,3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
        glTranslatef(3.0,5, 0.35);
        glutWireSphere(0.2, 5, 10);
        glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
       glTranslatef(1.0,4, 0.35);
        glutSolidSphere(0.09, 6,3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
        glTranslatef(1.0,4, 0.35);
        glutWireSphere(0.2, 5, 10);
        glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
       glTranslatef(-1.0,6, 0.35);
        glutSolidSphere(0.09, 6,3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
        glTranslatef(-1.0,6, 0.35);
        glutWireSphere(0.2, 5, 10);
        glPopMatrix();
      glEnd();   // Done drawing the pyramid


}
// person's body
void person (){
    
 glLoadIdentity ();
    glTranslatef    (0.9, -3.7, -15.0);


   glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-5, 3, 0.3);
        glutSolidSphere(0.8, 20,20);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-5,2.5, 0.3);
       glutSolidCube(0.6);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

//body
       glPushMatrix();
        glColor3f(1.0, 0.0, 0.0);
       glTranslatef(-5,1.7, 0.3);
       glutSolidCube(1);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid


      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-5,1.1, 0.3);
       glutSolidCube(1);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

//right leg
       glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-4.7,0.5, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-4.7,0.3, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-4.7,0.1, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid


      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-4.7,0.0, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid


      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-4.7,-0.1, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid


      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-4.7,-0.4, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-4.7,-0.55, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid


// left leg

     glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-5.4,0.5, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-5.4,0.3, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-5.4,0.1, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid


      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-5.4,0.0, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid


      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-5.4,-0.1, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid


      glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
       glTranslatef(-5.4,-0.4, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-5.4,-0.55, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

//hand1

    glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-4.4,1.5, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-4.2,1.52, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-4.0,1.53, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

       glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.9,1.54, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid


      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.8,1.55, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.73,1.56, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

       glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.6,1.57, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();


      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.5,1.57, 0.35);
        glutSolidSphere(0.18, 20,20);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.4,1.57, 0.35);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.3,1.58, 0.35);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.2,1.59, 0.35);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();

//hand2
    glLoadIdentity ();
    glTranslatef    (0.9, -3, -13.0);
    glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-4.4,1.5, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-4.2,1.52, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-4.0,1.53, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

       glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.9,1.54, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid


      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.8,1.55, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.73,1.56, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

       glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.6,1.57, 0.3);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();


      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.5,1.57, 0.35);
        glutSolidSphere(0.18, 20,20);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.4,1.57, 0.35);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.3,1.58, 0.35);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();

      glPushMatrix();
        glColor3f(0.8, 0.7, 0.67);
       glTranslatef(-3.2,1.59, 0.35);
       glutSolidCube(0.3);
      glPopMatrix();
      glEnd();


      glPushMatrix();
        glColor3f(0.5, 0.5, 0.3);
       glTranslatef(-3.0,1.57, 0.35);
        glutSolidSphere(0.18, 20,20);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid




}
//star
void star (){


       glPushMatrix();
        glColor3f(2.9, 1.5, 0.9);
       glTranslatef(-0.9,3.76, 0.35);
        glutSolidSphere(0.1, 20,20);
      glPopMatrix();
      glEnd();   // Done drawing the pyramid

      glPushMatrix();
        glColor3f(2.9, 1.5, 0.9);
        glTranslatef(-0.9,3.76, 0.35);
        glutWireSphere(0.3, 5, 10);
        glPopMatrix();
      glEnd();   // Done drawing the pyramid



}

void moon (){


       glPushMatrix();
        glColor3f(1.0, 2.0, 2.9);
       glTranslatef(-4.9,6.76, 0.35);
        glutSolidSphere(0.7, 20,20);
      glPopMatrix();
      glEnd();


}
void keyboard(unsigned char key , int x , int y){
    if(key=='f'){
        glutFullScreen();
    }
    if(key == 'q'){
        exit(0);
    }
}


//------------------------------  display   -------------------------------

void display (void)
{

    glClear        (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();
    tree();
    snow();
    person();
    star();
    moon();













      glFlush();

   glutSwapBuffers();
   glutPostRedisplay();

}

//--------------------------------  idleFunc  ----------------------------------

void idleFunc (void)
{
    zRotated += 0.01;
    glutPostRedisplay();
}

void texture (void){

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);


}

//----------------------------------  main  ------------------------------------

void keyboard(unsigned char key , int x , int y);
int main (int argc, char **argv)
{
    glutInit               (&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); // buffer mode
    glutInitWindowSize     (700, 600);
    glutInitWindowPosition (600, 200);
    glutCreateWindow       ("20109771 , Carole Rafik");

    glClearColor (1.0, 1.0, 1.0, 0.0);

    glutDisplayFunc (display);
    glutReshapeFunc (reshapeFunc);
    glutKeyboardFunc(keyboard);
    glutIdleFunc    (idleFunc);
    glRotatef(0.5, 1, 0, 0);
    glClearColor(0,0,0.5,1);
    texture(); // Lighting and textures
    sndPlaySound("We Wish You a Merry Christmas with Lyrics  Christmas Carol  Song.wav" , SND_ASYNC);

    glutMainLoop();
}
