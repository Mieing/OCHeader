@class NSArray, NSTimer, AWELowInteractionConfig, NSDate, CADisplayLink, NSString;

@interface AWENoInteractionDegradationManager : NSObject <AWEMaskWindowHitTestProtocol>

@property (retain, nonatomic) NSArray *configs;
@property (retain, nonatomic) AWELowInteractionConfig *specialConfig;
@property (retain, nonatomic) NSTimer *checkTimer;
@property (retain, nonatomic) NSDate *lastTouchDate;
@property (nonatomic) long long todayWakeCount;
@property (retain, nonatomic) NSDate *lockTime;
@property (nonatomic) BOOL isInLowBrightness;
@property (nonatomic) double lastBrightness;
@property (retain, nonatomic) CADisplayLink *brightnessDisplayLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerABExperiment;
+ (BOOL)enableDegradation;
+ (id)sharedInstance;

- (BOOL)isSceneEnable;
- (double)checkInterval;
- (void)handleWillResignActive;
- (void)windowHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 targetView:(id)a2;
- (void)setupCheckTimer;
- (id)userDefaulArrayForKey:(id)a0;
- (void)localizeUserDefaultData:(id)a0 forKey:(id)a1;
- (BOOL)isSpecialPeople;
- (void)cancelCheckTimer;
- (id)timeFrameConfig;
- (id)specialPeopleTimeFrameConfig;
- (BOOL)enableDegradation;
- (void)removeLocalizeUserDefaultDataForKey:(id)a0;
- (BOOL)fixDataSourceNil;
- (void)checkIdleTime;
- (id)currentHourConfig;
- (BOOL)isDurationThresholdReached:(double)a0;
- (void)exposureABKey;
- (BOOL)isTouchDuringLowBrightness;
- (long long)recoverFromLockWithin1minCountConfig;
- (BOOL)isRecoverFromLockWithin1minThresholdReached:(long long)a0;
- (BOOL)isSpecialPeopleFrequencyThresholdReached:(id)a0;
- (BOOL)isFrequencyThresholdReached:(id)a0;
- (void)lowerBrightness;
- (BOOL)onlyDegradationInPlayScene;
- (id)disableScene;
- (BOOL)isDate:(id)a0 inConfig:(id)a1;
- (void)setScreenBrightness:(double)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)handleDidBecomeActive;
- (void)setupDataSource;
- (void)setupData;
- (BOOL)enablePolicy;
- (void)setupConfig;

@end
