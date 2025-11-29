@protocol HMDANRMonitorDelegate;

@interface HMDANRMonitor : NSObject

@property (nonatomic) BOOL enableSample;
@property (nonatomic) double sampleInterval;
@property (nonatomic) double sampleTimeoutInterval;
@property (nonatomic) BOOL ignoreBackground;
@property (nonatomic) BOOL ignoreDuplicate;
@property (nonatomic) BOOL ignoreBacktrace;
@property (nonatomic) BOOL suspend;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double launchThreshold;
@property (nonatomic) int maxContinuousReportTimes;
@property (nonatomic) BOOL enableRunloopMonitorV2;
@property (nonatomic) unsigned long long runloopMonitorThreadSleepInterval;
@property (nonatomic) unsigned long long maxBacktraceThreadCount;
@property (retain, nonatomic) id<HMDANRMonitorDelegate> delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
