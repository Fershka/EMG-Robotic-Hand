float sensor;
unsigned long tiempoActualTemp, tiempoAnteriorTemp = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {

  tiempoActualTemp = millis(); 

  if (tiempoActualTemp - tiempoAnteriorTemp >= 2) { //Tiempo en milisegundos
    sensor = analogRead(A0);
    Serial.println(sensor);

    tiempoAnteriorTemp = tiempoActualTemp; 
  }
}
