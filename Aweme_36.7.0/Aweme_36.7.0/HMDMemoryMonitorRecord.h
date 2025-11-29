@class NSArray;

@interface HMDMemoryMonitorRecord : HMDMonitorRecord

@property (nonatomic) double totalMemory;
@property (nonatomic) double availableMemory;
@property (nonatomic) double usedMemory;
@property (nonatomic) double appUsedMemory;
@property (nonatomic) double pageUsedMemory;
@property (nonatomic) double customUsedMemory;
@property (nonatomic) unsigned long long memoryWarning;
@property (nonatomic) unsigned long long isBackground;
@property (retain, nonatomic) NSArray *dumpInfo;

+ (unsigned long long)cleanupWeight;
+ (id)aggregateDataWithRecords:(id)a0;

- (void).cxx_destruct;
- (double)value;
- (id)reportDictionary;

@end
