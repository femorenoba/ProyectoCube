class SpiralF : public Led {
  private:
    int inicio;
    int tiempo;
  public:
    SpiralF(int, int, int);
    ~SpiralF(); // Destructor
    void mostrarSpiralF();
};

SpiralF :: SpiralF(int _entrada, int _inicio, int _tiempo) : Led(_entrada)  {

  inicio = _inicio;
  tiempo = _tiempo;
}

SpiralF::~SpiralF() {} // Destructor clase Spiral

void SpiralF :: mostrarSpiralF() {

  digitalWrite(inicio, 0);
  int piso[4] = {A3, A2, A1, A0};
  int column[16] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A5, A4};

  for (int i = 0; i < 6; i++)
  {
    digitalWrite(column[0], 1);
    delay(tiempo);
    digitalWrite(column[1], 1);
    delay(tiempo);
    digitalWrite(column[2], 1);
    delay(tiempo);
    digitalWrite(column[3], 1);
    delay(tiempo);
    digitalWrite(column[7], 1);
    delay(tiempo);
    digitalWrite(column[11], 1);
    delay(tiempo);
    digitalWrite(column[15], 1);
    delay(tiempo);
    digitalWrite(column[14], 1);
    delay(tiempo);
    digitalWrite(column[13], 1);
    delay(tiempo);
    digitalWrite(column[12], 1);
    delay(tiempo);
    digitalWrite(column[8], 1);
    delay(tiempo);
    digitalWrite(column[4], 1);
    delay(tiempo);
    digitalWrite(column[5], 1);
    delay(tiempo);
    digitalWrite(column[6], 1);
    delay(tiempo);
    digitalWrite(column[10], 1);
    delay(tiempo);
    digitalWrite(column[9], 1);
    delay(tiempo);

  }
}
