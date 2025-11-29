@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BDUGLuckyDogCalibratorManager : NSObject <BDUGLuckyCleanCacheDelegateProtocol, BDUGLuckyDogCalibratorProtocol, BDUGServiceABTestProtocol>

@property (nonatomic) double serverTimeInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL isTimerRunning;
@property (nonatomic) long long cachedSystemBootTime;
@property (nonatomic) double cachedLocalTime;
@property (nonatomic) double cachedServerTime;
@property (nonatomic) BOOL fromBackground;
@property (nonatomic) double hostTimeInterval;
@property (nonatomic) BOOL hasTrySetHostTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_getValueInDictionary:(id)a0 withKey:(id)a1;
+ (void)registerResponseSerializerBlock;
+ (void)calibrateLocalDateWithResponse:(id)a0;
+ (void)setupCalibratorServerListener;
+ (BOOL)__isV2;
+ (double)fallbackElapsedBootTime;
+ (double)elapsedBootTime;
+ (void)preStartupCalibratorModule;
+ (id)ABSetting;
+ (unsigned long long)effectTime;
+ (BOOL)isDefaultABTest;
+ (void)onCleanCache;
+ (id)sharedInstance;
+ (id)moduleName;
+ (id)serviceProtocol;

- (id)accurateCurrentServerDate;
- (double)currentServerTimestampInMS;
- (void)updateServerTime:(double)a0 source:(id)a1 extra:(id)a2;
- (void)__setupNotification;
- (void)__resetServerTimeWhenColdLaunchIfNeeded;
- (void)__trackWithEvent:(id)a0 params:(id)a1;
- (double)__calculateServerTime;
- (void)__monitorInvalidTimestampWithSource:(id)a0 extra:(id)a1;
- (void)__monitorUnusualChangeFrom:(double)a0 to:(double)a1 source:(id)a2 extra:(id)a3;
- (void)__setupTimer;
- (void)__saveServeTimeToCache;
- (void)calibrateLocalDateWithServerTimeInterval:(double)a0 source:(id)a1 extra:(id)a2;
- (void)__suspendTimer;
- (BOOL)__canClearCache;
- (void)__onAppWillResignActive:(id)a0;
- (void)__onAppDidBecomeActive:(id)a0;
- (void)__clearCachedTime;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAvailable;
- (void)dealloc;

@end
