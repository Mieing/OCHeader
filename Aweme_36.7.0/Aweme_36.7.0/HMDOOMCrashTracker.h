@class HMDOOMCrashRecord, NSArray, NSString, HMInstance, NSObject;
@protocol OS_dispatch_queue;

@interface HMDOOMCrashTracker : HMDTracker <HMDExceptionReporterDataProvider, HMDAPPExitReasonDetectorProtocol, HMDOOMCrashDetectorDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _startMutex;
    BOOL _isStarted;
}

@property (retain) NSArray *andConditions;
@property (retain) HMDOOMCrashRecord *possibleRecord;
@property (retain) NSString *possibleInternalSession;
@property (getter=isFinishDetection) BOOL finishDetection;
@property (getter=isDetected) BOOL detected;
@property (nonatomic) int relaunchReason;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionOOMQueue;
@property (retain, nonatomic) HMInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int reason;

+ (id)excludedModule;
+ (id)reportDataForRecords:(id)a0;
+ (id)aggregateDataForRecords:(id)a0;
+ (id)assembleNewOOMMetrics:(id)a0 timestamp:(long long)a1 sequenceCode:(unsigned long long)a2;
+ (void)dispatchOOMDetectInformation:(id)a0;
+ (void)dispatchNoneOOMDetect;
+ (id)sharedTracker;
+ (id)tableName;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (BOOL)exceptionDataSource;
- (id)finishDetectionNotification;
- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (void)cleanupExceptionDataWithConfig:(id)a0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)a0;
- (id)dealNotDebugRealPerformanceData;
- (void)checkExtensionExitReason;
- (void)applicationSessionIDDidChange:(id)a0;
- (id)getOOMDataWithRecords:(id)a0;
- (void)notifyDetectionFinished;
- (id)recordWithOOMCrashInfo:(id)a0 isExtension:(BOOL)a1;
- (void)oomCrashDetected;
- (void)saveExtensionOOMRecords:(id)a0 filePaths:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (Class)storeClass;

@end
