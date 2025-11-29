@class NSString, NSArray, HMInstance, NSMutableArray;

@interface HMDExceptionTracker : HMDTracker <HMDExceptionReporterDataProvider> {
    NSArray *_andConditions;
    NSMutableArray *_pendingRecords;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _pendingMutex;
    BOOL _onceStarted;
}

@property (retain, nonatomic) HMInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)updateConfig:(id)a0;
- (BOOL)exceptionDataSource;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (void)cleanupExceptionDataWithConfig:(id)a0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)a0;
- (id)dealNotDebugRealPerformanceData;
- (void)collectRecordToHermasOrDB:(id)a0;
- (void)pendingRecord:(id)a0;
- (void)updateConfigIfStarted:(id)a0;
- (void)savePendingRecordToDatabase;
- (void)enableCustomCatchWithMethodDict:(id)a0;
- (void)switchSystemProtectWithKeyList:(id)a0;
- (id)fetchUploadRecordsWithLimitCount:(long long)a0;
- (id)getExceptionDataWithRecords:(id)a0;
- (void)recordCapture:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (Class)storeClass;

@end
