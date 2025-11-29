@protocol HMDWatchDogDelegate;

@interface HMDWatchDog : NSObject {
    BOOL _isActive;
}

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
@property (weak, nonatomic) id<HMDWatchDogDelegate> delegate;

+ (id)sharedInstance;

- (void)setupWithConfig:(id)a0;
- (id)dataWithFileName:(id)a0;
- (void)networkAccessChanged:(id)a0;
- (void)sceneDidUpdate;
- (void)thermalStateChangeed:(id)a0;
- (void)initInfoDict;
- (void)updateInfoWithVariable:(char **)a0 value:(id)a1;
- (BOOL)initDirectory:(id)a0;
- (void)checkWatchDogLastTime;
- (void)checkExtensionWatchDog;
- (void)registerRunloopMonitorObserver;
- (void)checkExtensionWatchDogForEach:(id)a0;
- (id)dictionaryWithData:(id)a0 fileName:(id)a1;
- (void)processExtensionWatchDogWithMainDict:(id)a0 extraDict:(id)a1;
- (void)initMaybeWatchDogFlagFile;
- (void)earlyMonitorStart:(BOOL)a0;
- (id)dictionaryWithJsonData:(id)a0;
- (id)remapDictionaryFormV1ToV2:(id)a0;
- (void)powerStateChangeed:(id)a0;
- (BOOL)lastTimeMaybeWatchdog;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
