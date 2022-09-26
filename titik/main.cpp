#include <GL/glut.h>
#include <GL/glut.h>
#include <stdio.h>
void titik ();
main(int argc, char** argv)
{
glutInit(&argc,argv); //menginisialisasi glut dan memproses commendline yang disertakn (jika ada) ..harus dipanggil pertama kali
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);//menentukan jenis buffer dan atau model pewarnaan
glutInitWindowSize(500,500);//ukuran window
glutInitWindowPosition(0,0);//posisi window ..default (kiri,atas)
glutCreateWindow("Titik");//identitas window
glClearColor(0.0,0.0,0.0,0.0); //memberi background window
glMatrixMode(GL_PROJECTION);//memberikan nilai matriks atau inisialisasi matriks.
glOrtho(-10,10,1.0,1.0,-1.0,1.0);
glutDisplayFunc(titik);//memanggil fungsi display atau untuk membuat objek primitif.
glutMainLoop();//menandakan pemrosesan glut terjadi.
}
void titik()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5.5);
glBegin(GL_POINTS);

glColor3f(1.0, 0.0, 0.0);
glVertex2f(-0.3, 0.0);

glColor3f(0.0, 1.0, 0.0);
glVertex2f(-0.2, 0.0);

glColor3f(0.0, 0.0, 1.0);
glVertex2f(-0.1, 0.0);

glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.0, 0.0);

glColor3f(0.0, 1.0, 1.0);
glVertex2f(0.1, 0.0);

glColor3f(1.0, 0.0, 1.0);
glVertex2f(0.2, 0.0);

glEnd();
glFlush();
}
