#include <GL/glut.h>


void kotakLine()
{
glClear (GL_COLOR_BUFFER_BIT);

glPushMatrix ();
glColor3f(0.3,0.6,0.7);
glBegin(GL_LINES);
glVertex2f(0.8,0.8);
glVertex2f(0.8,-0.8);
glEnd ();

glPushMatrix ();
glColor3f(0.3,0.6,0.7);
glBegin(GL_LINES);
glVertex2f(0.8,-0.8);
glVertex2f(-0.8,-0.8);
glEnd ();

glPushMatrix ();
glColor3f(0.3,0.6,0.7);
glBegin(GL_LINES);
glVertex2f(-0.8,-0.8);
glVertex2f(-0.8,0.8);
glEnd ();

glPushMatrix ();
glColor3f(0.3,0.6,0.7);
glBegin(GL_LINES);
glVertex2f(-0.8,0.8);
glVertex2f(0.8,0.8);
glEnd ();


glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc,argv); //menginisialisasi glut dan memproses commendline yang disertakn (jika ada) ..harus dipanggil pertama kali
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);//menentukan jenis buffer dan atau model pewarnaan
glutInitWindowSize(500,400);//ukuran window
glutInitWindowPosition(0,0);//posisi window ..default (kiri,atas)
glutCreateWindow("kotak line");//identitas window
glClearColor (1.0f, 1.0f, 1.0f, 0.0f);
glMatrixMode(GL_PROJECTION);//memberikan nilai matriks atau inisialisasi matriks.
glOrtho(-10,10,1.0,1.0,-1.0,1.0);
glutDisplayFunc(kotakLine);//memanggil fungsi display atau untuk membuat objek primitif.
glutMainLoop();


return 0;
}
