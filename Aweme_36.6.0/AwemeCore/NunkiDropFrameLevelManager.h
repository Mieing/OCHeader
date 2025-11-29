@class NSObject, NSMutableArray, CADisplayLink;
@protocol OS_dispatch_queue;

@interface NunkiDropFrameLevelManager : NSObject

@property (nonatomic) struct __CFRunLoopObserver { } *beginObserver;
@property (nonatomic) struct __CFRunLoopObserver { } *endObserver;
@property (nonatomic) unsigned long long beginTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long startMachTime;
@property (nonatomic) long long consecutiveLagCount;
@property (nonatomic) double firstConsecutiveLightLagTime;
@property (nonatomic) double lastLagTime;
@property (nonatomic) double lastLevelChangeTime;
@property (nonatomic) double lastDowngradeCheckTime;
@property (retain, nonatomic) NSMutableArray *lagDurationWindow;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double lastTargetTimestamp;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dropFrameLevelQueue;
@property (nonatomic) double thresholdLight;
@property (nonatomic) double thresholdHeavy;
@property (nonatomic) long long consecutiveLagLimit;
@property (nonatomic) double consecutiveLagTimeWindow;
@property (nonatomic) double levelHoldTime;
@property (nonatomic) double levelDowngradeDelay;
@property (nonatomic) BOOL useCADisplayLink;
@property (nonatomic) BOOL enableTrackerUpLoad;
@property (nonatomic) long long currentLevel;
@property (nonatomic) BOOL enableLog;
@property (nonatomic) BOOL enableAsyncNunkiNotification;

+ (id)sharedInstance;

- (void)handleLagDuration:(double)a0;
- (unsigned long long)getCurrentMachMicros;
- (long long)analyzeLagLevelWithCurrentDuration:(double)a0;
- (void)processLagLevel:(long long)a0 oldLevel:(long long)a1 duration:(double)a2;
- (void)reportLagLevel:(long long)a0 duration:(double)a1;
- (void)startMonitoring;
- (void).cxx_destruct;
- (id)init;
- (id)currentScene;
- (void)stopMonitoring;
- (void)_displayLinkDidUpdate:(id)a0;

@end
