@interface MMLiveMagicRewardMemoryMonitorTask : NSObject

@property (nonatomic) BOOL isStartMonitor;
@property (copy, nonatomic) id /* block */ getMonitorTimeCallback;

+ (double)defaultMonitorTime;

- (void)startMonitor;
- (void)stopMonitor;
- (void)restartMonitor;
- (void)checkMemory;
- (void)forceCheckMemoryIfNeedAfterTime:(double)a0;
- (void)cancel;
- (double)getMonitorTime;
- (void).cxx_destruct;

@end
