float temps =0;

void setup() {
 
  Serial.begin(9600);
  //À changer selon les besoins
  pinMode(A4, INPUT);
  
}

void loop() {

  temps=millis();
  //temps
  Serial.print(temps/1000);
  //Séparateur
  Serial.print("  ");
  //mettre ici la valeur que l'on veut envoyer
  Serial.println(analogRead(A4));
  //on peut changer le délai (ici en millisecondes). 
  //Attention, cela ne correspondra pas exactement à l'intervalle de temps entre deux mesures.
  delay(250);
}
