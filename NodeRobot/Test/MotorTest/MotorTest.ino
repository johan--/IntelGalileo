// Shield: DFRduino L289P V 1.1 

int pin_motor_a_dir = 4;
int pin_motor_b_dir = 7;

int pin_motor_a_speed = 5;
int pin_motor_b_speed = 6;

void setup()
{
    pinMode(pin_motor_a_dir, OUTPUT);
    pinMode(pin_motor_b_dir, OUTPUT);
    pinMode(pin_motor_a_speed, OUTPUT);
    pinMode(pin_motor_b_speed, OUTPUT);

    // Stop motors
    digitalWrite(pin_motor_a_speed, 0); 
    digitalWrite(pin_motor_b_speed, 0);     
}

void loop()
{
    // Motor A
    digitalWrite(pin_motor_a_dir, HIGH);    // forward
    analogWrite(pin_motor_a_speed, 255);    // 100% power

    // Motor B
    digitalWrite(pin_motor_b_dir, LOW);     // backward
    analogWrite(pin_motor_b_speed, 128);    // 50% power
}
