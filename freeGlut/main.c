#include <GL/glut.h>
#include <stdio.h>

float counter = 0.0;

void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //over draws the background color with this color

    glLoadIdentity();
    glTranslatef(counter/300, 0.0, 0.0); //translates the 1st triangle
    glRotatef(counter, 0.0, 1.0, 0.0);
    counter +=0.03; //increases the rotation angle by 0.1

    if (counter >200) {
        counter = -200.0;
    }

    glBegin(GL_TRIANGLES); //begins the drawing
        //set the color for all the upcoming draw calls
        //red, green, blue
        glColor3f(0.0, 1.0, 0.0); //setting the color to green
        //creates the geometric point
        //x, y, z
        glVertex3f(-0.5, -0.5, 5.0);

        glColor3f(1.0, 0.0, 0.0); //setting the color to red
        glVertex3f(0.5, -0.5, 5.0);

        glColor3f(0.0, 0.0, 1.0); //setting the color to blue
        glVertex3f(0.0, 0.5, 5.0);

    glEnd(); //ends the drawing

    //2nd tringle
    glLoadIdentity();
    glTranslatef(0.0, -0.5, 0.0); //moves the 2nd triangle to the left side
    glRotatef(5, 0.0, 1.0, 0.0);

    glBegin(GL_TRIANGLES); //begins the drawing
        //set the color for all the upcoming draw calls
        //red, green, blue
        glColor3f(1.0, 0.0, 5.0); //setting the color to green
        //creates the geometric point
        //x, y, z
        glVertex3f(-0.9, -0.1, 0.0);

        glColor3f(0.0, 0.0, 1.0); //setting the color to red
        glVertex3f(0.1, -0.1, 5.0);

        glColor3f(0.0, 1.0, 0.0); //setting the color to blue
        glVertex3f(-0.5, 0.9, 5.0);

    glEnd(); //ends the drawing

    glutSwapBuffers(); //swaps the background color to the set color - black

}

//takes the width and height of the window as the parameters
void reshape (int width, int height){
    //gets 4 parameters. Tells opengl which part of the window to draw. Starting from the lower left
    glViewport(0,0,width, height);
    glMatrixMode(GL_PROJECTION); //change the matrix for different perspective projections of the scene
    glLoadIdentity(); //sets the camera to identity
    //opengl units
    //creates the matrix that describes the shape in the scene
    gluPerspective(60, (float) width/ (float)height, 1.0, 10.0); //the camera view into the world
    glMatrixMode(GL_MODELVIEW); //

}

//starts opengl
void initOpenGl() {

    //color channels: red green blue alpha - ranges from 0 - 1.0 ; 1.0 being the strongest color
    glClearColor( 1.0, 0.5, 0.0, 0.0); // sets the background color - black

    glEnable(GL_DEPTH_TEST);  //how to compare two objects and what object to be shown
    glDepthFunc(GL_LEQUAL) ; //gl less or equal




}

int main (int argc, char **argv){

    //start up freeglut
    glutInit(& argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH); //SETS THE PROPER MODES FOR WINDOWS
    glutInitWindowSize(500, 500); //values on how big the windows should be
    glutInitWindowPosition(100, 100); //the position of the window
    glutCreateWindow("Brachistrone");

    initOpenGl();

    //loop
    glutDisplayFunc(display); //function that the loop will call over and over
    glutIdleFunc(display);
    glutReshapeFunc(reshape); //called as soon as the window is created

    glutMainLoop(); //calls the functions over and over again

    return 0;






}

