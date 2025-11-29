@class NSString, NSArray;

@interface HMDHTTPRequestUploader : NSObject <HMDPerformanceReporterDataSource>

@property (copy, nonatomic) NSString *logType;
@property (nonatomic) Class recordClass;
@property (copy, nonatomic) NSArray *conditions;
@property (nonatomic) struct HMDRecordLocalIDRange { unsigned long long minLocalID; unsigned long long maxLocalID; } uploadingRange;
@property (nonatomic) unsigned long long queryLimitCnt;
@property (copy, nonatomic) NSString *sdkAid;
@property (nonatomic) double sdkStartUploadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dropAllDataForServerState;
- (unsigned long long)properLimitCount;
- (id)performanceDataWithCountLimit:(long long)a0;
- (id)debugRealPerformanceDataWithConfig:(id)a0;
- (void)cleanupPerformanceDataWithConfig:(id)a0;
- (void)performanceDataDidReportSuccess:(BOOL)a0;
- (id)performanceDataWithLimitSize:(unsigned long long)a0 limitCount:(long long)a1 currentSize:(unsigned long long *)a2;
- (void)performanceSizeLimitedDataDidReportSuccess:(BOOL)a0;
- (double)properLimitSizeWeight;
- (id)initWithlogType:(id)a0 recordClass:(Class)a1;
- (id)initWithlogType:(id)a0 recordClass:(Class)a1 sdkAid:(id)a2 sdkStartUploadTime:(double)a3;
- (id)fetchUploadRecords;
- (void).cxx_destruct;

@end
