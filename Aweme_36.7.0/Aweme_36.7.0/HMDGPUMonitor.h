@interface HMDGPUMonitor : HMDMonitor

@property (nonatomic) long long lastRecoveryCount;
@property (nonatomic) BOOL isAppRecoveryEnabled;
@property (nonatomic) BOOL didAddObserver;
@property (nonatomic) BOOL didAddCommitHook;

+ (void)reportCommandBufferError:(id)a0 withBacktrace:(id)a1 bufferLog:(id)a2;
+ (id)sharedMonitor;

- (void)__setupMonitorAppRecoveryCount;
- (void)__setupCommandBufferInterceptor;
- (void)__recordProcessingUnitUsage;
- (void)HMD_commit;
- (void)__recordRecoveryCount;
- (void)__willEnterForeground:(id)a0;
- (id)refresh;
- (id)init;
- (void)stop;
- (void)start;

@end
