@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BDUGLuckyDogCalibratorManagerV2 : NSObject <BDUGLuckyCleanCacheDelegateProtocol, BDUGLuckyDogCalibratorProtocol, BDUGServiceABTestProtocol>

@property (nonatomic) double timeInterval;
@property (nonatomic) double lastServerTime;
@property double hostTimeInterval;
@property (nonatomic) BOOL hasUpdated;
@property (nonatomic) BOOL hasTrySetHostTime;
@property (nonatomic) BOOL enableLowPrecisionTimeInterval;
@property (nonatomic) BOOL isBackground;
@property double lowPrecisionTimeInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL isTimerRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sdkSettingsUpdate;
+ (double)fallbackElapsedBootTime;
+ (double)elapsedBootTime;
+ (void)preStartupCalibratorModule;
+ (id)ABSetting;
+ (unsigned long long)effectTime;
+ (BOOL)isDefaultABTest;
+ (void)onCleanCache;
+ (id)sharedInstance;
+ (id)moduleName;
+ (double)systemBootTime;
+ (id)serviceProtocol;

- (id)accurateCurrentServerDate;
- (double)currentServerTimestampInMS;
- (void)updateServerTime:(double)a0 source:(id)a1 extra:(id)a2;
- (void)__setupNotification;
- (void)__recoverServerTimeFromCache;
- (id)__highPrecisionAccurateCurrentServerDate;
- (void)__updateLowPrecisionTimeInterval:(double)a0;
- (void)__onAppWillResignActive:(id)a0;
- (void)__onAppDidBecomeActive:(id)a0;
- (void)__clearCachedTime;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAvailable;
- (void)dealloc;

@end
