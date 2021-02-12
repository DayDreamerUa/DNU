#include <math.h>
#include <iostream>
#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/GLU.h>
#include <GLFW/glfw3.h>
#include <GL/glu.h>
#include <soil.h>
#include <string>


// angle of rotation for the camera direction
float angle = 0.0;
float VerticalAngle = 1.0f;
// actual vector representing the camera's direction
float lx = 0.0f, lz = -1.0f;
// XZ position of the camera
float x = 0.0f, z = 0.0f, y=2.0f;
float sizeofcube = 0.4f;
float YAngle = 0.0f;
float deltaAngle = 0.0f;
int xOrigin = -1;
int yOrigin = -1;
float ly = 0.0f;
int Turns = 0;

class cube
{
private:
public:
	float cubeX, cubeY, cubeZ;
	int color1 = 1;
	int color2 = 2;
	int color3 = 3;
	int color4 = 4;
	int color5 = 5;
	int color6 = 6;
	
void MakeACube(float x, float y, float z)
	{
		glMatrixMode(GL_MODELVIEW);
		glPushMatrix();


		//glTranslatef(0, dimY / 2, 0);

		//glScalef(dimX / 2, dimY / 2, dimZ / 2);
		cubeX = x; cubeY = y; cubeZ = z;




		glBegin(GL_QUADS);
		switch (color1)
		{
		case 1: glColor3f(0.0, 0.0, 0.0); break; //Чёрный
		case 2: glColor3f(1.0, 1.0, 1.0); break; //Белый
		case 3: glColor3f(1.0, 0.0, 0.0); break; //Красный
		case 4: glColor3f(0.0, 1.0, 0.0); break; //Зелёный
		case 5: glColor3f(0.0, 0.0, 1.0); break; //Синий
		case 6: glColor3f(1.0, 1.0, 0.0); break; //Жёлтый
		}

		glVertex3f(x, y, z);
		glVertex3f(x + sizeofcube, y, z);
		glVertex3f(x + sizeofcube, y, z + sizeofcube);
		glVertex3f(x, y, z + sizeofcube);

		switch (color2)
		{
		case 1: glColor3f(0.0, 0.0, 0.0); break; //Чёрный
		case 2: glColor3f(1.0, 1.0, 1.0); break; //Белый
		case 3: glColor3f(1.0, 0.0, 0.0); break; //Красный
		case 4: glColor3f(0.0, 1.0, 0.0); break; //Зелёный
		case 5: glColor3f(0.0, 0.0, 1.0); break; //Синий
		case 6: glColor3f(1.0, 1.0, 0.0); break; //Жёлтый
		}

		glVertex3f(x, y + sizeofcube, z);
		glVertex3f(x + sizeofcube, y + sizeofcube, z);
		glVertex3f(x + sizeofcube, y + sizeofcube, z + sizeofcube);
		glVertex3f(x, y + sizeofcube, z + sizeofcube);

		switch (color3)
		{
		case 1: glColor3f(0.0, 0.0, 0.0); break; //Чёрный
		case 2: glColor3f(1.0, 1.0, 1.0); break; //Белый
		case 3: glColor3f(1.0, 0.0, 0.0); break; //Красный
		case 4: glColor3f(0.0, 1.0, 0.0); break; //Зелёный
		case 5: glColor3f(0.0, 0.0, 1.0); break; //Синий
		case 6: glColor3f(1.0, 1.0, 0.0); break; //Жёлтый
		}

		glVertex3f(x, y, z + sizeofcube);
		glVertex3f(x + sizeofcube, y, z + sizeofcube);
		glVertex3f(x + sizeofcube, y + sizeofcube, z + sizeofcube);
		glVertex3f(x, y + sizeofcube, z + sizeofcube);

		switch (color4)
		{
		case 1: glColor3f(0.0, 0.0, 0.0); break; //Чёрный
		case 2: glColor3f(1.0, 1.0, 1.0); break; //Белый
		case 3: glColor3f(1.0, 0.0, 0.0); break; //Красный
		case 4: glColor3f(0.0, 1.0, 0.0); break; //Зелёный
		case 5: glColor3f(0.0, 0.0, 1.0); break; //Синий
		case 6: glColor3f(1.0, 1.0, 0.0); break; //Жёлтый
		}

		glVertex3f(x, y, z);
		glVertex3f(x, y, z + sizeofcube);
		glVertex3f(x, y + sizeofcube, z + sizeofcube);
		glVertex3f(x, y + sizeofcube, z);

		switch (color5)
		{
		case 1: glColor3f(0.0, 0.0, 0.0); break; //Чёрный
		case 2: glColor3f(1.0, 1.0, 1.0); break; //Белый
		case 3: glColor3f(1.0, 0.0, 0.0); break; //Красный
		case 4: glColor3f(0.0, 1.0, 0.0); break; //Зелёный
		case 5: glColor3f(0.0, 0.0, 1.0); break; //Синий
		case 6: glColor3f(1.0, 1.0, 0.0); break; //Жёлтый
		}

		glVertex3f(x + sizeofcube, y, z);
		glVertex3f(x + sizeofcube, y, z + sizeofcube);
		glVertex3f(x + sizeofcube, y + sizeofcube, z + sizeofcube);
		glVertex3f(x + sizeofcube, y + sizeofcube, z);

		switch (color6)
		{
		case 1: glColor3f(0.0, 0.0, 0.0); break; //Чёрный
		case 2: glColor3f(1.0, 1.0, 1.0); break; //Белый
		case 3: glColor3f(1.0, 0.0, 0.0); break; //Красный
		case 4: glColor3f(0.0, 1.0, 0.0); break; //Зелёный
		case 5: glColor3f(0.0, 0.0, 1.0); break; //Синий
		case 6: glColor3f(1.0, 1.0, 0.0); break; //Жёлтый
		}

		glVertex3f(x + sizeofcube, y + sizeofcube, z);
		glVertex3f(x, y + sizeofcube, z);
		glVertex3f(x, y, z);
		glVertex3f(x + sizeofcube, y, z);


		glEnd();


		glPopMatrix();


	}
	
};

cube TestCube[3][3][3];

GLuint texture;
GLUquadric* MySphereSkyBox;

void mouseButton(int button, int state, int x, int y) {

	// only start motion if the left button is pressed
	if (button == GLUT_LEFT_BUTTON) {

		// when the button is released
		if (state == GLUT_UP) {
			angle += deltaAngle;
			xOrigin = -1;
		}
		else {// state = GLUT_DOWN
			xOrigin = x;
		}
	}
}

void mouseMove(int x, int y) {

	// this will only be true when the left button is down
	if (xOrigin >= 0) {

		// update deltaAngle
		deltaAngle = (x - xOrigin) * 0.001f;
		YAngle = (y - yOrigin) * 0.001f;
		// update camera's direction
		lx = sin(angle + deltaAngle);
		lz = -cos(angle + deltaAngle);
	}
}

void SphereTextureMaking()
{
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	int width, height;
	unsigned char* image = SOIL_load_image("SkyBox.jpg", &width, &height, 0, SOIL_LOAD_RGB);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	SOIL_free_image_data(image);

}

void SkyBox()
{
	glColor3f(1, 1, 1);
	SphereTextureMaking();
	glBindTexture(GL_TEXTURE_2D, texture);
	gluQuadricDrawStyle(MySphereSkyBox, GLU_FILL);
	gluQuadricNormals(MySphereSkyBox, GLU_SMOOTH);
	gluSphere(MySphereSkyBox, 20, 20, 20);
	gluQuadricTexture(MySphereSkyBox, GLU_TRUE);
	glDeleteTextures(1, &texture);


}


void display(void)
{

	int i = 0; int j = 0; int k = 0;
	float axisX = 0.0f;
	float axisY = 0.4f;
	float axisZ = 0.4f;
	float XaxisX = 0.0f;
	float YaxisY = 0.4f;
	float ZaxisZ = 0.4f;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	SkyBox();

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(x, y, z,
		x + lx, y + ly, z + lz,
		0.0f, 1.0f, 0.0f);

	for (k=0; k<3;k++)
	{ 
		axisZ += 0.45f;
		axisX = 0.0f;
		axisY = 0.4f;
	 for (i=0;i < 3; i++)
	 {
		axisY += 0.45f;
		if (i == 2) axisY = YaxisY;
	  for (j = 0; j < 3; j++)
	  {
		  axisX += 0.45f;
		TestCube[i][j][k].MakeACube(axisX, axisY, axisZ);
		if (j==2) axisX = XaxisX;
	  }
			

	 }
	}
	


	glFlush();

	glutSwapBuffers();
}


void init(void)
{
	glClearColor(0, 0, 0, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1, 1, -1, 1, 1, 1000);

	glEnable(GL_TEXTURE_2D);
	glEnable(GL_DEPTH_TEST);
}


void processSpecialKeys(int key, int xx, int yy) {
	int Color1Temp, Color2Temp, Color3Temp, Color4Temp, Color5Temp, Color6Temp, Color7Temp, Color8Temp, Color9Temp, Color10Temp, Color11Temp, Color12Temp;
	float fraction = 0.3f;
	int i = 0;
	int j = 0;
	switch (key) {
	
	case GLUT_KEY_LEFT: {
		angle -= 0.05f;
		lx = sin(angle);
		lz = -cos(angle);
		break; }
	
	case GLUT_KEY_RIGHT: {
		angle += 0.05f;
		lx = sin(angle);
		lz = -cos(angle);
		break; }
	
	case GLUT_KEY_UP: {
		x += lx * fraction;
		z += lz * fraction;
		break; }
	
	case GLUT_KEY_DOWN: {
		x -= lx * fraction;
		z -= lz * fraction;
		break; }
	
	case GLUT_KEY_PAGE_UP: { 
	y = y + 0.1; break; }
	
	case GLUT_KEY_PAGE_DOWN: { 
	y = y - 0.1; break; }
	
	case GLUT_KEY_F1: {
		        Turns += 1;
		        Color1Temp = TestCube[1][0][0].color6;
				Color2Temp = TestCube[1][1][0].color6;
				Color3Temp = TestCube[1][2][0].color6;

				Color4Temp = TestCube[1][2][0].color5;
				Color5Temp = TestCube[1][2][1].color5;
				Color6Temp = TestCube[1][2][2].color5;

				Color7Temp = TestCube[1][0][2].color3;
				Color8Temp = TestCube[1][1][2].color3;
				Color9Temp = TestCube[1][2][2].color3;

				Color10Temp = TestCube[1][0][0].color4;
				Color11Temp = TestCube[1][0][1].color4;
				Color12Temp = TestCube[1][0][2].color4;
				
				TestCube[1][2][0].color5 = Color1Temp; //Изначально Синий
				TestCube[1][2][1].color5 = Color2Temp;
				TestCube[1][2][2].color5 = Color3Temp;

				TestCube[1][2][2].color3 = Color4Temp; //Изначально красный ряд
				TestCube[1][1][2].color3 = Color5Temp;
				TestCube[1][0][2].color3 = Color6Temp;

				TestCube[1][0][2].color4 = Color9Temp; //Изначально зелёный ряд
				TestCube[1][0][1].color4 = Color8Temp;
				TestCube[1][0][0].color4 = Color7Temp;

				TestCube[1][0][0].color6 = Color12Temp; //Изначально жёлтый
				TestCube[1][1][0].color6 = Color11Temp;
				TestCube[1][2][0].color6 = Color10Temp;
				

		break; }
	
	case GLUT_KEY_F2: {
		Turns += 1;
		Color1Temp = TestCube[2][0][0].color6;
		Color2Temp = TestCube[2][1][0].color6;
		Color3Temp = TestCube[2][2][0].color6;

		Color4Temp = TestCube[2][2][0].color5;
		Color5Temp = TestCube[2][2][1].color5;
		Color6Temp = TestCube[2][2][2].color5;

		Color7Temp = TestCube[2][0][2].color3;
		Color8Temp = TestCube[2][1][2].color3;
		Color9Temp = TestCube[2][2][2].color3;

		Color10Temp = TestCube[2][0][0].color4;
		Color11Temp = TestCube[2][0][1].color4;
		Color12Temp = TestCube[2][0][2].color4;

		TestCube[2][2][0].color5 = Color1Temp; //Изначально Синий
		TestCube[2][2][1].color5 = Color2Temp;
		TestCube[2][2][2].color5 = Color3Temp;

		TestCube[2][2][2].color3 = Color4Temp; //Изначально красный ряд
		TestCube[2][1][2].color3 = Color5Temp;
		TestCube[2][0][2].color3 = Color6Temp;

		TestCube[2][0][2].color4 = Color9Temp; //Изначально зелёный ряд
		TestCube[2][0][1].color4 = Color8Temp;
		TestCube[2][0][0].color4 = Color7Temp;

		TestCube[2][0][0].color6 = Color12Temp; //Изначально жёлтый
		TestCube[2][1][0].color6 = Color11Temp;
		TestCube[2][2][0].color6 = Color10Temp;


		break; }
	
	case GLUT_KEY_F3: {
		Turns += 1;
		Color1Temp = TestCube[1][0][0].color6;
		Color2Temp = TestCube[1][1][0].color6;
		Color3Temp = TestCube[1][2][0].color6;

		Color4Temp = TestCube[1][2][0].color5;
		Color5Temp = TestCube[1][2][1].color5;
		Color6Temp = TestCube[1][2][2].color5;

		Color7Temp = TestCube[1][0][2].color3;
		Color8Temp = TestCube[1][1][2].color3;
		Color9Temp = TestCube[1][2][2].color3;

		Color10Temp = TestCube[1][0][0].color4;
		Color11Temp = TestCube[1][0][1].color4;
		Color12Temp = TestCube[1][0][2].color4;

		TestCube[1][2][0].color5 = Color9Temp; //Изначально Синий
		TestCube[1][2][1].color5 = Color8Temp;
		TestCube[1][2][2].color5 = Color7Temp;

		TestCube[1][2][2].color3 = Color12Temp; //Изначально красный ряд
		TestCube[1][1][2].color3 = Color11Temp;
		TestCube[1][0][2].color3 = Color10Temp;

		TestCube[1][0][2].color4 = Color1Temp; //Изначально зелёный ряд
		TestCube[1][0][1].color4 = Color2Temp;
		TestCube[1][0][0].color4 = Color3Temp;

		TestCube[1][0][0].color6 = Color4Temp; //Изначально жёлтый
		TestCube[1][1][0].color6 = Color5Temp;
		TestCube[1][2][0].color6 = Color6Temp;


		break; }

	case GLUT_KEY_F4: {
		Turns += 1;
		Color1Temp = TestCube[2][0][0].color6;
		Color2Temp = TestCube[2][1][0].color6;
		Color3Temp = TestCube[2][2][0].color6;

		Color4Temp = TestCube[2][2][0].color5;
		Color5Temp = TestCube[2][2][1].color5;
		Color6Temp = TestCube[2][2][2].color5;

		Color7Temp = TestCube[2][0][2].color3;
		Color8Temp = TestCube[2][1][2].color3;
		Color9Temp = TestCube[2][2][2].color3;

		Color10Temp = TestCube[2][0][0].color4;
		Color11Temp = TestCube[2][0][1].color4;
		Color12Temp = TestCube[2][0][2].color4;

		TestCube[2][2][0].color5 = Color9Temp; //Изначально Синий
		TestCube[2][2][1].color5 = Color8Temp;
		TestCube[2][2][2].color5 = Color7Temp;

		TestCube[2][2][2].color3 = Color12Temp; //Изначально красный ряд
		TestCube[2][1][2].color3 = Color11Temp;
		TestCube[2][0][2].color3 = Color10Temp;

		TestCube[2][0][2].color4 = Color1Temp; //Изначально зелёный ряд
		TestCube[2][0][1].color4 = Color2Temp;
		TestCube[2][0][0].color4 = Color3Temp;

		TestCube[2][0][0].color6 = Color4Temp; //Изначально жёлтый
		TestCube[2][1][0].color6 = Color5Temp;
		TestCube[2][2][0].color6 = Color6Temp;


		break; }
	
	case GLUT_KEY_F5: {
		Turns += 1;
		Color1Temp = TestCube[1][0][2].color3; //Изначально Красный
		Color2Temp = TestCube[0][0][2].color3;
		Color3Temp = TestCube[2][0][2].color3;
		
		Color4Temp = TestCube[2][0][0].color1;  //Изначально Чёрный
		Color5Temp = TestCube[2][0][1].color1;
		Color6Temp = TestCube[2][0][2].color1;

		Color7Temp = TestCube[1][0][0].color6; //Изначально Жёлтый
		Color8Temp = TestCube[0][0][0].color6;
		Color9Temp = TestCube[2][0][0].color6;
		
		Color10Temp = TestCube[1][0][0].color2; //Изначально белый
		Color11Temp = TestCube[1][0][1].color2;
		Color12Temp = TestCube[1][0][2].color2;
       
		TestCube[1][0][2].color3 = Color10Temp;
		TestCube[0][0][2].color3 = Color11Temp; //Красная
		TestCube[2][0][2].color3 = Color12Temp;

		TestCube[2][0][0].color1 = Color3Temp;
		TestCube[2][0][1].color1 = Color2Temp; //Чёрная
		TestCube[2][0][2].color1 = Color1Temp;

	    TestCube[1][0][0].color6 = Color4Temp; 
        TestCube[0][0][0].color6 = Color5Temp; //Жёлтая
        TestCube[2][0][0].color6 = Color6Temp;

		TestCube[1][0][2].color2 = Color7Temp;
		TestCube[1][0][1].color2 = Color8Temp; // Белая
		TestCube[1][0][0].color2 = Color9Temp;



		break; }
	
	case GLUT_KEY_F6: {
		Turns += 1;
		Color1Temp = TestCube[1][2][2].color3; //Изначально Красный
		Color2Temp = TestCube[0][2][2].color3;
		Color3Temp = TestCube[2][2][2].color3;

		Color4Temp = TestCube[2][2][0].color1;  //Изначально Чёрный
		Color5Temp = TestCube[2][2][1].color1;
		Color6Temp = TestCube[2][2][2].color1;

		Color7Temp = TestCube[1][2][0].color6; //Изначально Жёлтый
		Color8Temp = TestCube[0][2][0].color6;
		Color9Temp = TestCube[2][2][0].color6;

		Color10Temp = TestCube[1][2][0].color2; //Изначально белый
		Color11Temp = TestCube[1][2][1].color2;
		Color12Temp = TestCube[1][2][2].color2;

		TestCube[1][2][2].color3 = Color10Temp;
		TestCube[0][2][2].color3 = Color11Temp; //Красная
		TestCube[2][2][2].color3 = Color12Temp;

		TestCube[2][2][0].color1 = Color3Temp;
		TestCube[2][2][1].color1 = Color2Temp; //Чёрная
		TestCube[2][2][2].color1 = Color1Temp;

		TestCube[1][2][0].color6 = Color4Temp;
		TestCube[0][2][0].color6 = Color5Temp; //Жёлтая
		TestCube[2][2][0].color6 = Color6Temp;

		TestCube[1][2][2].color2 = Color7Temp;
		TestCube[1][2][1].color2 = Color8Temp; // Белая
		TestCube[1][2][0].color2 = Color9Temp;



		break; }

	case GLUT_KEY_F7: {
		Turns += 1;
		Color1Temp = TestCube[1][0][2].color3; //Изначально Красный
		Color2Temp = TestCube[0][0][2].color3;
		Color3Temp = TestCube[2][0][2].color3;

		Color4Temp = TestCube[2][0][0].color1;  //Изначально Чёрный
		Color5Temp = TestCube[2][0][1].color1;
		Color6Temp = TestCube[2][0][2].color1;

		Color7Temp = TestCube[1][0][0].color6; //Изначально Жёлтый
		Color8Temp = TestCube[0][0][0].color6;
		Color9Temp = TestCube[2][0][0].color6;

		Color10Temp = TestCube[1][0][0].color2; //Изначально белый
		Color11Temp = TestCube[1][0][1].color2;
		Color12Temp = TestCube[1][0][2].color2;

		TestCube[1][0][2].color3 = Color6Temp;
		TestCube[0][0][2].color3 = Color5Temp; //Красная
		TestCube[2][0][2].color3 = Color4Temp;

		TestCube[2][0][0].color1 = Color7Temp;
		TestCube[2][0][1].color1 = Color8Temp; //Чёрная
		TestCube[2][0][2].color1 = Color9Temp;

		TestCube[1][0][0].color6 = Color12Temp;
		TestCube[0][0][0].color6 = Color11Temp; //Жёлтая
		TestCube[2][0][0].color6 = Color10Temp;

		TestCube[1][0][2].color2 = Color3Temp;
		TestCube[1][0][1].color2 = Color2Temp; // Белая
		TestCube[1][0][0].color2 = Color1Temp;



		break; }
	
	case GLUT_KEY_F8: {
		Turns += 1;
		Color1Temp = TestCube[1][2][2].color3; //Изначально Красный
		Color2Temp = TestCube[0][2][2].color3;
		Color3Temp = TestCube[2][2][2].color3;

		Color4Temp = TestCube[2][2][0].color1;  //Изначально Чёрный
		Color5Temp = TestCube[2][2][1].color1;
		Color6Temp = TestCube[2][2][2].color1;

		Color7Temp = TestCube[1][2][0].color6; //Изначально Жёлтый
		Color8Temp = TestCube[0][2][0].color6;
		Color9Temp = TestCube[2][2][0].color6;

		Color10Temp = TestCube[1][2][0].color2; //Изначально белый
		Color11Temp = TestCube[1][2][1].color2;
		Color12Temp = TestCube[1][2][2].color2;

		TestCube[1][2][2].color3 = Color6Temp;
		TestCube[0][2][2].color3 = Color5Temp; //Красная
		TestCube[2][2][2].color3 = Color4Temp;

		TestCube[2][2][0].color1 = Color7Temp;
		TestCube[2][2][1].color1 = Color8Temp; //Чёрная
		TestCube[2][2][2].color1 = Color9Temp;

		TestCube[1][2][0].color6 = Color12Temp;
		TestCube[0][2][0].color6 = Color11Temp; //Жёлтая
		TestCube[2][2][0].color6 = Color10Temp;

		TestCube[1][2][2].color2 = Color3Temp;
		TestCube[1][2][1].color2 = Color2Temp; // Белая
		TestCube[1][2][0].color2 = Color1Temp;

		break; }
	
	}
}

void idle(void)
{
	
	glutPostRedisplay();
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Cube");
	init();
	MySphereSkyBox = gluNewQuadric();
	glutDisplayFunc(display);
	glutSpecialFunc(processSpecialKeys);
	glutMouseFunc(mouseButton);
	glutMotionFunc(mouseMove);
	glutIdleFunc(idle);
    glutMainLoop();
	return 0;
}