#include <windows.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#define PI 3.1416
using namespace std;

void human(){
    glBegin(GL_POLYGON);
    glColor3ub(255, 210, 150);
    for(int i=0; i<100; i++){
        glVertex2f(0.025f * cos(2.0f * PI * i/100), 0.07f * sin(2.0f * PI * i/100));
    }
    glEnd();

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    for (GLfloat i = 0.0; i <= 2.0f * PI/2; i += 0.005){
        glVertex2f(0.032f * cos(i), 0.025f + 0.07f * sin(i));
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.021f, -0.02f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 210, 150);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.01f, -0.01f);
    glVertex2f(0.0f, 0.05f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.008f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255, 210, 150);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.015f, 0.0f);
    glVertex2f(0.015f, -0.1f);
    glVertex2f(0.0f, -0.1f);
    glEnd();
    glPopMatrix();

    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    for(int i=0; i<100; i++){
        glVertex2f(0.015 + 0.007f * cos(2.0f * PI * i/100), 0.01f * sin(2.0f * PI * i/100));
    }
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.007f, 0.0f);
    glVertex2f(0.01f, 0.0f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.023f, 0.0f);
    glVertex2f(0.027f, 0.003f);
    glEnd();

    glPushMatrix(); // hand
    glTranslatef(0.02f, -0.15f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255, 210, 150);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.022f, -0.1f);
    glVertex2f(0.02f, -0.12f);
    glVertex2f(0.0f, -0.04f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, -0.2f, 0.0f);
    glBegin(GL_POLYGON);
    //glColor3ub(186, 85, 85);
    glColor3ub(0, 61, 71);
    for(int i=0; i<100; i++){
        glVertex2f(0.03f * cos(2.0f * PI * i/100), 0.12f * sin(2.0f * PI * i/100));
    }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, -0.3f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(200, 200, 200);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.013f, 0.0f);
    glVertex2f(0.025f, -0.1f);
    glVertex2f(0.012f, -0.1f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.01f, -0.3f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(200, 200, 200);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.013f, 0.0f);
    glVertex2f(0.013f, -0.15f);
    glVertex2f(0.0f, -0.15f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.01f, -0.42f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(100, 100, 100);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.04f, -0.03f);
    glVertex2f(0.0f, -0.03f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.009f, -0.38f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(100, 100, 100);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.04f, -0.03f);
    glVertex2f(0.005f, -0.03f);
    glEnd();
    glPopMatrix();

    glPushMatrix(); //hand with ball
    glTranslatef(0.007f, -0.12f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255, 210, 150);
    glVertex2f(0.01f, -0.05f);
    glVertex2f(0.035f, -0.075f);
    glVertex2f(0.035f, -0.06f);
    glVertex2f(0.01f, -0.02f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.001f, -0.12f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255, 210, 150);
    glVertex2f(0.04f, -0.06f);
    glVertex2f(0.065f, -0.02f);
    glVertex2f(0.065f, -0.04f);
    glVertex2f(0.04f, -0.077f);
    glEnd();
    glPopMatrix();
}

GLfloat ball_x = -0.713f;
GLfloat ball_y = -0.05f;
int t = 0, p = 0;
void ball() {
    glBegin(GL_POLYGON);
    glColor3ub(236, 250, 108);
    for(int i=0; i<100; i++){
        glVertex2f(0.02f * cos(2.0f * PI * i/100), 0.035f * sin(2.0f * PI * i/100));
    }
    glEnd();

    if(t==1 && p==0 && ball_x < 0.32f){
        ball_x += 0.0006f;
        if(ball_x < -0.15f)
            ball_y += 0.0004f;
        else
            ball_y -= 0.00065f;
    }
    glutPostRedisplay();
}

GLfloat dx = 0.28f;
GLfloat dy = 0.3f;
int r = 0;
void dog(){
    glBegin(GL_POLYGON);//dog_body
    glColor3ub(96, 96, 96);
    glVertex2f(-0.8f, -0.63f);
    glVertex2f(-0.8f, -0.68f);
    glVertex2f(-0.81f, -0.72f);//back_leg_1
    glVertex2f(-0.79f, -0.73f);
    glVertex2f(-0.785f, -0.71f);//back_leg_2
    glVertex2f(-0.77f, -0.7f);
    glVertex2f(-0.72f, -0.7f);
    glVertex2f(-0.71f, -0.705f);//front_leg_1
    glVertex2f(-0.69f, -0.7f);
    glVertex2f(-0.68f, -0.69f);//front_leg_2
    glVertex2f(-0.67f, -0.685f);
    glVertex2f(-0.665f, -0.66f);
    glVertex2f(-0.675f, -0.63f);//neck
    glVertex2f(-0.7f, -0.6f);
    glVertex2f(-0.8f, -0.6f);
    glVertex2f(-0.86f, -0.56f);
    glEnd();

    glBegin(GL_POLYGON); //back_leg_1
    glColor3ub(100, 100, 100);
    glVertex2f(-0.81f, -0.72f);
    glVertex2f(-0.79f, -0.8f);
    glVertex2f(-0.76f, -0.805f);
    glVertex2f(-0.775f, -0.795f);
    glVertex2f(-0.79f, -0.73f);
    glEnd();

    glBegin(GL_POLYGON); //back_leg_2
    glColor3ub(100, 100, 100);
    glVertex2f(-0.785f, -0.71f);
    glVertex2f(-0.765f, -0.77f);
    glVertex2f(-0.735f, -0.775f);
    glVertex2f(-0.75f, -0.765f);
    glVertex2f(-0.77f, -0.7f);
    glEnd();

    glBegin(GL_POLYGON); //front_leg_1
    glColor3ub(100, 100, 100);
    glVertex2f(-0.71f, -0.705f);
    glVertex2f(-0.685f, -0.8f);
    glVertex2f(-0.66f, -0.805f);
    glVertex2f(-0.67f, -0.795f);
    glVertex2f(-0.695f, -0.7f);
    glEnd();

    glBegin(GL_POLYGON); //front_leg_2
    glColor3ub(100, 100, 100);
    glVertex2f(-0.685f, -0.69f);
    glVertex2f(-0.665f, -0.77f);
    glVertex2f(-0.64f, -0.775f);
    glVertex2f(-0.65f, -0.765f);
    glVertex2f(-0.67f, -0.685f);
    glEnd();

    glBegin(GL_POLYGON); //neck
    glColor3ub(100, 100, 100);
    glVertex2f(-0.675f, -0.63f);
    glVertex2f(-0.645f, -0.57f);
    glVertex2f(-0.655f, -0.553f);
    glVertex2f(-0.665f, -0.545f);
    glVertex2f(-0.7f, -0.6f);
    glEnd();

    glBegin(GL_QUADS); //head
    glColor3ub(100, 100, 100);
    glVertex2f(-0.66f, -0.6f);
    glVertex2f(-0.64f, -0.62f);
    glVertex2f(-0.635f, -0.61f);
    glVertex2f(-0.645f, -0.57f);
    glEnd();

    if(p==1) { //ball
        glBegin(GL_POLYGON);
        glColor3ub(236, 250, 108);
        for(int i=0; i<100; i++){
            glVertex2f(-0.638f + 0.013f * cos(2.0f * PI * i/100), -0.634f + 0.023f * sin(2.0f * PI * i/100));
        }
        glEnd();
    }

    glBegin(GL_TRIANGLES);
    glColor3ub(100, 100, 100);
    glVertex2f(-0.665f, -0.545f);
    glVertex2f(-0.67f, -0.52f);
    glVertex2f(-0.673f, -0.57f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(100, 100, 100);
    glVertex2f(-0.67f, -0.57f);
    glVertex2f(-0.685f, -0.53f);
    glVertex2f(-0.685f, -0.59f);
    glEnd();
}

GLfloat cloud_position = -1.3f;
void cloud() {
    int i;
    GLfloat radius = 0.05f;
    GLfloat theta = 2.0f * PI / 100;

    glBegin(GL_POLYGON);
    glColor3ub(212, 212, 212);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            0.5f + (radius * cos(i * theta)),
            0.86f + (radius * sin(i * theta))
        );
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212, 212, 212);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            0.55f + (radius * cos(i * theta)),
            0.83f + (radius * sin(i * theta))
        );
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212, 212, 212);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            0.45f + (radius * cos(i * theta)),
            0.83f + (radius * sin(i * theta))
        );
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212, 212, 212);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            0.52f + (radius * cos(i * theta)),
            0.8f + (radius * sin(i * theta))
        );
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(212, 212, 212);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            0.6f + (radius * cos(i * theta)),
            0.82 + (radius * sin(i * theta))
        );
    }
    glEnd();

    if(cloud_position > 1.2)
        cloud_position = -1.7f;
    cloud_position += 0.00003f;
    glutPostRedisplay();
}

void sky() {
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(-1.0f, 0.45f);
    glVertex2f(1.0f, 0.45f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
}

void backgroundtree() {
    glBegin(GL_POLYGON);
    glColor3ub(100, 80, 0);
    glVertex2f(-0.52f,0.45f);
    glVertex2f(-0.48f, 0.45f);
    glVertex2f(-0.48f,0.62f);
    glVertex2f(-0.5f,0.64f);
    glVertex2f(-0.52f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 100);
    glVertex2f(-0.5f,0.64f);
    glVertex2f(-0.52f,0.62f);
    glVertex2f(-0.58f,0.6f);
    glVertex2f(-0.55f, 0.63f);
    glVertex2f(-0.58f,0.66f);
    glVertex2f(-0.52f,0.66f);
    glVertex2f(-0.52f, 0.72f);
    glVertex2f(-0.5f,0.69f);
    glVertex2f(-0.48f,0.72f);
    glVertex2f(-0.48f, 0.66f);
    glVertex2f(-0.42f,0.66f);
    glVertex2f(-0.45f,0.63f);
    glVertex2f(-0.42f, 0.6f);
    glVertex2f(-0.48f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(100, 80, 0);
    glVertex2f(0.52f,0.45f);
    glVertex2f(0.48f, 0.45f);
    glVertex2f(0.48f,0.62f);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 100);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glVertex2f(0.58f,0.6f);
    glVertex2f(0.55f, 0.63f);
    glVertex2f(0.58f,0.66f);
    glVertex2f(0.52f,0.66f);
    glVertex2f(0.52f, 0.72f);
    glVertex2f(0.5f,0.69f);
    glVertex2f(0.48f,0.72f);
    glVertex2f(0.48f, 0.66f);
    glVertex2f(0.42f,0.66f);
    glVertex2f(0.45f,0.63f);
    glVertex2f(0.42f, 0.6f);
    glVertex2f(0.48f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 100);
    glVertex2f(-1.0f,0.45f);
    glVertex2f(-0.98f, 0.5f);
    glVertex2f(-0.93f, 0.56);
    glVertex2f(-0.9f,0.6f);
    glVertex2f(-0.82f, 0.64);
    glVertex2f(-0.75f, 0.67);
    glColor3ub(0, 157, 102);
    glVertex2f(-0.68f, 0.64);
    glVertex2f(-0.6f,0.6f);
    glVertex2f(-0.57f, 0.56);
    glVertex2f(-0.52f, 0.5f);
    glVertex2f(-0.5f,0.45f);
    glVertex2f(-1.0f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 100);
    glVertex2f(1.0f,0.45f);
    glVertex2f(0.98f, 0.5f);
    glVertex2f(0.93f, 0.56);
    glVertex2f(0.9f,0.6f);
    glVertex2f(0.82f, 0.64);
    glVertex2f(0.75f, 0.67);
    glVertex2f(0.68f, 0.64);
    glVertex2f(0.6f,0.6f);
    glVertex2f(0.57f, 0.56);
    glVertex2f(0.52f, 0.5f);
    glVertex2f(0.5f,0.45f);
    glVertex2f(1.0f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 100);
    glVertex2f(-0.5f,0.45f);
    glVertex2f(-0.48f, 0.5f);
    glVertex2f(-0.45f, 0.56);
    glVertex2f(-0.42f,0.6f);
    glVertex2f(-0.37f, 0.62);
    glVertex2f(-0.32f, 0.6);
    glVertex2f(-0.29f, 0.56f);
    glVertex2f(-0.27f, 0.5f);
    glVertex2f(-0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 100);
    glVertex2f(0.5f,0.45f);
    glVertex2f(0.48f, 0.5f);
    glVertex2f(0.45f, 0.56);
    glVertex2f(0.42f,0.6f);
    glVertex2f(0.37f, 0.62);
    glVertex2f(0.32f, 0.6);
    glVertex2f(0.29f, 0.56f);
    glVertex2f(0.27f, 0.5f);
    glVertex2f(0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 150, 100);
    glVertex2f(-.25f,0.45f);
    glVertex2f(-0.23f, 0.5f);
    glVertex2f(-0.18f, 0.56);
    glVertex2f(-0.15f,0.6f);
    glVertex2f(-0.07f, 0.64);
    glVertex2f(-0.00f, 0.67);
    glVertex2f(0.07f, 0.64);
    glVertex2f(0.15f,0.6f);
    glVertex2f(0.18f, 0.56);
    glVertex2f(0.23f, 0.5f);
    glVertex2f(.25f,0.45f);
    glEnd();
}

GLfloat bird_position = -0.7f;
void bird() {
    /////1st bird/////
    glBegin(GL_POLYGON);
    glColor3ub(100, 100, 100);
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(120, 120, 120);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(150, 150, 150);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(100, 100, 100);
    for(int i = 0; i <= 100; i++) {
        glVertex2f(
            -0.638f + (0.01f * cos(i * 2 * PI / 100)),
            0.801f + (0.01f * sin(i * 2 * PI / 100))
        );
    }
    glEnd();

    ////2nd bird////
    glBegin(GL_POLYGON);
    glColor3ub(100, 100, 100);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(120, 120, 120);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(150, 150, 150);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(100, 100, 100);
    for(int i = 0; i <= 100; i++) {
        glVertex2f(
            -0.518f + (0.01f * cos(i * 2 * PI / 100)),
            0.801f + (0.01f * sin(i * 2 * PI / 100))
        );
    }
    glEnd();

    if(bird_position > 1.7)
        bird_position = -0.7f;
    bird_position += 0.0002f;
    glutPostRedisplay();
}

GLfloat sun_position = 0.15f;
void sun() {
    int i;
    GLfloat radius =.06f;

    glBegin(GL_POLYGON);
    glColor3ub(255, 204, 0);
    for(int i = 0; i <= 100; i++) {
        glVertex2f(
            0.25f + (radius * cos(i * 2.0f * PI / 100)),
            0.9f + (radius * sin(i * 2.0f * PI / 100))
        );
    }
    glEnd();

    if(sun_position < -0.6f)
        sun_position = 0.15f;
    sun_position += -0.000003f;
    glutPostRedisplay();
}

void ground() {
    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(-1.0f,0.1f);
    glVertex2f(0.62f, 0.1f);
    glVertex2f(0.55f, 0.0);
    glVertex2f(0.6f, -0.05);
    glVertex2f(0.5f, -0.1);
    glVertex2f(0.63f, -0.13);
    glVertex2f(0.47f, -0.23);
    glVertex2f(0.62f, -0.25);
    glVertex2f(0.62f, -0.3);
    glVertex2f(0.58f, -0.4);
    glVertex2f(0.5f, -0.52);
    glVertex2f(0.6f, -0.6);
    glVertex2f(0.6f, -0.7);
    glVertex2f(0.53f, -0.75);
    glVertex2f(0.58f, -0.8);
    glVertex2f(0.54f, -0.85);
    glVertex2f(0.6f, -0.9);
    glVertex2f(0.52f, -0.95);
    glVertex2f(0.58f, -1.0);
    glEnd();
}

void ground_edges(){
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.62f, 0.1f);
    glVertex2f(0.55f, 0.0);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.6f, -0.05);
    glVertex2f(0.513f, -0.103);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.627f, -0.13);
    glVertex2f(0.467f, -0.23);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.622f, -0.247);
    glVertex2f(0.62f, -0.3);
    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.62f, -0.3);
    glVertex2f(0.58f, -0.4);
    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.582f, -0.395);
    glVertex2f(0.5f, -0.52);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.6f, -0.598);
    glVertex2f(0.6f, -0.705);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.602f, -0.7);
    glVertex2f(0.53f, -0.75);
    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.579f, -0.8);
    glVertex2f(0.542f, -0.85);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.6f, -0.9f);
    glVertex2f(0.521f, -0.95f);
    glEnd();
}

void river() {
    glBegin(GL_QUADS);
    glColor3ub(0,122,204);
    glVertex2f(-1.0f,0.45f);
    glVertex2f(1.0f,0.45f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);
    glEnd();
}

void tree() {
    glBegin(GL_POLYGON);
    glColor3ub(130, 50, 50);
    glVertex2f(-0.72f,0.0f);
    glVertex2f(-0.65f,-0.03f);
    glVertex2f(-0.735f,-0.02f);
    glVertex2f(-0.74f,-0.08f);
    glVertex2f(-0.775f,-0.02f);
    glVertex2f(-0.85f,-0.02f);
    glVertex2f(-0.78f,0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(130, 50, 50);
    glVertex2f(-0.78f, 0.0f);
    glVertex2f(-0.78f,0.38f);
    glVertex2f(-0.72f,0.38f);
    glVertex2f(-0.72f,0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(130, 50, 50);
    glVertex2f(-0.76f,0.38f);
    glVertex2f(-0.76f,0.45f);
    glVertex2f(-0.74f,0.45f);
    glVertex2f(-0.74f,0.38f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(130, 50, 50);
    glVertex2f(-0.74f,0.38f);
    glVertex2f(-0.71f,0.44f);
    glVertex2f(-0.7f,0.43f);
    glVertex2f(-0.72f,0.38f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(130, 50, 50);
    glVertex2f(-0.78f,0.38f);
    glVertex2f(-0.8f,0.43f);
    glVertex2f(-0.79f,0.44f);
    glVertex2f(-0.76f,0.38f);
    glEnd();

    int i;

    GLfloat x=-0.75f;
    GLfloat y=0.48f;
    GLfloat radius =.06f;
    GLfloat theta = 2.0f * PI / 100;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            x + (radius * cos(i * theta)),
            y + (radius * sin(i * theta))
        );
    }
    glEnd();

    x=-0.68f;
    y=0.46f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            x + (radius * cos(i * theta)),
            y + (radius * sin(i * theta))
        );
    }
    glEnd();

    x=-0.81f;
    y=0.46f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            x + (radius * cos(i * theta)),
            y + (radius * sin(i * theta))
        );
    }
    glEnd();

    GLfloat e=-0.87f;
    GLfloat f=0.5f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            e + (radius * cos(i * theta)),
            f+ (radius * sin(i * theta))
        );
    }
    glEnd();

    GLfloat g=-0.61f;
    GLfloat h=0.5f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            g + (radius * cos(i * theta)),
            h + (radius * sin(i * theta))
        );
    }
    glEnd();
    GLfloat a1=-0.61f;
    GLfloat b1=0.55f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            a1 + (radius * cos(i * theta)),
            b1 + (radius * sin(i * theta))
        );
    }
    glEnd();

    GLfloat c1=-0.88f;
    GLfloat d1=0.55f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            c1 + (radius * cos(i * theta)),
            d1 + (radius * sin(i * theta))
        );
    }
    glEnd();

    GLfloat e1=-0.87f;
    GLfloat f1=0.59f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            e1 + (radius * cos(i * theta)),
            f1 + (radius * sin(i * theta))
        );
    }
    glEnd();

    GLfloat g1=-0.61f;
    GLfloat h1=0.55f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            g1 + (radius * cos(i * theta)),
            h1 + (radius * sin(i * theta))
        );
    }
    glEnd();
    GLfloat e11=-0.64f;
    GLfloat f11=0.59f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            e11 + (radius * cos(i * theta)),
            f11 + (radius * sin(i * theta))
        );
    }
    glEnd();

    GLfloat e12=-0.75f;
    GLfloat f12=0.59f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            e12 + (radius * cos(i * theta)),
            f12+ (radius * sin(i * theta))
        );
    }
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 200, 100);
    glVertex2f(-0.85f,0.48f);
    glVertex2f(-0.85f,0.59f);
    glVertex2f(-0.65f,0.59f);
    glVertex2f(-0.65f,0.48f);
    glEnd();

    GLfloat e123=-0.8f;
    GLfloat f123=0.65f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            e123 + (radius * cos(i * theta)),
            f123 + (radius * sin(i * theta))
        );
    }
    glEnd();
    GLfloat e1232=-0.7f;
    GLfloat f1232=0.65f;

    glBegin(GL_POLYGON);
    glColor3ub(0, 200, 100);
    for(i = 0; i <= 100; i++) {
        glVertex2f(
            e1232 + (radius * cos(i * theta)),
            f1232 + (radius * sin(i * theta))
        );
    }
    glEnd();
}

GLfloat boat_position = 1.3f;
void boat1() {
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 51);
    glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.15f, 0.35f);
    glVertex2f(0.15f, 0.35f);
    glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 178, 102);
    glVertex2f(-0.13f, 0.4f);
    glColor3ub(255, 180, 105);
    glVertex2f(-0.11f,0.48f);
    glColor3ub(255, 175, 110);
    glVertex2f(-0.088f, 0.52f);
    glColor3ub(255, 180, 106);
    glVertex2f(0.13f, 0.52f);
    glColor3ub(255, 170, 100);
    glVertex2f(0.14f, 0.49f);
    glColor3ub(255, 184, 108);
    glVertex2f(0.15f, 0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 25, 125);
    glVertex2f(-0.038f, 0.57f);
    glVertex2f(-0.038f, 0.73f);
    glVertex2f(-0.035f, 0.75f);
    glVertex2f(0.064f, 0.73f);
    glVertex2f(0.065f, 0.71f);
    glVertex2f(0.065f, 0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(100, 100, 0);
    glVertex2f(0.0f, 0.52f);
    glVertex2f(0.0f, 0.79f);
    glVertex2f(0.01f, 0.79f);
    glVertex2f(0.01f, 0.52f);
    glEnd();

    if(boat_position < -1.7f)
        boat_position = 1.7f;
    boat_position += -0.00009f;
    glutPostRedisplay();
}

void boat2() {
    glBegin(GL_POLYGON);
    glColor3ub(150, 50, 50);
    glVertex2f(0.68f, -0.48f);
    glVertex2f(0.58f, -0.48f);
    glVertex2f(0.48f, -0.45f);
    glVertex2f(0.58f, -0.55f);
    glVertex2f(0.83f, -0.55f);
    glVertex2f(0.93f, -0.45f);
    glVertex2f(0.83f, -0.48f);
    glVertex2f(0.78f, -0.48f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(122, 122, 82);
    glVertex2f(0.48f, -0.45f);
    glVertex2f(0.58f, -0.48f);
    glVertex2f(0.68f, -0.48f);
    glVertex2f(0.78f, -0.48f);
    glVertex2f(0.83f, -0.48f);
    glVertex2f(0.93f, -0.45f);////
    glVertex2f(0.83f, -0.43f);
    glVertex2f(0.78f, -0.43f);
    glVertex2f(0.68f, -0.43f);
    glVertex2f(0.58f, -0.43f);
    glVertex2f(0.48f, -0.45f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(150, 50, 50);
    glVertex2f(0.93f, -0.45f);////
    glVertex2f(0.83f, -0.43f);
    glVertex2f(0.83f, -0.43f);
    glVertex2f(0.78f, -0.43f);
    glVertex2f(0.78f, -0.43f);
    glVertex2f(0.68f, -0.43f);
    glVertex2f(0.68f, -0.43f);
    glVertex2f(0.58f, -0.43f);
    glVertex2f(0.58f, -0.43f);
    glVertex2f(0.48f, -0.45f);
    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3ub(150, 50, 50);
    glVertex2f(0.58f, -0.43f);
    glVertex2f(0.58f, -0.485f);
    glVertex2f(0.68f, -0.43f);
    glVertex2f(0.68f, -0.485f);
    glVertex2f(0.78f, -0.43f);
    glVertex2f(0.78f, -0.485f);
    glVertex2f(0.86f, -0.43f);
    glVertex2f(0.86f, -0.485f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(204, 153, 100);
    glVertex2f(0.43f, -0.33f);
    glVertex2f(0.45f, -0.48f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
    glVertex2f(0.43f, -0.37f);
    glVertex2f(0.48f, -0.45f);
    glEnd();
}

GLfloat sy = 0.0f;
GLfloat s = 0;
void swing(){
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(255, 148, 25);
    glVertex2f(-0.01f, -0.37f);
    glVertex2f(0.26f, -0.37f);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(0, 51, 102);
    glVertex2f(0.0f, -0.37f);
    glVertex2f(0.0f, -0.63f);
    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3ub(0, 51, 102);
    glVertex2f(0.25f, -0.37f);
    glVertex2f(0.25f, -0.63f);
    glEnd();

    glPushMatrix();
    glTranslatef(0.0f, sy, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(150, 50, 50);
    glVertex2f(0.05f, -0.59f);
    glVertex2f(0.2f, -0.59f);
    glVertex2f(0.2f, -0.55f);
    glVertex2f(0.05f, -0.55f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(150, 150, 150);
    glVertex2f(0.05f, -0.55f);
    glVertex2f(0.2f, -0.55f);
    glVertex2f(0.2f, -0.5f);
    glVertex2f(0.05f, -0.5f);
    glEnd();
    glPopMatrix();

    if(sy>-0.08f && s==0){
        sy -= 0.00008f;
        if(sy<-0.07f) s=1;
    }
    if(sy<0.08f && s==1){
        sy += 0.00008;
        if(sy>0.07f) s=0;
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    glPushMatrix();
    glTranslatef(0.0f, sun_position, 0.0f);
    sun();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(cloud_position, 0.0f, 0.0f);
    cloud();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(bird_position, 0.0f, 0.0f);
    bird();
    glPopMatrix();
    backgroundtree();
    river();
    glPushMatrix();
    glTranslatef(boat_position, 0.0f, 0.0f);
    boat1();
    glPopMatrix();
    ground();
    ground_edges();
    glPushMatrix();
    glTranslatef(-0.2f, 0.6f, 0.0f);
    swing();
    glPopMatrix();
    glPushMatrix();
    glScalef(0.8f, 0.8f, 0.0f);
    glTranslatef(0.4f, 0.05f, 0.0f);
    tree();
    glPopMatrix();
    boat2();
    glPushMatrix();
    glScalef(1.4f, 1.4f, 0.0f);
    glTranslatef(-0.57f, 0.1f, 0.0f);
    human();
    glPopMatrix();
    if(p==0){
        glPushMatrix();
        glTranslatef(ball_x, ball_y, 0.0f);
        ball();
        glPopMatrix();
    }
    glPushMatrix();
    glScalef(1.7f, 1.7f, 0.0f);
    if(r==1) glRotated(180, 0, 1, 0);
    glTranslatef(dx, dy, 0.0f);
    dog();
    glPopMatrix();
    glFlush();
}

void init(void) {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    gluOrtho2D(-1, 1, -1, 1);
}

void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
    case 'T':
    case 't':
        PlaySound(TEXT("Small-dog-barking-noise.wav"), NULL, SND_ASYNC|SND_FILENAME);
        t = 1;
        glutPostRedisplay();
        break;
    case 'R':
    case 'r':
        if(r==0)
            r = 1;
        else
            r = 0;
        glutPostRedisplay();
        break;
    case 'P':
    case 'p':
        if((dx>=0.79 && dx<=0.83f) && (dy>=0.47f && dy<=0.55f)) p = 1;
        glutPostRedisplay();
        PlaySound(TEXT("smartsound_ATMO_NATURE_Country_Birds_Call.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
        break;
    case 'H':
    case 'h':
        if((dx>=1.01f && dx<=1.07f) && (dy<=0.65f && dy>=0.55f)){
            p = 0;
            t = 0;
            ball_x = -0.713f;
            ball_y = -0.05f;
        }
        glutPostRedisplay();
        break;
    default:
        break;
    }
}

void spe_key(int key, int x, int y) {
    switch (key) {
    case GLUT_KEY_LEFT:
        if(r == 0 & dx > 0.2f)
            dx -= 0.02f;
        else if(r==1 && dx < 1.25f)
            dx += 0.02f;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        if(r == 0 && dx < 0.9f)
            dx += 0.02f;
        else if(r == 1 && dx > 0.5f)
            dx -= 0.02f;
        glutPostRedisplay();
        break;
    case GLUT_KEY_UP:
        if(dy < 0.8f)
            dy += 0.02f;
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN:
        if(dy > 0.2f)
            dy -= 0.02f;
        glutPostRedisplay();
        break;
    default:
        break;
    }
    //cout<<"dx="<<dx<<endl;
    //cout<<"dy="<<dy<<endl;
}

int main() {
    PlaySound(TEXT("smartsound_ATMO_NATURE_Country_Birds_Call.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    glutInitWindowSize(1560, 940);
    glutInitWindowPosition(150,50);
    glutCreateWindow("Get The Ball");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(spe_key);
    glutMainLoop();
    return 0;
}
