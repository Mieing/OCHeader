@class NSTimer, MMFlutterEngineGroup, EngineGroupMemReporter;

@interface MMFlutterAutoReleaseEngineGroupHelper : NSObject {
    MMFlutterEngineGroup *_engineGroup;
    long long _interval;
    BOOL _releaseEngineGroup;
    id /* block */ _releaseCallback;
}

@property (retain, nonatomic) NSTimer *memReportTimer;
@property (retain, nonatomic) EngineGroupMemReporter *memReporter;

- (id)initWithEngineGroup:(id)a0 autoReleaseInterval:(long long)a1 releaseEngineGroup:(BOOL)a2 recreateEngineGroup:(BOOL)a3 releaseCallback:(id /* block */)a4;
- (void)startReportTimer;
- (void)stopReportTimer;
- (void)applicationBecameActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)recordMemInfo;
- (void)delayReleaseEngineGroup;
- (void)releaseEngineGroupMemory;
- (void)freeEngineGroupMemory;
- (void)removeDelayReleaseEngineGroup;
- (void)releaseRunnable;
- (void)releaseEngineGroup;
- (void)releaseEngineGroupRecreate:(BOOL)a0 releaseType:(long long)a1;
- (void).cxx_destruct;

@end
