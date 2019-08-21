void setup() {
  Serial.begin(9600);

}

void loop() {
  int inputA=analogRead(A0);
  int inputB=analogRead(A1);
  int inputC=analogRead(A2);
  int inputD=analogRead(A3);
  String outputA = String(map(inputA,0,1023,0,100));
  String outputB = String(map(inputB,0,1023,0,100));
  String outputC = String(map(inputC,0,1023,0,100));
  String outputD = String(map(inputD,0,1023,0,100));
  //int outputB = map(inputB,0,1023,0,100);
  //int outputC = map(inputC,0,1023,0,100);
  //int outputD = map(inputD,0,1023,0,100);
  String totalOutput="A"+outputA+"B"+outputB+"C"+outputC+"D"+outputD;
  Serial.println(totalOutput);
  delay(250);
}
