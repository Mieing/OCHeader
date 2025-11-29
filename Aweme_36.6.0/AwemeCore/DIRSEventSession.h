@class NSString, NSDictionary, NSMutableDictionary, DIRSContext;

@interface DIRSEventSession : DIRSBasicModule <IRISApplicationObserver, IRISEventObserver, IRISTimer> {
    _Atomic long long index_current;
    NSMutableDictionary *usage;
}

@property (copy) NSString *sessionId;
@property (retain) NSDictionary *latestLaunchDict;
@property (nonatomic) BOOL enteredBackground;
@property (nonatomic) BOOL launched;
@property (nonatomic) unsigned long long launchType;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property double tickTime;

+ (id)moduleId;
+ (long long)priority;
+ (id)moduleVersion;

- (double)timerInterval;
- (void)onApplicationWillEnterForeground;
- (void)onApplicationDidEnterBackground;
- (void)onTimerTick;
- (void)onLaunch;
- (void)onTerminateEvent:(id)a0;
- (id)dumpUsageDir;
- (void)trackLaunch:(long long)a0;
- (void)_recoveryIfNeed;
- (void)updateLaunchUsage;
- (void)_trackTerminate;
- (void)sessionUpdate;
- (void)_trackLaunch:(long long)a0;
- (void)initLaunchUsage:(id)a0;
- (void)trackTerminate;
- (void)terminateUsage:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (void)dump:(id)a0;

@end
