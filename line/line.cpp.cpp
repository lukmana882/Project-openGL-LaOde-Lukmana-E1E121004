//#include <GL/glut.h>
//#include <math.h>
//void display(void)
//{
///* Membuat Garis Horizontal */
//glClearColor (0.0f, 0.0f, 0.0f, 0.0f);/* ==> Digunakan untuk membersihkan latar dalam mode RGBA*/
//glClear (GL_COLOR_BUFFER_BIT); //==> Digunakan untuk membersihkan layar latar belakang dengan warna hitam
//glPushMatrix ();// ==> Digunakan untuk membuat baris kode menjadi tidak berlaku untuk bagian luar
//glClearColor (1,1,1,0);// ==> Digunakan untuk menentukan warna garis/titik
//glColor3f (1,1,1);// ==> Digunakan untuk menentukan warna garis/titik
//glBegin (GL_LINES);// ==> Digunakan untuk menggambar garis dari titik
//glVertex3f (-0.6f,0.0f,0.0f);// ==> Digunakan untuk menentukan titik awal
//glVertex3f (0.6f,0.0f,0.0f);// ==> Digunakan untuk menentukan titik akhir
//glEnd ();// ==> Digunakan untuk mengakhiri gambar garis dititik akhir
//glPopMatrix ();// ==> Digunakan untuk membuat baris kode menjadi tidak berlaku untuk bagian luar
//SwapBuffers (HDC);// ==> Digunakan untuk menukar bagian belakang buffer menjadi buffer layar
//Sleep (1);
//int main(int argc, char **argv)
//{
//glutInit(&argc, argv);
//glutCreateWindow("LINE");
//glutDisplayFunc(display);
//glutMainLoop();
//return 0;
//}
#include <GL/glut.h>
#include <math.h>
void display(void)
{
glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);

glPushMatrix ();
glClearColor(1,1,1,1);
glColor3f(20,100,50); //
glBegin(GL_LINES);
glVertex3f(0,0,0.0);
glVertex3f(0.13,10.0,10.10);
glEnd ();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("GARIS");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
