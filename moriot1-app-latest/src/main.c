//MongooseOS
#include <fw/src/mgos.h>

//LED(FULL)
#include <NS_Rainbow.h>
#define PIN 5
#define N_CELL 1
NS_Rainbow ns_cell = NS_Rainbow(N_CELL, PIN);

//gyro
#include <Wire.h>
#include <I2Cdev.h>
#include <MPU6050.h>
MPU6050 accelgyro;
int16_t ax, ay, az;
int16_t gx, gy, gz;

enum mgos_app_init_result mgos_app_init(void) {
  return MGOS_APP_INIT_SUCCESS;
}

void setup() {
  Wire.begin();
  Serial.begin(9600);

  delay(30);
  ns_cell.begin();
  ns_cell.setBrightness(50);  // range: 0 ~ 255, default: 255
}
  void loop() {
    getmotion();
    Serial.print("snval=");
    Serial.print(ax);
    Serial.print(",");
    Serial.print(ay);
    Serial.print(",");
    Serial.println(az);
  } //void loop end

 void getmotion(){
  MPU6050 accelgyro;
  accelgyro.initialize();
  accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
        ax = ax / 100 * 2;
        ay = ay / 100 * 2;
        az = az / 100 * 2;
        gx = gx / 100 * 2;
        gy = gy / 100 * 2;
        gz = gz / 100 * 2;
        delay(100);
 }
 void color(){
      unsigned short n = 0;     // n: n-th Cell, 0 ~ (N_CELL-1)
    ns_cell.setBrightness(50);  // range: 0 ~ 255, default: 255
      //blynk_fullLED
    if ((stopval[0] > -50 && stopval[0] < 25) && (stopval[1] > -50 && stopval[1] < 30) && (stopval[2] > 300 && stopval[2] < 360 )) { //1
      ns_cell.setColor(n, 255, 255, 255);      // white
      ns_cell.show();
    }
    else if ((stopval[0] > 250 && stopval[0] < 330 ) && (stopval[1] > 130 && stopval[1] < 180)  && (stopval[2] > -60 && stopval[2] < 60)) { //2
      ns_cell.setColor(n, 255, 255,   0);      // Yellow
      ns_cell.show();
    }
    else if ((stopval[0] > -20 && stopval[0] < 300 ) && (stopval[1] > 260 && stopval[1] < 330)  && (stopval[2] > -60 && stopval[2] < 60)) { //3
      ns_cell.setColor(n, 0,   255,   255);      //
      ns_cell.show();
    }
    else if ((stopval[0] > -330 && stopval[0] < -250 ) && (stopval[1] > 140 && stopval[1] < 190)  && (stopval[2] > -60 && stopval[2] < 60)) { //4
      ns_cell.setColor(n, 255,   0,   0);      // red
      ns_cell.show();
    }
    else if ((stopval[0] > -330 && stopval[0] < -250 ) && (stopval[1] > -190 && stopval[1] < -140)  && (stopval[2] > -60 && stopval[2] < 60)) { //5
      ns_cell.setColor(n, 0,   255,   0);      // green
      ns_cell.show();
    }
    else if ((stopval[0] > -20 && stopval[0] < 30 ) && (stopval[1] > -360 && stopval[1] < -260)  && (stopval[2] > -60 && stopval[2] < 60)) { //6
      ns_cell.setColor(n, 0,   0,   255);      // 
      ns_cell.show();
    }
    else if ((stopval[0] > 250 && stopval[0] < 330 ) && (stopval[1] > -180 && stopval[1] < -130)  && (stopval[2] > -60 && stopval[2] < 60)) { //7
      ns_cell.setColor(n, 255,   0,   255);      // 
      ns_cell.show();
    }
    else if ((stopval[0] > -50 && stopval[0] < 50 ) && (stopval[1] > -50 && stopval[1] < 30)  && (stopval[2] > -360 && stopval[2] < -300)) { //8
      ns_cell.setColor(n, 0,   0,   0);      // 
      ns_cell.show();
    }
    else {
      ns_cell.setColor(n, 0,   0,   0);      // 
      ns_cell.show();
    }
 }
