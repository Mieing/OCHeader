@class NSString, NSArray, HMInstance, NSObject;
@protocol OS_dispatch_queue;

@interface HMDNewANRTracker : HMDTracker <HMDExceptionReporterDataProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    double _launchTime;
    double _launchThreadhold;
    NSArray *_andConditions;
}

@property (readonly, nonatomic) HMInstance *hermasInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)updateConfig:(id)a0;
- (BOOL)exceptionDataSource;
- (long long)dbMaxSize;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (BOOL)needDropData;
- (void)cleanupExceptionDataWithConfig:(id)a0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)a0;
- (void)uploadANRLogIfNeeded;
- (id)getANRDataWithRecords:(id)a0;
- (id)dealNotDebugRealPerformanceData;
- (void)updateSettingIfRunning;
- (void)updateSettingIfRunningOnce;
- (void)process:(const void *)a0 helper:(const struct CountHelper { } *)a1;
- (BOOL)needBlockUpload;
- (void).cxx_destruct;
- (void)callback:(const void *)a0;
- (id)init;
- (void)stop;
- (void)start;
- (Class)storeClass;
- (void)startMonitor;
- (void)stopMonitor;

@end
