#include <GL/glut.h>
#include <stdio.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT); //over draws the background color with this color

    glBegin(GL_TRIANGLES); //begins the drawing
        //set the color for all the upcoming draw calls
        //red, green, blue
        glColor3f(0.1, 0.2, 0.3); //setting the color
        //creates the geometric point
        //x, y, z
        glVertex3f(0, -0.5, 0);
        glColor3f(1.0, 0.0, 0.0); //setting the color to red
        glVertex3f(0.8, -0.5, 0);
        glColor3f(0.0, 0.0, 1.0); //setting the color to blue
        glVertex3f(0, 0.8, 0);

    glEnd(); //ends the drawing

    glutSwapBuffers(); //swaps the background color to the set color - black

}

//takes the width and height of the window as the parameters
void reshape (int width, int height){
    //gets 4 parameters. Tells opengl which part of the window to draw. Starting from the lower left
    glViewport(0,0,width, height);

}

//starts opengl
void initOpenGl() {

    //color channels: red green blue alpha - ranges from 0 - 1.0 ; 1.0 being the strongest color
    glClearColor( 1.0, 0.5, 0.0, 0.0); // sets the background color - black



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

