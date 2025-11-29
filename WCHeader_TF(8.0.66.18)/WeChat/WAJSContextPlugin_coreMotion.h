@class NSString, CMMotionManager, TencentLBSLocationManager;

@interface WAJSContextPlugin_coreMotion : WAJSContextPluginBase <TencentLBSLocationManagerDelegate, IWAJSContextPlugin_coreMotion> {
    CMMotionManager *_motionMgr;
    TencentLBSLocationManager *m_locationMgr;
    TencentLBSLocationManager *m_headingMgr;
    unsigned int m_moduleStatus[7];
    long long _lastOrientation;
    double lastTimeUpdateLocation;
}

@property (retain, nonatomic) NSString *mapSubKey;
@property (nonatomic) BOOL enableIndoor;
@property (nonatomic) unsigned long long coordType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (BOOL)isRunningModule:(int)a0;
- (BOOL)startModule:(int)a0;
- (void)setModuleInterval:(double)a0 name:(int)a1;
- (BOOL)isModuleRunning:(int)a0;
- (void)stopModule:(int)a0;
- (void)stopModule:(int)a0 suspend:(BOOL)a1;
- (void)moduleDidStop:(int)a0;
- (BOOL)enableAccelerometer;
- (void)stopAccelerometer;
- (id)getOpenId;
- (BOOL)enableCompass;
- (void)stopCompass;
- (void)updateParamByDic:(id)a0;
- (void)stopPreviousLocationUpdate;
- (BOOL)enableLocationUpdate;
- (BOOL)enableBackgroundLocationUpdate;
- (void)stopLocationUpdate;
- (void)stopBackgroundLocationUpdate;
- (void)forceStopForegroundLocating;
- (void)forceStopBackgroundLocating;
- (void)forceStopLocating;
- (void)tencentLBSLocationManager:(id)a0 didUpdateLocation:(id)a1;
- (void)tencentLBSLocationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)tencentLBSLocationManager:(id)a0 didFailWithError:(id)a1;
- (BOOL)enableDeviceOrientationChangeListening;
- (void)stopDeviceOrientationChangeListening;
- (void)didRotate:(id)a0;
- (BOOL)startDeviceAxisChange;
- (void)stopDeviceAxisChange;
- (BOOL)startGyroscope;
- (void)stopGyroscope;
- (BOOL)isUpdatingLocation;
- (BOOL)isUpdatingForegroundLocation;
- (BOOL)isUpdatingBackgroundLocation;
- (void).cxx_destruct;

@end
