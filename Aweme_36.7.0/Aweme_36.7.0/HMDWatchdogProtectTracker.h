@class NSArray, NSString;

@interface HMDWatchdogProtectTracker : HMDTracker <HMDWatchdogProtectDetectProtocol, HMDExceptionReporterDataProvider>

@property (retain, nonatomic) NSArray *andConditions;
@property (getter=isFinishDetection) BOOL finishDetection;
@property (getter=isDetected) BOOL detected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reportDataForRecords:(id)a0;
+ (id)aggregateDataForRecords:(id)a0;
+ (id)sharedTracker;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (BOOL)exceptionDataSource;
- (void)cleanupWithConfig:(id)a0;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)cleanupExceptionDataWithConfig:(id)a0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)a0;
- (void)updateTypeList:(id)a0;
- (void)didProtectWatchdogWithCapture:(id)a0;
- (id)pendingNormalExceptionData;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)tableName;
- (Class)storeClass;

@end
