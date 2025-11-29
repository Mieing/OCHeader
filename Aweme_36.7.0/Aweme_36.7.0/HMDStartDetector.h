@class NSArray, HMDPerformanceReportRequest, NSString, HMInstance;

@interface HMDStartDetector : HeimdallrModule <HMDPerformanceReporterDataSource>

@property (retain, nonatomic) HMDPerformanceReportRequest *reportingRequest;
@property (nonatomic) BOOL hasStartLaunch;
@property (retain, nonatomic) HMInstance *instance;
@property (readonly, nonatomic) NSArray *records;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)markWillFinishingLaunchDate;
+ (void)markMainDate;
+ (id)share;

- (void)updateConfig:(id)a0;
- (void)checkOpenStatus:(int)a0 invalidStop:(BOOL)a1;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (void)cleanupWithConfig:(id)a0;
- (void)prepareForDefaultStart;
- (void)setupWithHeimdallr:(id)a0;
- (double)didFnishConcurrentRendering;
- (void)startLaunchDetection;
- (id)fetchUploadRecordsWithLimit:(long long)a0;
- (id)getDataWithRecords:(id)a0 isDebugReal:(BOOL)a1;
- (void)dropAllDataForServerState;
- (unsigned long long)reporterPriority;
- (id)performanceDataWithCountLimit:(long long)a0;
- (id)debugRealPerformanceDataWithConfig:(id)a0;
- (void)cleanupPerformanceDataWithConfig:(id)a0;
- (void)performanceDataDidReportSuccess:(BOOL)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (Class)storeClass;

@end
