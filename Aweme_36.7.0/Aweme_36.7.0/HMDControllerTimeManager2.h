@class HMInstance;

@interface HMDControllerTimeManager2 : HMDControllerTimeManager

@property (retain, nonatomic) HMInstance *instance;

- (void)performanceDataSaveImmediately;
- (void)dropAllDataForServerState;
- (id)performanceDataWithCountLimit:(long long)a0;
- (void)performanceDataDidReportSuccess:(BOOL)a0;
- (id)performanceDataWithLimitSize:(unsigned long long)a0 limitCount:(long long)a1 currentSize:(unsigned long long *)a2;
- (void)performanceSizeLimitedDataDidReportSuccess:(BOOL)a0;
- (void)cleanupNotUploadAndReportedPerformanceData;
- (void)clearRecordsArray;
- (void)recordControllerName:(id)a0 actionType:(id)a1 interval:(double)a2 isFirstOpen:(long long)a3;
- (void).cxx_destruct;
- (void)applicationWillEnterBackground:(id)a0;

@end
