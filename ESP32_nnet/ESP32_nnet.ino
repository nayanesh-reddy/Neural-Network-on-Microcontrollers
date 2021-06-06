extern float L1[100][40];
extern float L2[40][20];
extern float L3[20][10];

void setup()
{
  for (int p = 1; p <= 7; p++)
  {
    pinMode(p + 11, OUTPUT);
  }
}

void loop()
{
  extern int seven_seg_disp[10][7];
  extern int draw_num[10][10];
  int I[100];
  int h = -1;
  
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      h = h + 1;
      I[h] = draw_num[i][j];
    }
  }
  
  float Z1[40];
  float Z2[20];
  float Z3[10];
  
  for (char n1 = 0; n1 < 40; n1++) {
    Z1[n1] = 0;
  }
  
  for (char n1 = 0; n1 < 20; n1++) {
    Z2[n1] = 0;
  }
  
  for (char n1 = 0; n1 < 10; n1++) {
    Z3[n1] = 0;
  }
  
  int M = 0;
  int index;
  
  // Matrix Multiplication Z=W*I;
  for (char n1 = 0; n1 < 40; n1++)
  {
    for (char nx = 0; nx < 100; nx++)
    {
      Z1[n1] = Z1[n1] + L1[nx][n1] * I[nx];
    }
    Z1[n1] = max(Z1[n1], 0.0f);
  }
  
  for (char n1 = 0; n1 < 20; n1++) {
    for (char nx = 0; nx < 40; nx++) {
      Z2[n1] = Z2[n1] + L2[nx][n1] * Z1[nx];
    }
    Z2[n1] = max(Z2[n1], 0.0f);
  }
  
  float sum = 0;
  for (char n1 = 0; n1 < 10; n1++) {
    for (char nx = 0; nx < 20; nx++) {
      Z3[n1] = Z3[n1] + L3[nx][n1] * Z2[nx];
    }
    sum += exp(Z3[n1]);
  }
  
  for (int i = 0; i < 10; i++)
    Z3[i] = exp(Z3[i]) / sum; //softmax activation
  float m = 0;
  for (char n1 = 0; n1 < 10; n1++) {
    if (Z3[n1] > m) {
      m = Z3[n1];
      index = n1;
    }
  }
  
  // Finding Maximum value and its index
  for (int d = 0; d < 7; d++)
  {
    if (seven_seg_disp[index][d] != 1)
    {
      digitalWrite(d + 12, HIGH);
    }
  }
  delay(1000);
}
