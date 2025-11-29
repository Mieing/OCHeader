@class NSArray, HMInstance, NSString;

@interface HMDWatchDogTracker : HMDTracker <HMDWatchDogDelegate, HMDExcludeModule, HMDExceptionReporterDataProvider>

@property (retain) NSArray *addCond;
@property (retain) NSArray *orCond;
@property (getter=isFinishDetection) BOOL finishDetection;
@property (getter=isDetected) BOOL detected;
@property (retain, nonatomic) HMInstance *instance;
@property (nonatomic) BOOL isTimeoutLastTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)excludedModule;
+ (id)reportDataForRecords:(id)a0;
+ (id)aggregateDataForRecords:(id)a0;
+ (id)sharedTracker;
+ (id)tableName;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (BOOL)exceptionDataSource;
- (void)cleanupWithConfig:(id)a0;
- (id)finishDetectionNotification;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (void)cleanupExceptionDataWithConfig:(id)a0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)a0;
- (id)dealNotDebugRealPerformanceData;
- (id)getWatchDogDataWithRecords:(id)a0;
- (void)processWatchDogData:(id)a0 isExtension:(BOOL)a1;
- (void)watchDogDidNotHappenLastTime;
- (void)watchDogDidDetectSystemKillWithData:(id)a0;
- (void)watchDogDidDetectUserForceQuitWithData:(id)a0;
- (void)watchDogDidDetectExtensionWithData:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (Class)storeClass;

@end
