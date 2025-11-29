@class NSString, NSArray;

@interface HMDANRTracker : HMDTracker <HMDExceptionReporterDataProvider, HMDANRMonitorDelegate> {
    double _runloopStartTime;
    NSArray *andConditions;
}

@property (nonatomic) unsigned long long uploadCount;
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
- (void)cleanupExceptionDataWithConfig:(id)a0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)a0;
- (void)uploadANRLogIfNeeded;
- (id)getANRDataWithRecords:(id)a0;
- (id)dealNotDebugRealPerformanceData;
- (id)recordsFilteredByConditions:(id)a0;
- (void)didBlockWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;
- (Class)storeClass;

@end
