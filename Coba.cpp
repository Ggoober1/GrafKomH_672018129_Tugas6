#include <iostream>
#include <GL/freeglut.h>


void init(void);
void display(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouse(int, int, int, int);
void kursi(void);
void meja(void);
void lemari(void);
void kasur(void);
void lincak(void);
int is_depth;

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Lemuel Christian Rahardjo-672018129");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(6.0f);
}



void kursi(void) 
{
	//kursi bagian depan
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.4, 0.2);
	glVertex3f(-9.0, -10.0, 8.0);
	glVertex3f(-8.5, -10.0, 8.0);
	glVertex3f(-8.5, -8.0, 8.0);
	glVertex3f(-9.0, -8.0, 8.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-8.5, -8.5, 8.0);
	glVertex3f(-5.5, -8.5, 8.0);
	glVertex3f(-5.5, -8.0, 8.0);
	glVertex3f(-8.5, -8.0, 8.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-6.0, -10.0, 8.0);
	glVertex3f(-5.5, -10.0, 8.0);
	glVertex3f(-5.5, -8.0, 8.0);
	glVertex3f(-6.0, -8.0, 8.0);
	glEnd();

	//kursi bagian kiri
	glBegin(GL_QUADS);
	glVertex3f(-9.0, -10.0, 8.0);
	glVertex3f(-9.0, -10.0, 7.7);
	glVertex3f(-9.0, -8.0, 7.7);
	glVertex3f(-9.0, -8.0, 8.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-9.0, -8.5, 7.7);
	glVertex3f(-9.0, -8.5, 6.7);
	glVertex3f(-9.0, -8.0, 6.7);
	glVertex3f(-9.0, -8.0, 7.7);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-9.0, -10.0, 6.7);
	glVertex3f(-9.0, -10.0, 6.5);
	glVertex3f(-9.0, -8.0, 6.5);
	glVertex3f(-9.0, -8.0, 6.7);
	glEnd();

	//kursi bagian belakang
	glBegin(GL_QUADS);
	glVertex3f(-9.0, -10.0, 6.5);
	glVertex3f(-8.5, -10.0, 6.5);
	glVertex3f(-8.5, -6.0, 6.5);
	glVertex3f(-9.0, -6.0, 6.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-8.5, -8.5, 6.5);
	glVertex3f(-6.0, -8.5, 6.5);
	glVertex3f(-6.0, -6.0, 6.5);
	glVertex3f(-8.5, -6.0, 6.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-6.0, -10.0, 6.5);
	glVertex3f(-5.5, -10.0, 6.5);
	glVertex3f(-5.5, -6.0, 6.5);
	glVertex3f(-6.0, -6.0, 6.5);
	glEnd();

	//kursi bagian kanan
	glBegin(GL_QUADS);
	glVertex3f(-5.5, -10.0, 8.0);
	glVertex3f(-5.5, -10.0, 7.7);
	glVertex3f(-5.5, -8.0, 7.7);
	glVertex3f(-5.5, -8.0, 8.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-5.5, -8.5, 7.7);
	glVertex3f(-5.5, -8.5, 6.7);
	glVertex3f(-5.5, -8.0, 6.7);
	glVertex3f(-5.5, -8.0, 7.7);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-5.5, -10.0, 6.7);
	glVertex3f(-5.5, -10.0, 6.5);
	glVertex3f(-5.5, -8.0, 6.5);
	glVertex3f(-5.5, -8.0, 6.7);
	glEnd();

	//kursi bagian atas
	glBegin(GL_QUADS);
	glVertex3f(-9.0, -8.0, 8.0);
	glVertex3f(-5.5, -8.0, 8.0);
	glVertex3f(-5.5, -8.0, 6.5);
	glVertex3f(-9.0, -8.0, 6.5);
}

void meja(void)
{
	//meja bagian depan
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.8);
	glVertex3f(7.5, -10.0, 6.5);
	glVertex3f(8.0, -10.0, 6.5);
	glVertex3f(8.0, -8.0, 6.5);
	glVertex3f(7.5, -8.0, 6.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(8.0, -8.5, 6.5);
	glVertex3f(9.5, -8.5, 6.5);
	glVertex3f(9.5, -8.0, 6.5);
	glVertex3f(8.0, -8.0, 6.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(9.5, -10.0, 6.5);
	glVertex3f(10.0, -10.0, 6.5);
	glVertex3f(10.0, -8.0, 6.5);
	glVertex3f(9.5, -8.0, 6.5);
	glEnd();

	//meja bagian kiri
	glBegin(GL_QUADS);
	glVertex3f(7.5, -10.0, 6.5);
	glVertex3f(7.5, -10.0, 6.0);
	glVertex3f(7.5, -8.0, 6.0);
	glVertex3f(7.5, -8.0, 6.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(7.5, -8.5, 6.0);
	glVertex3f(7.5, -8.5, 4.0);
	glVertex3f(7.5, -8.0, 4.0);
	glVertex3f(7.5, -8.0, 6.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(7.5, -10.0, 3.5);
	glVertex3f(7.5, -10.0, 4.0);
	glVertex3f(7.5, -8.0, 4.0);
	glVertex3f(7.5, -8.0, 3.5);
	glEnd();

	//meja bagian belakang
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.8);
	glVertex3f(7.5, -10.0, 3.5);
	glVertex3f(8.0, -10.0, 3.5);
	glVertex3f(8.0, -8.0, 3.5);
	glVertex3f(7.5, -8.0, 3.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(8.0, -8.5, 3.5);
	glVertex3f(9.5, -8.5, 3.5);
	glVertex3f(9.5, -8.0, 3.5);
	glVertex3f(8.0, -8.0, 3.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(9.5, -10.0, 3.5);
	glVertex3f(10.0, -10.0, 3.5);
	glVertex3f(10.0, -8.0, 3.5);
	glVertex3f(9.5, -8.0, 3.5);
	glEnd();

	//meja bagian kanan
	glBegin(GL_QUADS);
	glVertex3f(10.0, -10.0, 6.5);
	glVertex3f(10.0, -10.0, 6.0);
	glVertex3f(10.0, -8.0, 6.0);
	glVertex3f(10.0, -8.0, 6.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(10.0, -8.5, 6.0);
	glVertex3f(10.0, -8.5, 4.0);
	glVertex3f(10.0, -8.0, 4.0);
	glVertex3f(10.0, -8.0, 6.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(10.0, -10.0, 3.5);
	glVertex3f(10.0, -10.0, 4.0);
	glVertex3f(10.0, -8.0, 4.0);
	glVertex3f(10.0, -8.0, 3.5);
	glEnd();

	//meja bagian atas
	glBegin(GL_QUADS);
	glVertex3f(7.5, -8.0, 6.5);
	glVertex3f(10.0, -8.0, 6.5);
	glVertex3f(10.0, -8.0, 3.5);
	glVertex3f(7.5, -8.0, 3.5);
}

void lemari(void)
{
	//lemari bagian depan
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.2, 0.0);
	glVertex3f(7.5, -10.0, 9.5);
	glVertex3f(10.0, -10.0, 9.5);
	glVertex3f(10.0, -5.0, 9.5);
	glVertex3f(7.5, -5.0, 9.5);
	glEnd();
	//lemari bagian kanan
	glBegin(GL_QUADS);
	glVertex3f(10.0, -10.0, 9.5);
	glVertex3f(10.0, -10.0, 7.0);
	glVertex3f(10.0, -5.0, 7.0);
	glVertex3f(10.0, -5.0, 9.5);
	glEnd();
	//lemari bagian belakang
	glBegin(GL_QUADS);
	glVertex3f(7.5, -10.0, 7.0);
	glVertex3f(10.0, -10.0, 7.0);
	glVertex3f(10.0, -5.0, 7.0);
	glVertex3f(7.5, -5.0, 7.0);
	glEnd();
	//lemari bagian kiri
	glBegin(GL_QUADS);
	glVertex3f(7.5, -10.0, 7.0);
	glVertex3f(7.5, -10.0, 7.3);
	glVertex3f(7.5, -5.0, 7.3);
	glVertex3f(7.5, -5.0, 7.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(7.5, -10.0, 7.3);
	glVertex3f(7.5, -10.0, 9.2);
	glVertex3f(7.5, -9.7, 9.2);
	glVertex3f(7.5, -9.7, 7.3);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(7.5, -5.3, 7.3);
	glVertex3f(7.5, -5.3, 9.2);
	glVertex3f(7.5, -5.0, 9.2);
	glVertex3f(7.5, -5.0, 7.3);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(7.5, -10.0, 9.2);
	glVertex3f(7.5, -10.0, 9.5);
	glVertex3f(7.5, -5.0, 9.5);
	glVertex3f(7.5, -5.0, 9.2);
	glEnd();
	//pintu lemari
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.8);
	glVertex3f(7.5, -9.7, 7.3);
	glVertex3f(7.5, -9.7, 8.24);
	glVertex3f(7.5, -5.3, 8.24);
	glVertex3f(7.5, -5.3, 7.3);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.8);
	glVertex3f(7.5, -9.7, 8.26);
	glVertex3f(7.5, -9.7, 9.2);
	glVertex3f(7.5, -5.3, 9.2);
	glVertex3f(7.5, -5.3, 8.26);
	glEnd();

}

void kasur(void)
{
	//dipan bagian depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0.2);
	glVertex3f(-9.7, -10.0, -5.5);
	glVertex3f(-4.7, -10.0, -5.5);
	glVertex3f(-4.7, -8.5, -5.5);
	glVertex3f(-9.7, -8.5, -5.5);
	glEnd();
	//dipan bagian belakang
	glBegin(GL_QUADS);
	glVertex3f(-9.7, -10.0, -9.5);
	glVertex3f(-4.7, -10.0, -9.5);
	glVertex3f(-4.7, -8.5, -9.5);
	glVertex3f(-9.7, -8.5, -9.5);
	glEnd();
	//dipan bagian kanan
	glBegin(GL_QUADS);
	glVertex3f(-4.7, -10.0, -5.5);
	glVertex3f(-4.7, -10.0, -9.5);
	glVertex3f(-4.7, -8.5, -9.5);
	glVertex3f(-4.7, -8.5, -5.5);
	glEnd();
	//dipan bagian kiri
	glBegin(GL_QUADS);
	glVertex3f(-9.7, -10.0, -5.5);
	glVertex3f(-9.7, -10.0, -9.5);
	glVertex3f(-9.7, -7.0, -9.5);
	glVertex3f(-9.7, -7.0, -5.5);
	glEnd();
	//dipan bagian atas
	glBegin(GL_QUADS);
	glVertex3f(-9.7, -8.5, -5.5);
	glVertex3f(-9.7, -8.5, -9.5);
	glVertex3f(-4.7, -8.5, -9.5);
	glVertex3f(-4.7, -8.5, -5.5);
	glEnd();

	//kasur bagian depan
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-9.6, -8.5, -5.7);
	glVertex3f(-4.9, -8.5, -5.7);
	glVertex3f(-4.9, -8.0, -5.7);
	glVertex3f(-9.6, -8.0, -5.7);
	glEnd();
	//kasur bagian belakang
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-9.6, -8.5, -9.3);
	glVertex3f(-4.9, -8.5, -9.3);
	glVertex3f(-4.9, -8.0, -9.3);
	glVertex3f(-9.6, -8.0, -9.3);
	glEnd();
	//kasur bagian kanan
	glBegin(GL_QUADS);
	glVertex3f(-4.9, -8.5, -5.7);
	glVertex3f(-4.9, -8.5, -9.3);
	glVertex3f(-4.9, -8.0, -9.3);
	glVertex3f(-4.9, -8.0, -5.7);
	glEnd();
	//kasur bagian kiri
	glBegin(GL_QUADS);
	glVertex3f(-9.6, -8.5, -5.7);
	glVertex3f(-9.6, -8.5, -9.3);
	glVertex3f(-9.6, -8.0, -9.3);
	glVertex3f(-9.6, -8.0, -5.7);
	glEnd();
	//kasur bagian atas
	glBegin(GL_QUADS);
	glVertex3f(-9.6, -8.0, -5.7);
	glVertex3f(-9.6, -8.0, -9.3);
	glVertex3f(-4.9, -8.0, -9.3);
	glVertex3f(-4.9, -8.0, -5.7);
	glEnd();

}

void lincak(void)
{
	//lincak bagian depan
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.5, 0.1);
	glVertex3f(3.0, -10.0, 1.0);
	glVertex3f(3.5, -10.0, 1.0);
	glVertex3f(3.5, -7.0, 1.0);
	glVertex3f(3.0, -7.0, 1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(3.5, -8.5, 1.0);
	glVertex3f(6.5, -8.5, 1.0);
	glVertex3f(6.5, -8.0, 1.0);
	glVertex3f(3.5, -8.0, 1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(6.5, -10.0, 1.0);
	glVertex3f(7.0, -10.0, 1.0);
	glVertex3f(7.0, -8.0, 1.0);
	glVertex3f(6.5, -8.0, 1.0);
	glEnd();

	//lincak bagian kiri
	glBegin(GL_QUADS);
	glVertex3f(3.0, -10.0, 1.0);
	glVertex3f(3.0, -10.0, 0.7);
	glVertex3f(3.0, -7.0, 0.7);
	glVertex3f(3.0, -7.0, 1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(3.0, -7.5, 0.7);
	glVertex3f(3.0, -7.5, -0.7);
	glVertex3f(3.0, -7.0, -0.7);
	glVertex3f(3.0, -7.0, 0.7);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(3.0, -8.5, 0.7);
	glVertex3f(3.0, -8.5, -0.7);
	glVertex3f(3.0, -8.0, -0.7);
	glVertex3f(3.0, -8.0, 0.7);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(3.0, -10.0, -0.7);
	glVertex3f(3.0, -10.0, -1.0);
	glVertex3f(3.0, -7.0, -1.0);
	glVertex3f(3.0, -7.0, -0.7);
	glEnd();

	//lincak bagian belakang
	glBegin(GL_QUADS);
	glVertex3f(3.0, -10.0, -1.0);
	glVertex3f(3.5, -10.0, -1.0);
	glVertex3f(3.5, -7.0, -1.0);
	glVertex3f(3.0, -7.0, -1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(3.5, -8.5, -1.0);
	glVertex3f(6.5, -8.5, -1.0);
	glVertex3f(6.5, -8.0, -1.0);
	glVertex3f(3.5, -8.0, -1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(6.5, -10.0, -1.0);
	glVertex3f(7.0, -10.0, -1.0);
	glVertex3f(7.0, -8.0, -1.0);
	glVertex3f(6.5, -8.0, -1.0);
	glEnd();

	//lincak bagian kanan
	glBegin(GL_QUADS);
	glVertex3f(7.0, -10.0, 1.0);
	glVertex3f(7.0, -10.0, 0.7);
	glVertex3f(7.0, -8.0, 0.7);
	glVertex3f(7.0, -8.0, 1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(7.0, -8.5, 0.7);
	glVertex3f(7.0, -8.5, -0.7);
	glVertex3f(7.0, -8.0, -0.7);
	glVertex3f(7.0, -8.0, 0.7);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(7.0, -10.0, -0.7);
	glVertex3f(7.0, -10.0, -1.0);
	glVertex3f(7.0, -8.0, -1.0);
	glVertex3f(7.0, -8.0, -0.7);
	glEnd();

	//lincak bagian atas
	glBegin(GL_QUADS);
	glVertex3f(3.0, -7.0, 1.0);
	glVertex3f(3.5, -7.0, 1.0);
	glVertex3f(3.5, -7.0, -1.0);
	glVertex3f(3.0, -7.0, -1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(3.5, -7.0, 1.0);
	glVertex3f(4.5, -8.0, 1.0);
	glVertex3f(4.5, -8.0, -1.0);
	glVertex3f(3.5, -7.0, -1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(4.5, -8.0, 1.0);
	glVertex3f(7.0, -8.0, 1.0);
	glVertex3f(7.0, -8.0, -1.0);
	glVertex3f(4.5, -8.0, -1.0);
	glEnd();


}




void display(void)
{
	if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);

	//jendela dan pintu
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.8);
	glVertex3f(-3.0, -10.0, 5.0);
	glVertex3f(-0.2, -10.0, 5.0);
	glVertex3f(-0.2, -1.0, 5.0);
	glVertex3f(-3.0, -1.0, 5.0);
	glEnd();


	glBegin(GL_QUADS);
	glVertex3f(-9.0, -6.0, 5.0);
	glVertex3f(-7.0, -6.0, 5.0);
	glVertex3f(-7.0, -1.0, 5.0);
	glVertex3f(-9.0, -1.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-6.0, -6.0, 5.0);
	glVertex3f(-4.0, -6.0, 5.0);
	glVertex3f(-4.0, -1.0, 5.0);
	glVertex3f(-6.0, -1.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(1.0, -6.0, 10.0);
	glVertex3f(3.0, -6.0, 10.0);
	glVertex3f(3.0, -1.0, 10.0);
	glVertex3f(1.0, -1.0, 10.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(4.0, -6.0, 10.0);
	glVertex3f(6.0, -6.0, 10.0);
	glVertex3f(6.0, -1.0, 10.0);
	glVertex3f(4.0, -1.0, 10.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(7.0, -6.0, 10.0);
	glVertex3f(9.0, -6.0, 10.0);
	glVertex3f(9.0, -1.0, 10.0);
	glVertex3f(7.0, -1.0, 10.0);
	glEnd();

	//jendela atap
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-6.0, 11.0, 5.0);
	glVertex3f(-5.0, 11.0, 5.0);
	glVertex3f(-5.0, 13.0, 5.0);
	glVertex3f(-6.0, 13.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-4.0, 11.0, 5.0);
	glVertex3f(-3.0, 11.0, 5.0);
	glVertex3f(-3.0, 14.0, 5.0);
	glVertex3f(-4.0, 14.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-2.0, 11.0, 5.0);
	glVertex3f(-1.0, 11.0, 5.0);
	glVertex3f(-1.0, 15.0, 5.0);
	glVertex3f(-2.0, 15.0, 5.0);
	glEnd();

	//depan
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-10.0, -10.0, 5.0);
	glVertex3f(-10.0, 10.0, 5.0);
	glVertex3f(0.0, 10.0, 5.0);
	glVertex3f(0.0, -10.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(0.0, -10.0, 5.0);
	glVertex3f(0.0, -10.0, 10.0);
	glVertex3f(0.0, 10.0, 10.0);
	glVertex3f(0.0, 10.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(0.0, -10.0, 10.0);
	glVertex3f(0.0, 10.0, 10.0);
	glVertex3f(10.0, 10.0, 10.0);
	glVertex3f(10.0, -10.0, 10.0);
	glEnd();


	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-10.0, -10.0, -10.0);
	glVertex3f(-10.0, 10.0, -10.0);
	glVertex3f(10.0, 10.0, -10.0);
	glVertex3f(10.0, -10.0, -10.0);
	glEnd();

	//kanan
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(10.0, -10.0, -10.0);
	glVertex3f(10.0, 10.0, -10.0);
	glVertex3f(10.0, 10.0, 10.0);
	glVertex3f(10.0, -10.0, 10.0);
	glEnd();

	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(-10.0, -10.0, -10.0);
	glVertex3f(-10.0, 10.0, -10.0);
	glVertex3f(-10.0, 10.0, 5.0);
	glVertex3f(-10.0, -10.0, 5.0);
	glEnd();

	//bawah
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-10.0, -10.0, 12.0);
	glVertex3f(10.0, -10.0, 12.0);
	glVertex3f(10.0, -10.0, -10.0);
	glVertex3f(-10.0, -10.0, -10.0);
	glEnd();

	//atas
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.8, 0.8);
	glVertex3f(-10.0, 10.0, 12.0);
	glVertex3f(10.0, 10.0, 12.0);
	glVertex3f(10.0, 10.0, -10.0);
	glVertex3f(-10.0, 10.0, -10.0);
	glEnd();

	//atap
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(-12.0, 8.0, 13.0);
	glVertex3f(0.0, 10.0 + 10.0, 13.0);
	glVertex3f(0.0, 10.0 + 10.0, -11.0);
	glVertex3f(-12.0, 8.0, -11.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.2, 0.0);
	glVertex3f(12.0, 8.0, 13.0);
	glVertex3f(0.0, 10.0 + 10.0, 13.0);
	glVertex3f(0.0, 10.0 + 10.0, -11.0);
	glVertex3f(12.0, 8.0, -11.0);
	glEnd();
	//depan atap
	glBegin(GL_TRIANGLES);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-10.0, 10.0, 5.0);
	glVertex3f(0.0, 10.0, 5.0);
	glVertex3f(0.0, 10.0 + 10.0, 5.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3, 0.3, 0.3);
	glVertex3f(0.0, 10.0, 5.0);
	glVertex3f(0.0, 10.0, 10.0);
	glVertex3f(0.0, 10.0 + 10.0, 10.0);
	glVertex3f(0.0, 10.0 + 10.0, 5.0);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(0.0, 10.0, 10.0);
	glVertex3f(10.0, 10.0, 10.0);
	glVertex3f(0.0, 10.0 + 10.0, 10.0);
	glEnd();
	//belakang atap
	glBegin(GL_TRIANGLES);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-10.0, 10.0, -10.0);
	glVertex3f(10.0, 10.0, -10.0);
	glVertex3f(0.0, 10.0 + 10.0, -10.0);
	glEnd();

	//pintu garasi
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-23.0, -10.0, 4.0);
	glVertex3f(-12.0, -10.0, 4.0);
	glVertex3f(-12.0, 5.0, 4.0);
	glVertex3f(-23.0, 5.0, 4.0);
	glEnd();
    
	//Garasi
	//depan
	glBegin(GL_QUADS);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-25.0, -10.0, 4.0);
	glVertex3f(-10.0, -10.0, 4.0);
	glVertex3f(-10.0, 8.0, 4.0);
	glVertex3f(-25.0, 8.0, 4.0);
	glEnd();
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-25.0, -10.0, -10.0);
	glVertex3f(-10.0, -10.0, -10.0);
	glVertex3f(-10.0, 8.0, -10.0);
	glVertex3f(-25.0, 8.0, -10.0);
	glEnd();
	//kiri
	glBegin(GL_QUADS);
	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-25.0, -10.0, -10.0);
	glVertex3f(-25.0, -10.0, 4.0);
	glVertex3f(-25.0, 8.0, 4.0);
	glVertex3f(-25.0, 8.0, -10.0);
	glEnd();
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(-25.0, -10.0, -10.0);
	glVertex3f(-25.0, -10.0, 4.0);
	glVertex3f(-10.0, -10.0, 4.0);
	glVertex3f(-10.0, -10.0, -10.0);
	glEnd();

	//tembok dalam rumah
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.1, 0.0);
	glVertex3f(-10.0, -10.0, -1.0);
	glVertex3f(-10.0, 10.0, -1.0);
	glVertex3f(0.0, 10.0, -1.0);
	glVertex3f(0.0, -10.0, -1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(0.0, -1.0, -1.0);
	glVertex3f(0.0, 10.0, -1.0);
	glVertex3f(3.0, 10.0, -1.0);
	glVertex3f(3.0, -1.0, -1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(3.0, -10.0, -1.0);
	glVertex3f(3.0, 10.0, -1.0);
	glVertex3f(10.0, 10.0, -1.0);
	glVertex3f(10.0, -10.0, -1.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(0.0, -10.0, -1.0);
	glVertex3f(0.0, 10.0, -1.0);
	glVertex3f(0.0, 10.0, -7.5);
	glVertex3f(0.0, -10.0, -7.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(0.0, -1.0, -7.5);
	glVertex3f(0.0, 10.0, -7.5);
	glVertex3f(0.0, 10.0, -10.0);
	glVertex3f(0.0, -1.0, -10.0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(3.0, -10.0, -1.0);
	glVertex3f(3.0, 10.0, -1.0);
	glVertex3f(3.0, 10.0, -7.0);
	glVertex3f(3.0, -10.0, -7.0);
	glEnd();
	


	kursi();
	meja();
	lemari();
	kasur();
	lincak();

	//atap garasi
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(-25.0, 7.0, 3.0);
	glVertex3f(-12.0, 7.0, 3.0);
	glVertex3f(-12.0, 7.0 + 3.0, -10.0);
	glVertex3f(-25.0, 7.0 + 3.0, -10.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.2, 0.2, 0.2);
	glVertex3f(-25.0, 8.0, -10.0);
	glVertex3f(-12.0, 8.0, -10);
	glVertex3f(-12.0, 8.0 + 2.0, -10.0);
	glVertex3f(-25.0, 8.0 + 2.0, -10.0);
	glEnd();


	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'w':
	case 'W':
		glTranslatef(0.0, 0.0, 5.0);
		break;
	case 'd':
	case 'D':
		glTranslatef(5.0, 0.0, 0.0);
		break;
	case 's':
	case 'S':
		glTranslatef(0.0, 0.0, -5.0);
		break;
	case 'a':
	case 'A':
		glTranslatef(-5.0, 0.0, 0.0);
		break;
	case '7':
		glTranslatef(0.0, 3.0, 0.0);
		break;
	case '9':
		glTranslatef(0.0, -3.0, 0.0);
		break;
	case '1':
		glRotatef(2.0, 0.0, 0.0, 1.0);
		break;
	case '3':
		glRotatef(-2.0, 0.0, 0.0, 1.0);
		break;
	}
	display();
}

void mouse(int button, int state, int x, int y) {
	if (state == GLUT_DOWN) {
		switch (button) {
		case GLUT_LEFT_BUTTON:
			glRotatef(-5.0, 0.0, 1.0, 0.0);
			break;
		case GLUT_RIGHT_BUTTON:
			glRotatef(5.0, 0.0, 1.0, 0.0);
			break;
		case GLUT_MIDDLE_BUTTON:
			if (is_depth)
			{
				is_depth = 0;
				glDisable(GL_DEPTH_TEST);
			}
			else
			{
				is_depth = 1;
				glEnable(GL_DEPTH_TEST);
			}
			break;
		case 3:
			glRotatef(-2.0, 1.0, 0.0, 0.0);
			break;
		case 4:
			glRotatef(2.0, 1.0, 0.0, 0.0);
			break;
		}
	}
	
	display();
}


void ukuran(int lebar, int tinggi)
{
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}