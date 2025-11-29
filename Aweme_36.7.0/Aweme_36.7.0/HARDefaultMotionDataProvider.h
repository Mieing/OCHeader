@class NSString, CMMotionManager;

@interface HARDefaultMotionDataProvider : NSObject <HARMotionDataProvider>

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)startAccelerometerUpdates;
- (void)startMagnetometerUpdates;
- (id)init;
- (void)stopGyroUpdates;
- (void)stopMagnetometerUpdates;
- (BOOL)isMagnetometerAvailable;
- (id)accelerometerData;
- (void)startGyroUpdates;
- (id)gyroData;
- (void)stopAccelerometerUpdates;
- (BOOL)isGyroAvailable;
- (id)magnetometerData;
- (BOOL)isAccelerometerAvailable;

@end
