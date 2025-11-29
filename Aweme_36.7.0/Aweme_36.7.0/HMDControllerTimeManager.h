@class NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDControllerTimeManager : HeimdallrModule <HMDPerformanceReporterDataSource, HMDControllerMonitorDelegate> {
    double _startTimestamp;
}

@property (nonatomic) struct HMDRecordLocalIDRange { unsigned long long x0; unsigned long long x1; } uploadingRange;
@property (nonatomic) long long hmdCountLimit;
@property (retain, nonatomic) NSArray *andConditions;
@property (nonatomic) double lastFlushTimestamp;
@property (retain, nonatomic) NSMutableArray *recordsArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) struct HMDRecordLocalIDRange { unsigned long long minLocalID; unsigned long long maxLocalID; } uploadingRange;
@property (nonatomic) long long hmdCountLimit;
@property (retain, nonatomic) NSArray *andConditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (BOOL)performanceDataSource;
- (void)cleanupWithConfig:(id)a0;
- (long long)dbMaxSize;
- (void)performanceDataSaveImmediately;
- (void)setupWithHeimdallr:(id)a0;
- (void)dropAllDataForServerState;
- (unsigned long long)reporterPriority;
- (id)performanceDataWithCountLimit:(long long)a0;
- (id)debugRealPerformanceDataWithConfig:(id)a0;
- (void)cleanupPerformanceDataWithConfig:(id)a0;
- (void)performanceDataDidReportSuccess:(BOOL)a0;
- (id)performanceDataWithLimitSize:(unsigned long long)a0 limitCount:(long long)a1 currentSize:(unsigned long long *)a2;
- (void)performanceSizeLimitedDataDidReportSuccess:(BOOL)a0;
- (void)cleanupNotUploadAndReportedPerformanceData;
- (id)fetchUploadRecords;
- (id)getDataWithRecords:(id)a0;
- (void)clearRecordsArray;
- (void)tracksCountChangedWithImmediately:(BOOL)a0;
- (id)getAggregateDataWithRecords:(id)a0;
- (void)recordControllerName:(id)a0 actionType:(id)a1 interval:(double)a2 isFirstOpen:(long long)a3;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;
- (Class)storeClass;
- (void)applicationWillEnterBackground:(id)a0;

@end
