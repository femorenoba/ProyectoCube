class Led {
  private:
    int entrada;
  public:
    int _entrada();
    Led(int);
    ~Led(); // Destructor
    void prenderColumna();
    void prenderPiso();
    virtual void apagarColumna();
};

// Constructror clase  led
Led::Led (int _entrada) {
  entrada = _entrada;
}
Led::~Led() {} // Destructor clase led
int Led :: _entrada() {
  return entrada;
}

void Led :: prenderPiso() {
  digitalWrite(entrada, 1);
}

void Led :: prenderColumna() {
  digitalWrite(entrada, 0);
}

void Led :: apagarColumna() {
  digitalWrite(entrada, 1);
}

