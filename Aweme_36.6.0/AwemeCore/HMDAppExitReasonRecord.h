@class NSString, NSDictionary;

@interface HMDAppExitReasonRecord : HMDTrackerRecord

@property (retain, nonatomic) NSString *internalStorageSession;
@property (nonatomic) double appUsedMemory;
@property (nonatomic) double appUsedMemoryPercent;
@property (nonatomic) double deviceFreeMemory;
@property (nonatomic) double freeMemoryPercent;
@property (nonatomic) double freeDiskSpace;
@property (nonatomic) double freeDiskBlockSize;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSString *lastScene;
@property (retain, nonatomic) NSDictionary *customParams;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSDictionary *operationTrace;
@property (retain, nonatomic) NSDictionary *appExitInfo;
@property (retain, nonatomic) NSDictionary *appScenePVInfo;

+ (id)reportDataForRecords:(id)a0;
+ (id)aggregateDataForRecords:(id)a0;
+ (id)tableName;

- (void).cxx_destruct;
- (id)reportDictionary;

@end
