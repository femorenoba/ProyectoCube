class SucesionF {
  private:
    int entrada;
    int valor;
    int tiempo;
  public:
    SucesionF(int, int, int);
    ~SucesionF(); // Destructor
    void mostrarSucesionF();
};

SucesionF :: SucesionF(int _entrada, int _valor, int _tiempo) {
  entrada = _entrada;
  valor = _valor;
  tiempo = _tiempo;
}

SucesionF::~SucesionF() {} // Destructor clase led

void SucesionF :: mostrarSucesionF() {

  digitalWrite(valor, 1);
  int piso[4] = {A3, A2, A1, A0};
  int column[16] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A5, A4};

  for(int i = 0; i <4; i++){
    digitalWrite(column[i], 0);
  }

  for (int i = 0; i < 5; i++) {
    digitalWrite(piso[i], 1);
    delay(tiempo);
  }

  for (int i = 0; i < 2; i++) {
    digitalWrite(column[13], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[13], 1);
    delay(tiempo);
  }

  for (int i = 0; i < 2; i++) {
    digitalWrite(column[12], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[12], 1);
    delay(tiempo);
  }

  for (int i = 0; i < 2; i++) {
    digitalWrite(column[13], 0);
    digitalWrite(column[12], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[13], 1);
    digitalWrite(column[12], 1);
    delay(tiempo);
  }

  for (int i = 0; i < 2; i++) {
    digitalWrite(column[14], 0);
    digitalWrite(column[13], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[14], 1);
    digitalWrite(column[13], 1);
    delay(tiempo);
  }

  for (int i = 0; i < 2; i++) {
    digitalWrite(column[15], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[15], 1);
    delay(tiempo);
  }

  for (int i = 0; i < 2; i++) {
    digitalWrite(column[15], 0);
    digitalWrite(column[14], 0);
    digitalWrite(column[13], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[15], 1);
    digitalWrite(column[14], 1);
    digitalWrite(column[13], 1);
    delay(tiempo);
  }

  for (int i = 0; i < 2; i++) {
    digitalWrite(column[8], 0);
    digitalWrite(column[14], 0);
    digitalWrite(column[13], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[8], 1);
    digitalWrite(column[14], 1);
    digitalWrite(column[13], 1);
    delay(tiempo);
  }

  for (int i = 0; i < 2; i++) {
    digitalWrite(column[9], 0);
    digitalWrite(column[12], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[9], 1);
    digitalWrite(column[12], 1);
    delay(tiempo);
  }

  for (int i = 0; i < 2; i++) {
    digitalWrite(column[9], 0);
    digitalWrite(column[8], 0);
    digitalWrite(column[13], 0);
    digitalWrite(column[14], 0);
    digitalWrite(column[12], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[8], 1);
    digitalWrite(column[9], 1);
    digitalWrite(column[13], 1);
    digitalWrite(column[14], 1);
    digitalWrite(column[12], 1);
    delay(tiempo);
  }

  for (int i = 0; i < 2; i++) {
    digitalWrite(column[10], 0);
    digitalWrite(column[8], 0);
    digitalWrite(column[13], 0);
    digitalWrite(column[15], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[8], 1);
    digitalWrite(column[10], 1);
    digitalWrite(column[13], 1);
    digitalWrite(column[15], 1);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[8], 0);
    digitalWrite(column[11], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[8], 1);
    digitalWrite(column[11], 1);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[11], 0);
    digitalWrite(column[8], 0);
    digitalWrite(column[10], 0);
    digitalWrite(column[15], 0);
    digitalWrite(column[12], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[11], 1);
    digitalWrite(column[9], 1);
    digitalWrite(column[10], 1);
    digitalWrite(column[15], 1);
    digitalWrite(column[12], 1);
    delay(tiempo);
  }
   for (int i = 0; i < 2; i++) {
    digitalWrite(column[4], 0);
    digitalWrite(column[10], 0);
    digitalWrite(column[9], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[4], 1);
    digitalWrite(column[10], 1);
    digitalWrite(column[9], 1);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[5], 0);
    digitalWrite(column[10], 0);
    digitalWrite(column[9], 0);
    digitalWrite(column[14], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[4], 1);
    digitalWrite(column[10], 1);
    digitalWrite(column[9], 1);
    digitalWrite(column[14], 1);
    delay(tiempo);
  }
   for (int i = 0; i < 2; i++) {
    digitalWrite(column[5], 0);
    digitalWrite(column[4], 0);
    digitalWrite(column[10], 0);
    digitalWrite(column[12], 0);
    digitalWrite(column[13], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[4], 1);
    digitalWrite(column[5], 1);
    digitalWrite(column[10], 1);
    digitalWrite(column[12], 1);
    digitalWrite(column[13], 1);
    delay(tiempo);
  }
   for (int i = 0; i < 2; i++) {
    digitalWrite(column[6], 0);
    digitalWrite(column[5], 0);
    digitalWrite(column[9], 0);
    digitalWrite(column[12], 0);
    delay(tiempo);
  }
  for (int i = 0; i < 2; i++) {
    digitalWrite(column[6], 1);
    digitalWrite(column[5], 1);
    digitalWrite(column[9], 1);
    digitalWrite(column[12], 1);
    delay(tiempo);
  }
}
