@class NSObject, CMMotionManager, NSMutableArray, NSInvocation;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDTuringSensorManager : NSObject {
    CMMotionManager *_motionManager;
    NSObject<OS_dispatch_queue> *_sensorQueue;
    NSObject<OS_dispatch_semaphore> *_gyroLock;
    NSObject<OS_dispatch_semaphore> *_accLock;
    NSObject<OS_dispatch_semaphore> *_timestampLock;
    BOOL _isGyroAvailable;
    BOOL _isAccelerometerAvailable;
    BOOL _h5VerifyAccSwitch;
    BOOL _h5VerifyGyroSwitch;
    long long _sensorArrayMaxNum;
}

@property (retain, nonatomic) NSMutableArray *gyroArray;
@property (retain, nonatomic) NSMutableArray *gyroInitialArray;
@property (retain, nonatomic) NSMutableArray *accArray;
@property (retain, nonatomic) NSMutableArray *accInitialArray;
@property (retain, nonatomic) NSMutableArray *backgroundTimestampArray;
@property (retain, nonatomic) NSMutableArray *foregroundTimestampArray;
@property (retain, nonatomic) NSInvocation *allowSensorCollectionInvocation;

+ (id)sharedManager;

- (void)setupSensorManagerWithConfig:(id)a0;
- (void)_setupSettingsWithAppID:(id)a0;
- (id)_invocationForGetBoolWithTarget:(id)a0;
- (double)_checkAndReturnValidUpdateInterval:(double)a0;
- (long long)_checkAndReturnValidArrayMaxNum:(long long)a0;
- (void)_resetData;
- (void)_startSensors;
- (void)_stopSensors;
- (BOOL)_getAppSensorSwitch;
- (void)_handleGyroData:(id)a0;
- (void)_handleAccelerometerData:(id)a0;
- (void)_addTimestampTo:(id)a0;
- (id)_dictionaryFromGyroData:(id)a0;
- (id)_dictionaryFromAccelerometerData:(id)a0;
- (id)_safeReadArray:(id)a0 withLock:(id)a1;
- (id)_readGyroArray;
- (id)_readGyroInitialArray;
- (id)_readAccArray;
- (id)_readAccInitialArray;
- (id)_readBackgroundTimestampArray;
- (id)_readForegroundTimestampArray;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (id)getSensorInfo;
- (void)_setUpdateInterval:(double)a0;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;

@end
