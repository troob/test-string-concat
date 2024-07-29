void setup() {
  Serial.begin(9600);

}

void loop() {
  int arenaCount = 6;
  int blueCount = 3;
  int greenCount = 2;
  int otherCount = 1;
  String title, totNum, blue, bNum, green, gNum, other, oNum;
  
  title = "Arena:\nTotal=";
  totNum = title + arenaCount;
  blue = totNum + "\nBlue=";
  bNum = blue + blueCount;
  green = bNum + "\nGreen=";
  gNum = green + greenCount;
  other = gNum + "\nOther=";
  oNum = other + otherCount;
  Serial.println(oNum);
  
  while (true); //test if this actually halts program
}
