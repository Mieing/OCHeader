@interface AWEFeedScreenCaptureMonitor : NSObject

@property (nonatomic) BOOL screenRecording;

+ (id)sharedInstance;
+ (void)setup;

- (void)userDidTakeScreenshot:(id)a0;
- (void)updateRecordState;
- (void)trackCurrentABTestData;
- (void)trackCurrentSettingsData;
- (void)trackCurrentUITree;
- (long long)screenShotDumpViewTreeCount;
- (id)dumpViewTree;
- (void)trackScreenRecordingEvent;
- (id)dumpViewTree:(id)a0 depth:(long long)a1 maxDepth:(long long)a2;
- (void)changeLogLevelIfNeed;
- (id)init;
- (void)setupObservers;
- (void)dealloc;
- (void)setupNotifications;

@end
