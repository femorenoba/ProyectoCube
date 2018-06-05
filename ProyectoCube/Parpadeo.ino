class Parpadeo : public Led {
  private:
    int randomPiso ;
    int randomColumna;
    int tiempo;
  public:
    Parpadeo(int , int , int, int );
    ~Parpadeo(); // Destructor
    void parpadeorandom();
    void apagarColumna();
};
Parpadeo :: Parpadeo (int _entrada, int _randomPiso, int _randomColumna, int _tiempo): Led(_entrada) {
  randomPiso = _randomPiso;
  randomColumna = _randomColumna;
  tiempo = _tiempo;
}
Parpadeo::~Parpadeo() {} // Destructor clase Parpadeo

void Parpadeo :: parpadeorandom() {

  digitalWrite(randomPiso, 1);
  digitalWrite(randomColumna, 0);
  delay(tiempo);
  digitalWrite(randomPiso, 0);
  digitalWrite(randomColumna, 1);
  delay(tiempo);
}

void Parpadeo :: apagarColumna() {
  Led ::apagarColumna();
  digitalWrite(randomPiso, 1);
}
