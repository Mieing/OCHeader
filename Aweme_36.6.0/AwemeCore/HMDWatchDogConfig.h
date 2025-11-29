@interface HMDWatchDogConfig : HMDTrackerConfig

@property (nonatomic) double timeoutInterval;
@property (nonatomic) double sampleInterval;
@property (nonatomic) unsigned long long lastThreadsCount;
@property (nonatomic) double launchCrashThreshold;
@property (nonatomic) BOOL suspend;
@property (nonatomic) BOOL ignoreBackground;
@property (nonatomic) BOOL uploadAlog;
@property (nonatomic) BOOL uploadMemoryLog;
@property (nonatomic) BOOL raiseMainThreadPriority;
@property (nonatomic) double raiseMainThreadPriorityInterval;
@property (nonatomic) BOOL enableRunloopMonitorV2;
@property (nonatomic) unsigned long long runloopMonitorThreadSleepInterval;
@property (nonatomic) BOOL enableMonitorCompleteRunloop;
@property (nonatomic) BOOL enableRealTimeWhenCondWaitTimeOut;
@property (nonatomic) BOOL enableRecordRunloopBeginTimeInMonitorThread;
@property (nonatomic) BOOL enableRecordEnvInfo;
@property (nonatomic) BOOL enableEarlyWatchDogMonitor;
@property (nonatomic) BOOL enableExtensionDetect;
@property (nonatomic) BOOL captureEarlyBacktrace;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (long long)startWeight;
- (BOOL)enableUpload;
- (BOOL)isValid;

@end
