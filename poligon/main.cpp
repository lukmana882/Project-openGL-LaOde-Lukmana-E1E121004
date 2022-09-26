
#include <GL/glut.h>

void kotakPoligon()
{
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1,0,0);  //memberi warna merah pada obyek

//Membuat segi empat dengan terlebih dahulu menentukan titik-titik koordinatnya
//glBegin(GL_QUADS);
glBegin(GL_POLYGON);
glVertex2f(-0.5,0.5); //kiri
glVertex2f(0.5,0.5); //bawah
glVertex2f(0.5,-0.5); //kanan
glVertex2f(-0.5,-0.5); //atas
glEnd();
glFlush();
//glutSwapBuffers();//menukar  bagian belakan buffer  menjadi  buffer   layar   (screen buffer)..gambar yang berada di
//buffer belakang layar dipindahkan ke buffer layar, sehingga menghasilkan animasi yang
//sempurna.
}
int main(int argc, char **argv)
{
glutInit(&argc,argv); //menginisialisasi glut dan memproses commendline yang disertakn (jika ada) ..harus dipanggil pertama kali
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);//menentukan jenis buffer dan atau model pewarnaan
glutInitWindowSize(500,400);//ukuran window
glutInitWindowPosition(0,0);//posisi window ..default (kiri,atas)
glutCreateWindow("poligon kotak");//identitas window
glClearColor (1.0f, 1.0f, 1.0f, 0.0f);
glMatrixMode(GL_PROJECTION);//memberikan nilai matriks atau inisialisasi matriks.
glOrtho(-10,10,1.0,1.0,-1.0,1.0);
glutDisplayFunc(kotakPoligon);//memanggil fungsi display atau untuk membuat objek primitif.
glutMainLoop();


return 0;
}
