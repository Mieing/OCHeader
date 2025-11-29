@interface HighpassFilter : AccelerometerFilter {
    double lastX;
    double lastY;
    double lastZ;
    BOOL hasXCrash;
    BOOL hasYCrash;
    BOOL hasZCrash;
    int xCountDown;
    int yCountDown;
    int zCountDown;
}

- (BOOL)addAccelerationByX:(double)a0 Y:(double)a1 Z:(double)a2;

@end
