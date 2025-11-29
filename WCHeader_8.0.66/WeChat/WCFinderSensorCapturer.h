@class MMTimer, CMMotionManager, NSMutableArray;

@interface WCFinderSensorCapturer : NSObject <WCProximityStateRecognizerDelegate>

@property (retain, nonatomic) CMMotionManager *motionMgr;
@property (retain, nonatomic) NSMutableArray *acceDataArray;
@property (retain, nonatomic) NSMutableArray *gyroDataArray;
@property (retain, nonatomic) NSMutableArray *magnDataArray;
@property (retain, nonatomic) NSMutableArray *proximityStateList;
@property (retain, nonatomic) NSMutableArray *screenBrightnessList;
@property (nonatomic) unsigned long long lastReportTime;
@property (nonatomic) unsigned long long minCount;
@property (retain, nonatomic) MMTimer *timer;

+ (id)getClientAudioInfo;

- (id)init;
- (void)captureDataWithInterval:(double)a0 minCount:(unsigned long long)a1;
- (void)captureDataWithOptions:(unsigned long long)a0 interval:(double)a1 minCount:(unsigned long long)a2;
- (void)startAccelerometerUpdates;
- (void)stopAccelerometerUpdates;
- (void)startGyroUpdates;
- (void)stopGyroUpdates;
- (void)startMagnetometerUpdates;
- (void)stopMagnetometerUpdates;
- (void)startProximityUpdates;
- (void)stopProximityUpdates;
- (void)startBrightnessMonitor;
- (void)stopBrightnessMonitor;
- (void)brightnessDidChange:(id)a0;
- (void)stopCaptureDataIfOk;
- (void)processSensorData:(id)a0;
- (void)report;
- (void)reset;
- (void)onProximityStateChangeToCloseEar;
- (void)onProximityStateChangeToAwayFromEar;
- (void).cxx_destruct;

@end
