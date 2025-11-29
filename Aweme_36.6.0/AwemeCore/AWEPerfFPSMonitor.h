@class NSMutableDictionary, CADisplayLink, __cap_, __end_;

@interface AWEPerfFPSMonitor : NSObject {
    CADisplayLink *displayLink;
    BOOL supportsTargetTimestamp;
    BOOL supportsDynamicFrameRate;
    unsigned long long anrCount;
    double anrDuration;
    BOOL anrIsTrackingMode;
    BOOL anrMonitoringEnabled;
    struct { double duration; double hitchDuration; unsigned char drop; unsigned char jank; } lastFrame;
    BOOL lastTrackingMode;
    double lastTimestamp;
    double last2ndTimestamp;
    double last3rdTimestamp;
    double last4thTimestamp;
    double lastTargetTimestamp;
    double lastVSyncInterval;
    struct vector<AWEPerfFPSRecord *, std::allocator<AWEPerfFPSRecord *>> { __end_ **__begin_; __cap_ **x0; id *x1; } activeRecords;
    NSMutableDictionary *keyedRecords;
    NSMutableDictionary *hitchTimestampDict;
    BOOL trackHitchTimestamp;
    BOOL _shouldLogAsync;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (void)beginCustomTracking;
+ (void)endCustomTracking;
+ (BOOL)isCustomTracking;
+ (BOOL)isEnabled;
+ (id)sharedMonitor;

- (id)endSceneWithName:(id)a0 context:(const void *)a1;
- (id)beginSceneWithName:(id)a0 context:(const void *)a1;
- (void)updateExtra:(id)a0 forSceneWithName:(id)a1 context:(const void *)a2;
- (id)endWithKey:(id)a0;
- (void)onHMDANROver:(id)a0;
- (id)pauseWithKey:(id)a0;
- (void)logRecord:(id)a0 withScene:(id)a1 extra:(id)a2;
- (id)sceneWithName:(id)a0 context:(const void *)a1;
- (id)cancelSceneWithName:(id)a0 context:(const void *)a1;
- (id)beginWithKey:(id)a0;
- (void)logScene:(id)a0;
- (id)recordWithKey:(id)a0;
- (id)pauseSceneWithName:(id)a0 context:(const void *)a1;
- (void)scene_onAppNotification:(id)a0;
- (void)setupDisplayLinkPaused:(BOOL)a0;
- (void)displayLinkDidUpdate:(id)a0;
- (void)onAppNotification:(id)a0;
- (void)beginTrackHitchTimestamp;
- (id)endTrackHitchTimestamp;
- (void)startTrackerFirstMinuteUIFrame;
- (BOOL)first_min_enabled;
- (void)swizzled_onAppNotification:(id)a0;
- (void)reportFirstMinuteUIFrame:(id)a0 fromSceneName:(id)a1 fromVC:(BOOL)a2;
- (void)endTrackerFirstMinuteUIFrameForGlobal;
- (void)endTrackerFirstMinuteUIFrameForFeed;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)setupNotifications;

@end
