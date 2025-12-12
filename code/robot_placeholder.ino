/*
 * Autonomous Robot - Code Placeholder
 * Developer: Fernando Augusto
 * Location: Mozambique
 * 
 * This file will contain the main robot control code.
 * Currently in planning phase - code coming soon!
 */

// PIN DEFINITIONS (PLANNED)
#define MOTOR_LEFT_FWD 5
#define MOTOR_LEFT_REV 6
#define MOTOR_RIGHT_FWD 9
#define MOTOR_RIGHT_REV 10

#define SENSOR_FRONT_TRIG 2
#define SENSOR_FRONT_ECHO 3
#define SENSOR_LEFT_TRIG 4
#define SENSOR_LEFT_ECHO 7
#define SENSOR_IR A0

// ROBOT STATES (PLANNED)
enum RobotState {
  STATE_IDLE,
  STATE_EXPLORE,
  STATE_AVOID,
  STATE_FOLLOW_WALL,
  STATE_RETURN_HOME
};

void setup() {
  // Serial for debugging
  Serial.begin(9600);
  Serial.println("🤖 Autonomous Robot - Initializing");
  Serial.println("👨‍💻 Developer: Fernando Augusto");
  Serial.println("🌍 From: Mozambique");
  Serial.println("🎯 Project: Boston University Application");
  Serial.println("");
  Serial.println("📋 Current Status: Design Phase");
  Serial.println("💡 This code will be implemented as components are acquired");
  Serial.println("🔄 Check GitHub commits for progress updates");
}

void loop() {
  // Placeholder - real implementation coming soon
  Serial.println("Robot logic will go here");
  delay(5000);
}
