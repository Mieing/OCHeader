@class CMMotionManager, CMAccelerometerData;

@interface MMRotationDetector : NSObject

@property (retain, nonatomic) CMAccelerometerData *accelerometerData;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) CMMotionManager *motionMgr;
@property (nonatomic) BOOL shouldDisableAccelerationDetectLog;
@property (nonatomic) double dividingWhenPortraitOrientation;
@property (nonatomic) double dividingWhenLandscapeOrientation;

+ (id)sharedDetector;

- (id)init;
- (void)resetOptions;
- (void)beginRotationDetection;
- (void)endRotationDetection;
- (long long)orientationFromAccelerometerData:(struct { double x0; double x1; double x2; })a0;
- (long long)safeGetCurrentDeviceOrientation;
- (void).cxx_destruct;

@end
