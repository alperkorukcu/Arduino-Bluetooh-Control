char data = 0;            //Gelen datayı saklamak için gereken değişken
void setup()
{
    Serial.begin(9600);   //Seri iletişim başlıyor                               
    pinMode(13, OUTPUT);  //13 numaralı pin çıkış olarak ayarlandı
}
void loop()
{
   if(Serial.available() > 0)      // Data gelmiş mi?
   {
      data = Serial.read();        //Gelen datayı oku ve data değişkenine ata
      Serial.print(data);          //Datanın değerini serial monitorde yazdır
      Serial.print("\n");        
      if(data == '1')              // Data 1 mi?
         digitalWrite(13, HIGH);   //Öyleyse LED'i aç
      else if(data == '0')         //  Data 0 mı?
         digitalWrite(13, LOW);    //Öyleyse LED'i kapat
   }
}
