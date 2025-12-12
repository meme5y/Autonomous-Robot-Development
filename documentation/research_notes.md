# Research Notes - Autonomous Robotics

## Date: $(date +%d/%m/%Y)

## Today's Research Questions:
1. What's the minimum sensor set for basic obstacle avoidance?
2. How to implement wall-following with 2 sensors?
3. Power requirements for continuous operation?

## Findings:
### 1. Sensor Minimums:
- 2x ultrasonic sensors (front corners)
- 1x IR sensor for close-range backup
- This provides ~120° coverage

### 2. Wall-Following Algorithms:
**Simplest:** Left-wall hugging algorithm
- Keep left sensor at constant distance
- Adjust right motor speed to maintain

### 3. Power Calculations:
- Arduino Uno: 50mA (normal), 15mA (sleep)
- 2x DC motors: 200-500mA each under load
- Sensors: 15mA each
- **Total estimated:** 500-1000mA
- **Battery needed:** 2000mAh for 2-4 hours

## Open Questions:
1. How to handle sensor noise without filters?
2. Best motor control library for smooth movement?
3. Emergency stop mechanism?

## Next Research Topics:
- PID control for motor precision
- Sensor data fusion techniques
- Low-power sleep modes
