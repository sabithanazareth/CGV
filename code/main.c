#include<GL/glut.h>
#include<stdio.h>
#include<math.h>

void init(void)
{
   glClearColor(0.0,0.0,0.0,1.0);
   //glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,200.0,0.0,150.0);

}
void drawCircle(float cx,float cy,float r,int num_segments)
{
    float theta=2.0*3.1415926/(float)num_segments;
    float s=sinf(theta);
    float c=cosf(theta);
    float t;
    float x=r,y=0;
    int i;
    glBegin(GL_TRIANGLE_FAN);
    for( i=0;i<num_segments;i++)
    {
        glVertex2f(x+cx,y+cy);
        t=x;
        x=c*x-s*y;
        y=s*t+c*y;
    }
    glEnd();
    //glFlush();
}
void drawBitmapText(char s[],float x,float y,float z,int font)
{
	int i;
	//glColor3f(1.0,1.0,1.0);
	glRasterPos3f(x,y,z);
	for(i=0;s[i];i++)
    {
        switch(font)
        {
            case 1:glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,s[i]);
            break;
            case 2:glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,s[i]);
            break;
            case 3:glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,s[i]);
            break;
            case 4:glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s[i]);
            break;
            case 5:glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,s[i]);
            break;
        }
    }
    glEnd();
    //glFlush();
}
int posx1=0;
int x1=0;
void moveCircle1(int n1)
{
	if(x1<=75)
	{
		glutPostRedisplay();
		glutTimerFunc(100,moveCircle1,0);
		x1++;
		posx1++;
	}
}
int posx2=0;
int x2=0;
void moveCircle2(int n2)
{
	if(x2<=75)
	{
		glutPostRedisplay();
		glutTimerFunc(100,moveCircle2,0);
		x2++;
		posx2++;
	}
}
void myReshape(int w,int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w<=h)
		glOrtho(-2.0,2.0,-2.0*(GLfloat)h/(GLfloat)w,2.0*(GLfloat)h/(GLfloat)w,-10.0,10.0);
	else
		glOrtho(-2.0*(GLfloat)w/(GLfloat)h,2.0*(GLfloat)w/(GLfloat)h,-2.0,2.0,-10.0,10.0);
		glMatrixMode(GL_MODELVIEW);
}
void gtable()
{

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(10,140);
	glVertex2i(55,140);
	glVertex2i(55,80);
	glVertex2i(10,80);
	glEnd();
	//glFlush();
	glColor3f(0.0,0.4,0.2);
    glBegin(GL_LINES);
    glVertex2i(40,80);
    glVertex2i(40,140);
    glEnd();

    glColor3f(0.0,0.4,0.2);
    glBegin(GL_LINES);
    glVertex2i(25,140);
    glVertex2i(25,80);
    glEnd();
    glColor3f(0.0,0.4,0.2);
    glBegin(GL_LINES);
    glVertex2i(10,90);
    glVertex2i(55,90);
    glEnd();
    glColor3f(0.0,0.4,0.2);
    glBegin(GL_LINES);
    glVertex2i(10,100);
    glVertex2i(55,100);
    glEnd();
    glColor3f(0.0,0.4,0.2);
    glBegin(GL_LINES);
    glVertex2i(25,140);
    glVertex2i(25,80);
    glEnd();
    glColor3f(0.0,0.4,0.2);
    glBegin(GL_LINES);
    glVertex2i(10,110);
    glVertex2i(55,110);
    glEnd();
    glColor3f(0.0,0.4,0.2);
    glBegin(GL_LINES);
    glVertex2i(10,120);
    glVertex2i(55,120);
    glEnd();

    glColor3f(0.6,0.7,0.8);
    glBegin(GL_POLYGON);
    glVertex2i(10,25);
    glVertex2i(150,25);
    glVertex2i(150,10);
    glVertex2i(10,10);
    glEnd();
    //glFlush();

    glColor3f(0.0,0.4,0.2);
    glBegin(GL_LINES);
    glVertex2i(50,10);
    glVertex2i(50,25);
    glEnd();
    //glFlush();
    glBegin(GL_LINES);
    glVertex2i(70,10);
    glVertex2i(70,25);
    glEnd();
    //glFlush();
    glBegin(GL_LINES);
    glVertex2i(130,10);
    glVertex2i(130,25);
    glEnd();
    //glFlush();
    glColor3f(0.4,0.5,0.6);
    glBegin(GL_POLYGON);
    glVertex2i(150,120);
    glVertex2i(175,120);
    glVertex2i(175,60);
    glVertex2i(150,60);
    glEnd();
    //glFlush();
    glColor3f(0.3,0.4,0.5);
    glBegin(GL_POLYGON);
    glVertex2i(150,120);
    glVertex2i(165,130);
    glVertex2i(190,130);
    glVertex2i(175,120);
    glEnd();
    //glFlush();
   // glColor3f(0.0,0.2,0.4);
    //glBegin(GL_POLYGON);
    //glVertex2i(150,102);
    //glVertex2i(175,102);
    //glVertex2i(175,100);
    //glVertex2i(150,100);
    //glEnd();
    //glFlush();

    glColor3f(0.3,0.2,0.3);
    glBegin(GL_POLYGON);
    glVertex2i(150,60);
    glVertex2i(150,70);
    glVertex2i(175,70);
    glVertex2i(175,60);
    glEnd();
    //glFlush();

    glColor3f(0.1,0.2,0.3);
    glBegin(GL_POLYGON);
    glVertex2i(175,120);
    glVertex2i(190,130);
    glVertex2i(190,68);
    glVertex2i(175,60);
    glEnd();
    //glFlush();

    glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glTranslatef(posx1,10,0);
    drawCircle(85,100,6,500);
    glColor3f(1.0,0.0,0.0);
    drawBitmapText("P4",83,98,0,4);
    glPopMatrix();
    
    drawCircle(115,100,6,500);
    drawCircle(130,100,6,500);
    
    glColor3f(1.0,1.0,1.0);
     glPushMatrix();
    glTranslatef(posx2,10,0);
  drawCircle(100,100,6,500);
    glColor3f(1.0,0.0,0.0);
    drawBitmapText("P3",98,98,0,4);
    glPopMatrix();
    
    drawBitmapText("P2",113,98,0,4);
    drawBitmapText("P1",128,98,0,4);
    glColor3f(1.0,1.0,1.0);
    drawBitmapText("Gantt Chart:",10,27,0,4);
    drawBitmapText("CPU",157,95,0,4);
    glColor3f(0.0,0.0,0.0);
    drawBitmapText("Process",12,128,0,1);
    drawBitmapText("Burst",29,130,0,1);
    drawBitmapText("time",30,127,0,1);
    drawBitmapText("Arrival",44,130,0,1);
    drawBitmapText("time",45,127,0,1);
    drawBitmapText("P1",15,113,0,4);
    drawBitmapText("P2",15,103,0,4);
    drawBitmapText("P3",15,93,0,4);
    drawBitmapText("P4",15,83,0,4);
    drawBitmapText("10",30,113,0,4);
    drawBitmapText("1",31,103,0,4);
    drawBitmapText("2",31,93,0,4);
    drawBitmapText("4",31,83,0,4);
    drawBitmapText("0",46,113,0,4);
    drawBitmapText("0",46,103,0,4);
    drawBitmapText("1",46,93,0,4);
    drawBitmapText("2",46,83,0,4);

}
int main(int argc,char** argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    //glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(0,0);
    glutInitWindowSize(5000,4000);
    glutCreateWindow("First come First Served");
    glutTimerFunc(100,moveCircle1,0);
     glutTimerFunc(100,moveCircle2,0);
    //glutReshapeFunc(myReshape);
    init();
    glFlush();
    glutDisplayFunc(gtable);

    //glEnable(GL_DEPTH_TEST);
    // glutDisplayFunc(print);
    glutMainLoop();
    return 0;
}
