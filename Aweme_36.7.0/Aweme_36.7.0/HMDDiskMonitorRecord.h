@class NSArray;

@interface HMDDiskMonitorRecord : HMDMonitorRecord

@property (nonatomic) double appUsage;
@property (nonatomic) double totalCapacity;
@property (nonatomic) double freeCapacity;
@property (nonatomic) double appRatio;
@property (nonatomic) double pageUsage;
@property (nonatomic) long long freeBlockCounts;
@property (nonatomic) long long totalDiskLevel;
@property (nonatomic) long long documentsAndDataUsage;
@property (retain, nonatomic) NSArray *topFileLists;
@property (retain, nonatomic) NSArray *exceptionFolders;
@property (retain, nonatomic) NSArray *outdatedFiles;
@property (retain, nonatomic) NSArray *diskInfo;

+ (unsigned long long)cleanupWeight;
+ (id)aggregateDataWithRecords:(id)a0;

- (BOOL)needAggregate;
- (id)reportDictionaryForLogTyepe:(id)a0;
- (void).cxx_destruct;
- (double)value;
- (id)reportDictionary;

@end
