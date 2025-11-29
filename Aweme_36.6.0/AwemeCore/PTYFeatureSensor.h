@class CMGyroData, CMMagnetometerData, NSString, CMMotionManager, CMAccelerometerData;

@interface PTYFeatureSensor : NSObject <PTYFeatureSensorProtocol>

@property (retain) CMMotionManager *motionManager;
@property (retain) CMAccelerometerData *cachedAccelerometerData;
@property (retain) CMGyroData *cachedGyroData;
@property (retain) CMMagnetometerData *cachedMagnetometerData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setup:(id)a0;

- (id)magnetometer;
- (void).cxx_destruct;
- (id)init;
- (id)acceleration;
- (id)rotationRate;
- (void)appDidEnterBackground;

@end
