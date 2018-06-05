Led *column1[16] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A5, A4};
Led *layer1[4] = {A3, A2, A1, A0}; ;
Parpadeo *parpadeo;
SucesionF *fibonacci;
SpiralF *spiral;
boolean columnas = false;

void setup() {
  for (int i = 0; i < 4; i++) {
    layer1[i] = new Led(layer1[i]);
    pinMode(layer1[i] -> _entrada(), OUTPUT);  //setting layers to output
  }

  for (int i = 0; i < 16; i++) {
    column1[i] = new Led(column1[i]);
    pinMode( column1[i]-> _entrada(), OUTPUT);  //setting rows to ouput
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 16; j++) {
      fibonacci = new SucesionF(column1[i], layer1[j], 100);
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 16; j++) {
      spiral = new SpiralF(column1[i], layer1[j], 100);
    }
  }
}
void loop() {


  for (int i = 0; i < 4; i++) {
    layer1 [i] -> prenderPiso();
  }

  if (columnas == false) {
    for (int i = 0; i < 16; i++) {
      column1[i] -> prenderColumna();
    }
    delay(3000);
    columnas = true;
  }

  if (columnas == true) {
    for (int i = 0; i < 16; i++) {
      column1[i] -> apagarColumna();
    }
    delay(1000);
  }

  for (int i = 0; i < 2; i++) {
    fibonacci -> mostrarSucesionF();
  }
  delay(1000);

 /* for (int i = 0; i < 2; i++) {
    spiral -> mostrarSpiralF();
  }
  delay(1000);
*/

  for (int i = 0; i < 30; i++) {
    parpadeo = new Parpadeo(column1[i], random (0, 4), random (0, 16), 150);
    parpadeo -> parpadeorandom();
    parpadeo -> apagarColumna();
  }
}
