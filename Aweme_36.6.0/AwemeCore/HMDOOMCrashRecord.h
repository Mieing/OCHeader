@class NSString, NSDictionary;

@interface HMDOOMCrashRecord : HMDTrackerRecord

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
@property (copy, nonatomic) NSString *binaryInfo;
@property (copy, nonatomic) NSString *loginfo;
@property (copy, nonatomic) NSDictionary *sceneInfo;
@property (copy, nonatomic) NSString *sceneIssue;
@property (copy, nonatomic) NSString *extensionType;

+ (id)reportDataForRecords:(id)a0;
+ (id)aggregateDataForRecords:(id)a0;
+ (id)tableName;
+ (id)newRecord;

- (void).cxx_destruct;
- (id)reportDictionary;

@end
