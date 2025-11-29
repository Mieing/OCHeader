@class NSString, NSArray, HMInstance, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMetricKitTracker : HMDTracker <MXMetricManagerSubscriber>

@property (retain, nonatomic) NSMutableArray *payloads;
@property (retain, nonatomic) HMInstance *instance;
@property (retain, nonatomic) NSMutableArray *metricPayloads;
@property (nonatomic) BOOL isUploadMetric;
@property (nonatomic) BOOL isFixSegmentRename;
@property (nonatomic) BOOL isIgnoreExtension;
@property (nonatomic) BOOL isIgnoreCrash;
@property (nonatomic) BOOL isIgnoreCPUException;
@property (nonatomic) BOOL isIgnoreAppLaunch;
@property (nonatomic) BOOL isIgnoreHang;
@property (nonatomic) BOOL isIgnoreDiskWrite;
@property (retain, nonatomic) NSString *expandDir;
@property (retain, nonatomic) NSString *appImagesTextSegmentInfoFilePath;
@property (retain, nonatomic) NSArray *andConditions;
@property (nonatomic) BOOL disableRetryUpload;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) int diagnosticsCallbackCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateSelfMonitorKey:(id)a0;
+ (id)sharedTracker;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (BOOL)exceptionDataSource;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (void)uploadPreviousLoadLaunchDiagnosticData;
- (void)uploadMetricKitLogIfNeeded;
- (void)uploadDiagnosticData:(id)a0 directory:(id)a1 shouldMarkLoadCrash:(BOOL)a2 isAlreadyMarked:(BOOL)a3;
- (id)ignoreNeedLessDiagnosticPayload:(id)a0;
- (void)filterBackgroundLaunchWatchdog:(id)a0;
- (id)ignoreNeedLessDiagnosticPayloadDict:(id)a0;
- (id)markLoadCrashDiagnosticData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (unsigned long long)exceptionType;
- (void)start;
- (Class)storeClass;
- (void)didReceiveMetricPayloads:(id)a0;
- (void)didReceiveDiagnosticPayloads:(id)a0;

@end
