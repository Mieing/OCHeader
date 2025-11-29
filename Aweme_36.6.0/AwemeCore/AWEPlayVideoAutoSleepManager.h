@class NSString, NSTimer, CADisplayLink, UIButton;

@interface AWEPlayVideoAutoSleepManager : NSObject <AWEMaskWindowHitTestProtocol, AWEPerfSceneMonitorProtocol>

@property (nonatomic) long long autoSleepThreshold;
@property (nonatomic) BOOL isInAutoSleepTimeRange;
@property (retain, nonatomic) NSTimer *sleepTimer;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *subScene;
@property (nonatomic) BOOL isInAutoLockStage;
@property (nonatomic) BOOL isAlreadyLockScreen;
@property (nonatomic) double lastBrightness;
@property (retain, nonatomic) CADisplayLink *brightnessDisplayLink;
@property (retain, nonatomic) UIButton *brightnessInteractionButton;
@property (nonatomic) double lastEnterAutoSleepTime;
@property (nonatomic) double lastAutoSleepLockTime;
@property (nonatomic) double lastInteractionTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)handleWillResignActive;
- (void)windowHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 targetView:(id)a2;
- (void)handleWillBecomeUnavailable;
- (void)handleDidBecomeAvailable;
- (void)checkEnterAutoSleepRange;
- (void)cancelAutoSleep;
- (void)checkEnterAutoSleepRangeFuture;
- (void)traceReportData:(long long)a0 dousingReawakenDuration:(double)a1 dousedReawakenDuration:(double)a2;
- (BOOL)shouldEnterAutomaticSleep;
- (long long)currentHour;
- (double)remainingTimeIntervalUntil:(long long)a0;
- (void)setAutoSleepTimerIfNeeded;
- (void)setupAutoSleepTimer;
- (void)autoSleepStepIfNeeded;
- (void)didUpdateScene:(id)a0;
- (void)didUpdateScene:(id)a0 subScene:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)handleDidBecomeActive;
- (void)updateBrightness;

@end
