@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface AWEFantaTimeWindowFeatureCenter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSTimer *windowTimer;
@property (nonatomic) double timeWindowLastUpdatedTime;
@property (nonatomic) long long volumeTurnUpCountInSession;
@property (nonatomic) long long volumeTurnDownCountInSession;
@property (nonatomic) double volumeBeforeChange;
@property (nonatomic) double volumeAfterChange;
@property (nonatomic) long long volumeAdjustTimeStamp;
@property (nonatomic) long long batteryPercent;
@property (nonatomic) double instantPerformance;
@property (nonatomic) long long lastBatteryPercent;
@property (nonatomic) double lastInstantPerformance;
@property (nonatomic) BOOL windowInited;

+ (id)sharedInstance;

- (void)onVolumeChangeNotification:(id)a0;
- (id)systemVolumeDidChangeNotification;
- (void)registerTimeWindowFeatures;
- (BOOL)enableVolumeChangeObserver;
- (long long)windowFeatureTimerDelayTime;
- (void)registerVolumeFeatures;
- (BOOL)enableWindowFeatureTimer;
- (void)updateWindowFeaturesPerMinute;
- (void)registerWindowFeatures;
- (double)batteryPercentDelta1m;
- (double)instantPerformanceGrowth1m;
- (id)volumeNotificationParameter;
- (void).cxx_destruct;

@end
