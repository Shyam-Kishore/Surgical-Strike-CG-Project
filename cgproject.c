#include<GL/glut.h>
#include<string.h>
void draw_circle(GLint h, GLint k, GLint r);
void jet();
void draw_pixel(GLint cx, GLint cy);
void plotpixels(GLint h,GLint k, GLint x,GLint y);
int a=0,x=0,m,t=700;
float jj;
void stars();
void scene1();
void scene2();
void scene3();
void scene4();
void flight_name();
void pak_flight_name();
void group_stars();
char a1[]="SAHYADRI COLLEGE OF ENGINEERING AND MANAGEMENT";
char b[]="ADYAR";
char c[]="A MINIPROJECT ON";
char d[]="COMPUTER GRAPHICS AND VISUALIZATION";
char e[]="SURGICAL STRIKE";
char f[]="DESIGNED BY:";
char g[]="SHYAM KISHORE";
char h[]="PRATHIK P.B";
char i[]="4SF16CS150";
char j[]="4SF16CS115";
char k[]="PRESS KEY 'X' TO CONTINUE";
char con[]="PRESS KEY 'W' TO MOVE THE JET";
char boom[]="  !..B..L...A..S....T..!  ";
char tk[]="THANK   YOU";
char exi[]="PRESS    KEY    'Z'    TO   EXIT";
void tree();
char msg[]="MIG-21";
char msg1[]="F-16";
void move_jet();
int flag=0,mov_jet=0,mov_jet1=0,mov_jet2=0,l;
void keys(unsigned char k,int x,int y);
void missile();
void explosion();
void pakistan_jet();
void indian_jet();
void move_jet1();
	
void move_jet1()
{
	//int j=0;
	glPushMatrix();
		glTranslatef(mov_jet2-800,0,0);
		indian_jet();
		flight_name();
		//missile();
		glPopMatrix();

	glPushMatrix();
		glTranslatef(mov_jet1-200,0,0);
		pakistan_jet();
		pak_flight_name();
	glPopMatrix();
	if(mov_jet1>=675)
		flag=5;
	if(mov_jet1>=670)
	{
		glLoadIdentity();
                glPushMatrix();
                glTranslatef(50,500,0);
                glScalef(1.5,1.5,0);
                explosion();
                glPopMatrix();
	}
	if(mov_jet1>=675)
		flag=5;

	
	
}
void indian_jet()
{
	glColor3f(1,0.45,0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(780-t,950);//A
		
		glVertex2f(670-t,950);//C
		glVertex2f(620-t,880);//D
		glVertex2f(570-t,880);//E
		glVertex2f(600-t,935);//F
		glVertex2f(565-t,950);//G
		glVertex2f(500-t,910);//H
		//glVertex2f(530,900);//h
		glVertex2f(520-t,950);//I
		//glVertex2f(520,935);//J
		//glVertex2f(520,950);//j
		glVertex2f(500-t,950);//K
		glVertex2f(500-t,975);//L
		glVertex2f(525-t,975);//M
		glVertex2f(525-t,1000);//N
		glVertex2f(500-t,1025);//O
		glVertex2f(525-t,1025);//P
		glVertex2f(580-t,980);//Q
		glVertex2f(600-t,980);//R
		glVertex2f(600-t,1025);//S
		glVertex2f(630-t,1025);//T
		glVertex2f(670-t,975);//m
		glVertex2f(740-t,975);//B
		//glVertex2f(800,960);//U
		glVertex2f(755-t,960);//V
		//glVertex2f(800,950);//B
		/*glVertex2f(725,965);//W
		glVertex2f(635,1020);//X
		glVertex2f(685,1020);//Y
		glVertex2f(700,1010);//Z
		glVertex2f(635,1003);//a
		glVertex2f(645,1003);//b
		glVertex2f(630,915);//d
		glVertex2f(675,915);//e
		glVertex2f(685,910);//f
		glVertex2f(675,900);//g
		glVertex2f(620,900);//i*/
		

		//A,C,D,E,F,G,H,h,I,J,j,K,L,M,N,O,P,Q,R,Q,S,T,m(670,975),B,U,V,B,A
		
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(500-t,950);//K
		glVertex2f(670-t,950);//C
		glVertex2f(600-t,980);//R
		glVertex2f(670-t,975);//m
		//glVertex2f(525,975);//M
		//glVertex2f(600,980);//R
	glEnd();

}
void pakistan_jet()
{
	int t=350;
	glColor3f(0,1,0.2);
	glBegin(GL_LINE_LOOP);
		glVertex2f(780-t,950);//A
		
		glVertex2f(670-t,950);//C
		glVertex2f(620-t,880);//D
		glVertex2f(570-t,880);//E
		glVertex2f(600-t,935);//F
		glVertex2f(565-t,950);//G
		glVertex2f(500-t,910);//H
		//glVertex2f(530,900);//h
		glVertex2f(520-t,950);//I
		//glVertex2f(520,935);//J
		//glVertex2f(520,950);//j
		glVertex2f(500-t,950);//K
		glVertex2f(500-t,975);//L
		glVertex2f(525-t,975);//M
		glVertex2f(525-t,1000);//N
		glVertex2f(500-t,1025);//O
		glVertex2f(525-t,1025);//P
		glVertex2f(580-t,980);//Q
		glVertex2f(600-t,980);//R
		glVertex2f(600-t,1025);//S
		glVertex2f(630-t,1025);//T
		glVertex2f(670-t,975);//m
		glVertex2f(740-t,975);//B
		//glVertex2f(800,960);//U
		glVertex2f(755-t,960);//V
		//glVertex2f(800,950);//B
		/*glVertex2f(725,965);//W
		glVertex2f(635,1020);//X
		glVertex2f(685,1020);//Y
		glVertex2f(700,1010);//Z
		glVertex2f(635,1003);//a
		glVertex2f(645,1003);//b
		glVertex2f(630,915);//d
		glVertex2f(675,915);//e
		glVertex2f(685,910);//f
		glVertex2f(675,900);//g
		glVertex2f(620,900);//i*/
		

		//A,C,D,E,F,G,H,h,I,J,j,K,L,M,N,O,P,Q,R,Q,S,T,m(670,975),B,U,V,B,A
		
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(500-t,950);//K
		glVertex2f(670-t,950);//C
		glVertex2f(600-t,980);//R
		glVertex2f(670-t,975);//m
		//glVertex2f(525,975);//M
		//glVertex2f(600,980);//R
	glEnd();
}
void explosion()
{
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(300,300);
    glVertex2f(390,280);
    glVertex2f(410,350);
    glVertex2f(425,270);
    glVertex2f(470,300);
    glVertex2f(425,250);
    glVertex2f(470,200);
    glVertex2f(400,200);
    glVertex2f(385,100);
    glVertex2f(360,180);
    glVertex2f(300,90);
    glVertex2f(320,200);
    glVertex2f(290,180);
    glVertex2f(340,240);
    glEnd();
    glColor3f(1,1,1);
    glRasterPos3f(350,250,0);
    for(int k=0;k<strlen(boom);k++)
   {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,boom[k]); 
    }
}
void keys(unsigned char k,int x,int y)
{
	if(k=='x')
		flag=1;
	if(k=='y')
		flag=0;
	//if(k=='z')
		//flag=3;
	if(k=='w'){
		mov_jet+=2;
		mov_jet1+=1;
		mov_jet2+=2;
		}
		
	if(k=='z')
		flag=9;

		
	if(mov_jet>160)
		jj-=1.4;
	glutPostRedisplay();
}
void init()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,900,0,1100);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void jet()
{
	glColor3f(1,0.45,0);
	glBegin(GL_LINE_LOOP);
		glVertex2f(780-t,950);//A
		
		glVertex2f(670-t,950);//C
		glVertex2f(620-t,880);//D
		glVertex2f(570-t,880);//E
		glVertex2f(600-t,935);//F
		glVertex2f(565-t,950);//G
		glVertex2f(500-t,910);//H
		//glVertex2f(530,900);//h
		glVertex2f(520-t,950);//I
		//glVertex2f(520,935);//J
		//glVertex2f(520,950);//j
		glVertex2f(500-t,950);//K
		glVertex2f(500-t,975);//L
		glVertex2f(525-t,975);//M
		glVertex2f(525-t,1000);//N
		glVertex2f(500-t,1025);//O
		glVertex2f(525-t,1025);//P
		glVertex2f(580-t,980);//Q
		glVertex2f(600-t,980);//R
		glVertex2f(600-t,1025);//S
		glVertex2f(630-t,1025);//T
		glVertex2f(670-t,975);//m
		glVertex2f(740-t,975);//B
		//glVertex2f(800,960);//U
		glVertex2f(755-t,960);//V
		//glVertex2f(800,950);//B
		/*glVertex2f(725,965);//W
		glVertex2f(635,1020);//X
		glVertex2f(685,1020);//Y
		glVertex2f(700,1010);//Z
		glVertex2f(635,1003);//a
		glVertex2f(645,1003);//b
		glVertex2f(630,915);//d
		glVertex2f(675,915);//e
		glVertex2f(685,910);//f
		glVertex2f(675,900);//g
		glVertex2f(620,900);//i*/
		

		//A,C,D,E,F,G,H,h,I,J,j,K,L,M,N,O,P,Q,R,Q,S,T,m(670,975),B,U,V,B,A
		
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(500-t,950);//K
		glVertex2f(670-t,950);//C
		glVertex2f(600-t,980);//R
		glVertex2f(670-t,975);//m
		//glVertex2f(525,975);//M
		//glVertex2f(600,980);//R
	glEnd();

}
void move_jet()
{
	int j=0;
	glPushMatrix();
		glTranslatef(mov_jet,0,0);
		jet();
		flight_name();
		//missile();
		glPopMatrix();
	if(mov_jet<=160)
	{
		glPushMatrix();
		glTranslatef(mov_jet,0,0);
		//jet();
		missile();
		glPopMatrix();
	}
	else{
		glPushMatrix();
		/*if(mov_jet==160)
		{
			glRotatef(90,0,1,0);
			missile();
			glRasterPos2f(500,500);
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'A');
		}*/
		glTranslatef(160-jj,jj,0);
		//jet();
		missile();
		glPopMatrix();}
		if(jj<=-290)
		{
			glLoadIdentity();
                glPushMatrix();
                glTranslatef(-400,190,0);
                glScalef(2.5,1.5,0);
                explosion();
                glPopMatrix();
		}
		if(jj<=-483)
		{
			glLoadIdentity();
                glPushMatrix();
                glTranslatef(-150,120,0);
                glScalef(2.5,1.5,0);
                explosion();
                glPopMatrix();
		
		}
		if(jj<=-490){
			flag=3;
			//mov_jet=0;

		}
	
	
}
/*void move_jet_again()
{
	glPushMatrix();
	glTranslatef(mov_jet_again,0,0);
	jet();
	glPopMatrix();
}*/
void building1(){

	//road
	glColor3f(0.6,0.3,0.1);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,100);
		glVertex2f(900,100);
		glVertex2f(900,0);
	glEnd();
	glColor3f(0.7,0.8,0.3);
	glBegin(GL_POLYGON);
		glVertex2f(225,100);//a
		glVertex2f(225,450);//b
		glVertex2f(225,500);//c
		glVertex2f(235,500);//d
		glVertex2f(235,550);//e
		glVertex2f(290,605);//f
		glVertex2f(290,625);//g
		//glVertex2f(300,700);//h
		glVertex2f(305,625);//i
		glVertex2f(305,605);//j
		glVertex2f(365,550);//k
		glVertex2f(365,500);//l
		glVertex2f(375,500);//m
		glVertex2f(375,450);//n
		glVertex2f(375,100);//o
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINE_LOOP);
		glVertex2f(225,100);//a
		glVertex2f(225,450);//b
		glVertex2f(225,500);//c
		glVertex2f(235,500);//d
		glVertex2f(235,550);//e
		glVertex2f(290,605);//f
		glVertex2f(290,625);//g
		//glVertex2f(300,700);//h
		glVertex2f(305,625);//i
		glVertex2f(305,605);//j
		glVertex2f(365,550);//k
		glVertex2f(365,500);//l
		glVertex2f(375,500);//m
		glVertex2f(375,450);//n
		glVertex2f(375,100);//o
	glEnd();
	glLineWidth(5);
	glBegin(GL_LINES);
		glVertex2f(225,450);//b
		glVertex2f(375,450);//n
		glVertex2f(225,500);//c
		glVertex2f(375,500);//m
		glVertex2f(300,700);//h
		glVertex2f(300,625);//h
		glVertex2f(205,550);//e
		glVertex2f(385,550);//k
		glVertex2f(290,605);//f
		glVertex2f(290,550);//f'
		glVertex2f(305,605);//j
		glVertex2f(305,550);//j'
		//ground
		glVertex2f(0,100);//o
		glVertex2f(900,100);//o'
	glEnd();
	
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(240,125);
		glVertex2f(240,150);
		glVertex2f(270,150);
		glVertex2f(270,125);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(285,125);
		glVertex2f(285,150);
		glVertex2f(315,150);
		glVertex2f(315,125);
	glEnd();
	//window3
	glBegin(GL_LINE_LOOP);
		glVertex2f(330,125);
		glVertex2f(330,150);
		glVertex2f(360,150);
		glVertex2f(360,125);
	glEnd();
	
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(240,175);
		glVertex2f(240,200);
		glVertex2f(270,200);
		glVertex2f(270,175);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(285,175);
		glVertex2f(285,200);
		glVertex2f(315,200);
		glVertex2f(315,175);
	glEnd();
	//window3
	glBegin(GL_LINE_LOOP);
		glVertex2f(330,175);
		glVertex2f(330,200);
		glVertex2f(360,200);
		glVertex2f(360,175);
	glEnd();
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(240,225);
		glVertex2f(240,250);
		glVertex2f(270,250);
		glVertex2f(270,225);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(285,225);
		glVertex2f(285,250);
		glVertex2f(315,250);
		glVertex2f(315,225);
	glEnd();
	//window3
	glBegin(GL_LINE_LOOP);
		glVertex2f(330,225);
		glVertex2f(330,250);
		glVertex2f(360,250);
		glVertex2f(360,225);
	glEnd();
	
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(240,275);
		glVertex2f(240,300);
		glVertex2f(270,300);
		glVertex2f(270,275);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(285,275);
		glVertex2f(285,300);
		glVertex2f(315,300);
		glVertex2f(315,275);
	glEnd();
	
	//window3
	glBegin(GL_LINE_LOOP);
		glVertex2f(330,275);
		glVertex2f(330,300);
		glVertex2f(360,300);
		glVertex2f(360,275);
	glEnd();

	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(240,325);
		glVertex2f(240,350);
		glVertex2f(270,350);
		glVertex2f(270,325);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(285,325);
		glVertex2f(285,350);
		glVertex2f(315,350);
		glVertex2f(315,325);
	glEnd();
	//window3
	glBegin(GL_LINE_LOOP);
		glVertex2f(330,325);
		glVertex2f(330,350);
		glVertex2f(360,350);
		glVertex2f(360,325);
	glEnd();

	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(240,375);
		glVertex2f(240,400);
		glVertex2f(270,400);
		glVertex2f(270,375);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(285,375);
		glVertex2f(285,400);
		glVertex2f(315,400);
		glVertex2f(315,375);
	glEnd();
	//window3
	glBegin(GL_LINE_LOOP);
		glVertex2f(330,375);
		glVertex2f(330,400);
		glVertex2f(360,400);
		glVertex2f(360,375);
	glEnd();
	glColor3f(0,0,0);
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(240,125);
		glVertex2f(240,150);
		glVertex2f(270,150);
		glVertex2f(270,125);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(285,125);
		glVertex2f(285,150);
		glVertex2f(315,150);
		glVertex2f(315,125);
	glEnd();
	//window3
	glBegin(GL_POLYGON);
		glVertex2f(330,125);
		glVertex2f(330,150);
		glVertex2f(360,150);
		glVertex2f(360,125);
	glEnd();
	
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(240,175);
		glVertex2f(240,200);
		glVertex2f(270,200);
		glVertex2f(270,175);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(285,175);
		glVertex2f(285,200);
		glVertex2f(315,200);
		glVertex2f(315,175);
	glEnd();
	//window3
	glBegin(GL_POLYGON);
		glVertex2f(330,175);
		glVertex2f(330,200);
		glVertex2f(360,200);
		glVertex2f(360,175);
	glEnd();
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(240,225);
		glVertex2f(240,250);
		glVertex2f(270,250);
		glVertex2f(270,225);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(285,225);
		glVertex2f(285,250);
		glVertex2f(315,250);
		glVertex2f(315,225);
	glEnd();
	//window3
	glBegin(GL_POLYGON);
		glVertex2f(330,225);
		glVertex2f(330,250);
		glVertex2f(360,250);
		glVertex2f(360,225);
	glEnd();
	
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(240,275);
		glVertex2f(240,300);
		glVertex2f(270,300);
		glVertex2f(270,275);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(285,275);
		glVertex2f(285,300);
		glVertex2f(315,300);
		glVertex2f(315,275);
	glEnd();
	
	//window3
	glBegin(GL_POLYGON);
		glVertex2f(330,275);
		glVertex2f(330,300);
		glVertex2f(360,300);
		glVertex2f(360,275);
	glEnd();

	//window1
	glBegin(GL_POLYGON);
		glVertex2f(240,325);
		glVertex2f(240,350);
		glVertex2f(270,350);
		glVertex2f(270,325);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(285,325);
		glVertex2f(285,350);
		glVertex2f(315,350);
		glVertex2f(315,325);
	glEnd();
	//window3
	glBegin(GL_POLYGON);
		glVertex2f(330,325);
		glVertex2f(330,350);
		glVertex2f(360,350);
		glVertex2f(360,325);
	glEnd();

	//window1
	glBegin(GL_POLYGON);
		glVertex2f(240,375);
		glVertex2f(240,400);
		glVertex2f(270,400);
		glVertex2f(270,375);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(285,375);
		glVertex2f(285,400);
		glVertex2f(315,400);
		glVertex2f(315,375);
	glEnd();
	//window3
	glBegin(GL_POLYGON);
		glVertex2f(330,375);
		glVertex2f(330,400);
		glVertex2f(360,400);
		glVertex2f(360,375);
	glEnd();
}
void building2()
{
	glBegin(GL_LINE_LOOP);
		glVertex2f(400,100);//p
		glVertex2f(400,300);//q
		glVertex2f(400,320);//r
		glVertex2f(425,320);//s
		glVertex2f(425,475);//t
		glVertex2f(450,475);//u
		glVertex2f(450,650);//v
		glVertex2f(475,650);//w
		glVertex2f(475,675);//x
		glVertex2f(485,675);//x''
		glVertex2f(485,725);//y
		//glVertex2f(500,790);//z
		glVertex2f(515,725);//a'
		glVertex2f(515,675);//b'
		glVertex2f(525,675);//b''
		glVertex2f(525,650);//c'
		glVertex2f(550,650);//d'
		glVertex2f(550,475);//e'
		glVertex2f(575,475);//f'
		glVertex2f(575,320);//g'
		glVertex2f(600,320);//h'
		glVertex2f(600,300);//i'
		glVertex2f(600,100);//j'
	glEnd();
	glColor3f(0.6,0.7,0.3);
	glBegin(GL_POLYGON);
		glVertex2f(400,100);//p
		glVertex2f(400,320);//r
		glVertex2f(425,320);//s
		glVertex2f(575,320);//g'
		glVertex2f(600,320);//h'
		glVertex2f(600,100);//j'
	glEnd();
	glColor3f(0.6,0.7,0.3);
	glBegin(GL_POLYGON);
		glVertex2f(425,320);//s
		glVertex2f(425,475);//t
		glVertex2f(450,475);//u
		glVertex2f(550,475);//e'
		glVertex2f(575,475);//f'
		glVertex2f(575,320);//g'
	glEnd();
	glColor3f(0.6,0.7,0.3);
	glBegin(GL_POLYGON);
		glVertex2f(450,475);//u
		glVertex2f(450,650);//v
		glVertex2f(550,650);//d'
		glVertex2f(550,475);//e'
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2f(475,650);//w
		glVertex2f(475,675);//x
		glVertex2f(525,675);//b''
		glVertex2f(525,650);//c'
	glEnd();
		
	glBegin(GL_POLYGON);
		glVertex2f(485,675);//x''
		glVertex2f(485,725);//y
		glVertex2f(515,725);//a'
		glVertex2f(515,675);//b'
	glEnd();

	glColor3f(0,0,0);
	
	glBegin(GL_LINES);
		glVertex2f(500,725);//a'
		glVertex2f(500,790);//z
		glVertex2f(485,675);//x''
		glVertex2f(525,675);//b''
		glVertex2f(450,650);//v
		glVertex2f(550,650);//d'
		glVertex2f(450,475);//u
		glVertex2f(550,475);//e'
		glVertex2f(425,320);//s
		glVertex2f(575,320);//g'
		glVertex2f(400,300);//q
		glVertex2f(600,300);//i'
	glEnd();
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(425,150);
		glVertex2f(425,175);
		glVertex2f(450,175);
		glVertex2f(450,150);
	glEnd();
	//WINDOW2
	glBegin(GL_LINE_LOOP);
		glVertex2f(475,150);
		glVertex2f(475,175);
		glVertex2f(500,175);
		glVertex2f(500,150);
	glEnd();
	//window3
	glBegin(GL_LINE_LOOP);
		glVertex2f(525,150);
		glVertex2f(525,175);
		glVertex2f(550,175);
		glVertex2f(550,150);
	glEnd();
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(425,200);
		glVertex2f(425,225);
		glVertex2f(450,225);
		glVertex2f(450,200);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(475,200);
		glVertex2f(475,225);
		glVertex2f(500,225);
		glVertex2f(500,200);
	glEnd();
	//window3
	glBegin(GL_LINE_LOOP);
		glVertex2f(525,200);
		glVertex2f(525,225);
		glVertex2f(550,225);
		glVertex2f(550,200);
	glEnd();
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(425,250);
		glVertex2f(425,275);
		glVertex2f(450,275);
		glVertex2f(450,250);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(475,250);
		glVertex2f(475,275);
		glVertex2f(500,275);
		glVertex2f(500,250);
	glEnd();
	//window3
	glBegin(GL_LINE_LOOP);
		glVertex2f(525,250);
		glVertex2f(525,275);
		glVertex2f(550,275);
		glVertex2f(550,250);
	glEnd();
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(450,350);
		glVertex2f(450,375);
		glVertex2f(475,375);
		glVertex2f(475,350);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(500,350);
		glVertex2f(500,375);
		glVertex2f(525,375);
		glVertex2f(525,350);
	glEnd();
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(450,400);
		glVertex2f(450,425);
		glVertex2f(475,425);
		glVertex2f(475,400);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(500,400);
		glVertex2f(500,425);
		glVertex2f(525,425);
		glVertex2f(525,400);
	glEnd();
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(465,525);
		glVertex2f(485,525);
		glVertex2f(485,550);
		glVertex2f(465,550);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(515,525);
		glVertex2f(515,550);
		glVertex2f(535,550);
		glVertex2f(535,525);
	glEnd();
	//window1
	glBegin(GL_LINE_LOOP);
		glVertex2f(465,575);
		glVertex2f(485,575);
		glVertex2f(485,600);
		glVertex2f(465,600);
	glEnd();
	//window2
	glBegin(GL_LINE_LOOP);
		glVertex2f(515,575);
		glVertex2f(515,600);
		glVertex2f(535,600);
		glVertex2f(535,575);
	glEnd();


	glColor3f(0,0,0);
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(425,150);
		glVertex2f(425,175);
		glVertex2f(450,175);
		glVertex2f(450,150);
	glEnd();
	//WINDOW2
	glBegin(GL_POLYGON);
		glVertex2f(475,150);
		glVertex2f(475,175);
		glVertex2f(500,175);
		glVertex2f(500,150);
	glEnd();
	//window3
	glBegin(GL_POLYGON);
		glVertex2f(525,150);
		glVertex2f(525,175);
		glVertex2f(550,175);
		glVertex2f(550,150);
	glEnd();
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(425,200);
		glVertex2f(425,225);
		glVertex2f(450,225);
		glVertex2f(450,200);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(475,200);
		glVertex2f(475,225);
		glVertex2f(500,225);
		glVertex2f(500,200);
	glEnd();
	//window3
	glBegin(GL_POLYGON);
		glVertex2f(525,200);
		glVertex2f(525,225);
		glVertex2f(550,225);
		glVertex2f(550,200);
	glEnd();
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(425,250);
		glVertex2f(425,275);
		glVertex2f(450,275);
		glVertex2f(450,250);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(475,250);
		glVertex2f(475,275);
		glVertex2f(500,275);
		glVertex2f(500,250);
	glEnd();
	//window3
	glBegin(GL_POLYGON);
		glVertex2f(525,250);
		glVertex2f(525,275);
		glVertex2f(550,275);
		glVertex2f(550,250);
	glEnd();
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(450,350);
		glVertex2f(450,375);
		glVertex2f(475,375);
		glVertex2f(475,350);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(500,350);
		glVertex2f(500,375);
		glVertex2f(525,375);
		glVertex2f(525,350);
	glEnd();
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(450,400);
		glVertex2f(450,425);
		glVertex2f(475,425);
		glVertex2f(475,400);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(500,400);
		glVertex2f(500,425);
		glVertex2f(525,425);
		glVertex2f(525,400);
	glEnd();
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(465,525);
		glVertex2f(485,525);
		glVertex2f(485,550);
		glVertex2f(465,550);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(515,525);
		glVertex2f(515,550);
		glVertex2f(535,550);
		glVertex2f(535,525);
	glEnd();
	//window1
	glBegin(GL_POLYGON);
		glVertex2f(465,575);
		glVertex2f(485,575);
		glVertex2f(485,600);
		glVertex2f(465,600);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
		glVertex2f(515,575);
		glVertex2f(515,600);
		glVertex2f(535,600);
		glVertex2f(535,575);
	glEnd();
	
	
}
void building3()
{
	glColor3f(0.45,1,0.3);
	glBegin(GL_POLYGON);
		glVertex2f(650,100);//k'
		glVertex2f(650,200);//l'
		glVertex2f(650,500);//m'
		glVertex2f(675,500);//m''
		glVertex2f(675,550);//n'
		glVertex2f(680,550);//o''
		glVertex2f(680,580);//o'
		glVertex2f(815,580);//p'
		glVertex2f(815,570);//q'
		glVertex2f(815,550);//r'
		glVertex2f(825,550);//s'
		glVertex2f(825,500);//t'
		glVertex2f(850,500);//u'
		glVertex2f(850,200);//v'
		glVertex2f(850,100);//w'
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(650,200);//l'
		glVertex2f(850,200);//v'
		glVertex2f(650,500);//m'
		glVertex2f(850,500);//u'
		glVertex2f(675,550);//n'
		glVertex2f(825,550);//s'
		glVertex2f(700,100);
		glVertex2f(700,175);
		glVertex2f(750,100);
		glVertex2f(750,175);
		glVertex2f(790,100);
		glVertex2f(790,175);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
		glVertex2f(675,100);
		glVertex2f(675,175);
		glVertex2f(825,175);
		glVertex2f(825,100);
	glEnd();
	//windows1
	glBegin(GL_POLYGON);
		glVertex2f(675,420);
		glVertex2f(675,440);
		glVertex2f(705,440);	
		glVertex2f(705,420);
	glEnd();
	//windows2
	glBegin(GL_POLYGON);
		glVertex2f(715,420);
		glVertex2f(715,440);
		glVertex2f(745,440);	
		glVertex2f(745,420);
	glEnd();
	//windows3
	glBegin(GL_POLYGON);
		glVertex2f(755,420);
		glVertex2f(755,440);
		glVertex2f(785,440);	
		glVertex2f(785,420);
	glEnd();
	//windows4
	glBegin(GL_POLYGON);
		glVertex2f(795,420);
		glVertex2f(795,440);
		glVertex2f(825,440);	
		glVertex2f(825,420);
	glEnd();
	//windows1
	glBegin(GL_POLYGON);
		glVertex2f(675,370);
		glVertex2f(675,390);
		glVertex2f(705,390);	
		glVertex2f(705,370);
	glEnd();
	//windows2
	glBegin(GL_POLYGON);
		glVertex2f(715,370);
		glVertex2f(715,390);
		glVertex2f(745,390);	
		glVertex2f(745,370);
	glEnd();
	//windows3
	glBegin(GL_POLYGON);
		glVertex2f(755,370);
		glVertex2f(755,390);
		glVertex2f(785,390);	
		glVertex2f(785,370);
	glEnd();
	//windows4
	glBegin(GL_POLYGON);
		glVertex2f(795,370);
		glVertex2f(795,390);
		glVertex2f(825,390);	
		glVertex2f(825,370);
	glEnd();
	//windows1
	glBegin(GL_POLYGON);
		glVertex2f(675,320);
		glVertex2f(675,340);
		glVertex2f(705,340);	
		glVertex2f(705,320);
	glEnd();
	//windows2
	glBegin(GL_POLYGON);
		glVertex2f(715,320);
		glVertex2f(715,340);
		glVertex2f(745,340);	
		glVertex2f(745,320);
	glEnd();
	//windows3
	glBegin(GL_POLYGON);
		glVertex2f(755,320);
		glVertex2f(755,340);
		glVertex2f(785,340);	
		glVertex2f(785,320);
	glEnd();
	//windows4
	glBegin(GL_POLYGON);
		glVertex2f(795,320);
		glVertex2f(795,340);
		glVertex2f(825,340);	
		glVertex2f(825,320);
	glEnd();
	//windows1
	glBegin(GL_POLYGON);
		glVertex2f(675,270);
		glVertex2f(675,290);
		glVertex2f(705,290);	
		glVertex2f(705,270);
	glEnd();
	//windows2
	glBegin(GL_POLYGON);
		glVertex2f(715,270);
		glVertex2f(715,290);
		glVertex2f(745,290);	
		glVertex2f(745,270);
	glEnd();
	//windows3
	glBegin(GL_POLYGON);
		glVertex2f(755,270);
		glVertex2f(755,290);
		glVertex2f(785,290);	
		glVertex2f(785,270);
	glEnd();
	//windows4
	glBegin(GL_POLYGON);
		glVertex2f(795,270);
		glVertex2f(795,290);
		glVertex2f(825,290);	
		glVertex2f(825,270);
	glEnd();
	
}
void move()
{
	
	a=a-0.1;
		
	glutPostRedisplay();
}
	
void missile()
{	//missile1
	glColor3f(0.6,0.8,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(645-t,915);//d
		glVertex2f(677-t,885);//e
		glVertex2f(685-t,875);//f
		glVertex2f(670-t,875);//g
		glVertex2f(635-t,900);//h
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(677-t,885);//e
		glVertex2f(670-t,875);//g
		glVertex2f(685-t,1000);//Y
		glVertex2f(680-t,985);//a
	glEnd();
	//missile2
	glBegin(GL_POLYGON);
		glVertex2f(635-t,1020);//X
		glVertex2f(685-t,1000);//Y
		glVertex2f(700-t,985);//Z
		glVertex2f(680-t,985);//a
		glVertex2f(645-t,1003);//b
	glEnd();
	
	glLineWidth(2);
	glColor3f(1,0,0);
	glBegin(GL_LINES);
		glVertex2f(677-t,885);//e
		glVertex2f(670-t,875);//g
		glVertex2f(685-t,1000);//Y
		glVertex2f(680-t,985);//a
	glEnd();
}
void display()
{
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	if(flag==0)
		scene1();
	if(flag==1)
	{
	//glClear(GL_COLOR_BUFFER_BIT);
	
	scene2();
	
	}
	if(flag==3)
	{
		scene3();
	}
	if(flag==5)
		scene4();
	glFlush();
}
void scene1()
{
	glColor3f(1,1,0);
	glRasterPos2f(250,1000);
	for(x=0;a1[x]!='\0';x++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,a1[x]);	
	glRasterPos2f(400,950);
	for(x=0;b[x]!='\0';x++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,b[x]);
	glRasterPos2f(200,750);
		for(x=0;c[x]!='\0';x++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,c[x]);
	glRasterPos2f(200,700);
		for(x=0;d[x]!='\0';x++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,d[x]);
	glRasterPos2f(400,550);
		for(x=0;e[x]!='\0';x++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,e[x]);
	glRasterPos2f(200,200);
		for(x=0;f[x]!='\0';x++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,f[x]);
	glRasterPos2f(200,150);
		for(x=0;g[x]!='\0';x++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,g[x]);
	glRasterPos2f(200,100);
		for(x=0;h[x]!='\0';x++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,h[x]);
	glRasterPos2f(500,150);
		for(x=0;i[x]!='\0';x++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,i[x]);
	glRasterPos2f(500,100);
		for(x=0;j[x]!='\0';x++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,j[x]);
	glRasterPos2f(330,40);
		for(x=0;k[x]!='\0';x++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,k[x]);
			
	
	glutPostRedisplay();
}
void scene2()
{
	building1();
	building2();
	building3();
	
	
	stars();
	group_stars();
	
	move_jet();
	glRasterPos2f(25,700);
		for(x=0;con[x]!='\0';x++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,con[x]);
	
	glutPostRedisplay();
	
}
void main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1400,1200);
	glutCreateWindow("Surgical strike");
	init();
	glutKeyboardFunc(keys);
	glutDisplayFunc(display);
	//glutIdleFunc(move);
	glutMainLoop();
}
void scene3()
{
	stars();
	group_stars();
	move_jet1();
	glColor3f(0.6,0.3,0.1);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,350);
		glVertex2f(1000,350);
		glVertex2f(1000,0);
	glEnd();
	
	glColor3f(0,0.2,2);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,150);
		glVertex2f(1000,150);
		glVertex2f(1000,0);
	glEnd();
	
	glPushMatrix();
		glTranslatef(-200,0,0);
	tree();
	glPopMatrix();
		
	glPushMatrix();
		glTranslatef(200,0,0);
	tree();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(450,0,0);
	tree();
	glPopMatrix();
	tree();
	glPushMatrix();
		glTranslatef(350,0,0);
	tree();
	glPopMatrix();
	
	glColor3f(1,0,0);
	glRasterPos2f(25,540);
		for(x=0;con[x]!='\0';x++)
			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,con[x]);
}
void tree()//the complete tree
{
	glColor3f(0.9,0.2,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(350,325);
	glVertex2f(350,395);
	glVertex2f(365,395);
	glVertex2f(365,325);
	glEnd();
	for(l=0;l<=30;l++)
	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(340,400,l);
		draw_circle(380,400,l);
	}

	for(l=0;l<=25;l++)
	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(350,440,l);
		draw_circle(370,440,l);
	}

	for(l=0;l<=20;l++)
	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(360,465,l);
	}

	
}
void draw_circle(GLint h, GLint k, GLint r)
{
	GLint d=1-r, x=0, y=r;
	while(y>x)
	{
		plotpixels(h,k,x,y);
		if(d<0) d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels(h,k,x,y);
}
void plotpixels(GLint h,GLint k, GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
}
void draw_pixel(GLint cx, GLint cy)
{

	glBegin(GL_POINTS);
		glVertex2i(cx,cy);
	glEnd();
}
void stars()
{

	//glScalef(0.5,0,0);
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);
		glVertex2f(245,885);//a'''235,885
		glVertex2f(250,905);//b'''250,910
		glVertex2f(255,885);//c'''265,885
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glVertex2f(245,900);//x'''235,900
		glVertex2f(255,900);//y'''265,900
		glVertex2f(250,875);//z'''250,875
	glEnd();
}
void scene4()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,0);
	glRasterPos2f(350,500);
	for(x=0;tk[x]!='\0';x++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,tk[x]);
	
	glRasterPos2f(350,400);
	for(x=0;exi[x]!='\0';x++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,exi[x]);	
	
	if(flag==9)
		exit(0);
	
}
void flight_name()
{
	glColor3f(1,1,0);
	glRasterPos2f(15,960);
	for(x=0;msg[x]!='\0';x++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,msg[x]);
}
void pak_flight_name()
{
	glColor3f(0.1,1,0);
	glRasterPos2f(350,960);
	for(x=0;msg1[x]!='\0';x++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,msg1[x]);
}
void group_stars()
{
	glPushMatrix();
		glTranslatef(-50,180,0);
		stars();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(50,180,0);
		stars();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(75,-75,0);
		stars();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(100,-25,0);
		stars();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(300,-15,0);
		stars();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(325,95,0);
		stars();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(385,120,0);
		stars();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(450,87,0);
		stars();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(525,113,0);
		stars();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(565,-12,0);
		stars();
	glPopMatrix();
}

