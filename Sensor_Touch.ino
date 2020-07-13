// No se necesita ninguna Librería
const int LED = 3;
const int sensor = 2;
int sensorEstate = 0;    //se emplea para almacenar el estado del boton
int state = 0;           // 0 apagado - 1 encendido
int oldSensorEstate = 0; // antiguo valor del state

void setup(){
  
 pinMode(LED,OUTPUT);
 pinMode(sensor,INPUT); //sensor touch como señal de entrada
 
}

void loop() {
  
  sensorEstate = digitalRead(sensor); // lee el estado del Boton
  
  if ((sensorEstate == HIGH) && (oldSensorEstate == LOW)){
    state=1-state;
    delay(10);
  }
  
  oldSensorEstate = sensorEstate; // valor del antiguo estado
  
  if (state==1){
    
    digitalWrite(LED, HIGH); // enciende el LED
    
  } else{
    digitalWrite(LED,LOW); // apagar el LED
  }
}
