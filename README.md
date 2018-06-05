# ProyectoCube

# Integrantes
- Fernando Moreno Bautista.

- Sergio Andres Gonzalez Martinez.

# Objetivos
- Crear un programa con ayuda de Arduino para representar mediante leds diferentes series o cualquier tipo de idea.
- Examinar a fondo el lenguaje C, C++ y el funcionamiento de Arduino para tener exito en el desarrollo del proyecto.
- Mantener una estructura en cada una de las clases

# Diseño de clases
Se diseñaron 4 clases:
- La primera llamada Led la cual esta compuesta de un atributo entrada
  los metodos principales para inicializar los OUTPUTS del cubo, con su respectivo destructor
  y una funcion polimorfica llamada apagarColumna.
  
- La segunda llamada Parpadeo la cual hereda de la anterior Led, la cual recibe
  3 atributos, y sus metodos principales hacen que esto sea random, con su respectivo destructor, 
  ademas usamos la funcion polimorfica para ayudarnos.

- La tercera llamada SucesionF la cual recibe 3 atributos, sus metodos nos permiten mostrar la 
  sucesion en codigo binario, y darle un determinado tiempo, esta es una clase aparte y se podria 
  representar asi cualquier serie.

- La cuarta llamada SpiralF la cual seria otra manera de representar fibonacci pero en la cual tuvimos 
  pequeños problemas, pero que seguia un poco la estructura de la anterior.
 
# Resultados 
Se logro aplicar el concepto de clases y la herencia, sumado a esto se realiza el uso de los polimorfirmos.
Tambien se establece diferentes secuencias para el orden y organizacion de los LEDs a la hora de prender, por ejemplo, la serie de Fibonacci que se utilizo de manera binaria.
# Trabajo futuro 

# Referencias
- https://www.arduino.cc/reference/en/

- https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n)
