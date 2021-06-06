void setup()

{
  for(int p=1; p<=7; p++)
  {
    pinMode(p,OUTPUT);
  }
}

void loop() 
{
 extern char W[10][100];
 extern int seven_seg_disp[10][7];
 
 extern int draw_num[10][10];
 int I[100];
 int h=-1;

 for(int i=0; i<10; i++)
 {
  for(int j=0; j<10; j++)
  {
    h=h+1;
    I[h]=draw_num[i][j];
  }
 }


 float Z[10]={0,0,0,0,0,0,0,0,0,0};

 // Matrix Multiplication Z=W*I
 for(int n1=0; n1<10; n1++)
 {
  for(int nx=0; nx<100; nx++)
  {
    //Z[n1] = Z[n1] + W[n1][nx]*I[nx];
    
    if(I[nx]==1)
      Z[n1] = Z[n1] + W[n1][nx];
  }
 }

 // Finding Maximum value and its index
 int M=0;
 int index;
 for(int k=0; k<10; k++)
 {
    if(M<=Z[k] & Z[k]>0)
    {
        M=Z[k];
        index=k;
    }
 }

 for(int d=0; d<7; d++)
 {
  if(seven_seg_disp[index][d]==0)
  {
    digitalWrite(d+1, HIGH);
  }
 } 
 delay(1000);
}
