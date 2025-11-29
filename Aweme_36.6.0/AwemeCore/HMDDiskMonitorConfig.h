@class NSArray, NSDictionary;

@interface HMDDiskMonitorConfig : HMDMonitorConfig

@property (nonatomic) unsigned long long dumpThreshold;
@property (nonatomic) unsigned long long dumpTopCount;
@property (nonatomic) unsigned long long dumpIncreaseStep;
@property (nonatomic) unsigned long long dumpAbnormalFileMaxCount;
@property (nonatomic) unsigned long long collectHourInterval;
@property (nonatomic) double expiredDays;
@property (nonatomic) long long abnormalFolderSize;
@property (nonatomic) long long abnormalFolderFileNumber;
@property (copy, nonatomic) NSArray *ignoredRelativePaths;
@property (nonatomic) double sparseFileLeastDifferPercentage;
@property (nonatomic) unsigned long long sparseFileLeastDifferSize;
@property (nonatomic) BOOL checkSparseFile;
@property (copy, nonatomic) NSDictionary *diskCustomedPaths;
@property (nonatomic) BOOL enableCustomSearchDepth;
@property (nonatomic) long long fileMaxRecursionDepth;
@property (copy, nonatomic) NSDictionary *customSearchDepth;
@property (nonatomic) unsigned long long reportSizeThreshold;
@property (copy, nonatomic) NSArray *complianceRelativePaths;
@property (nonatomic) unsigned long long freeDiskSpaceCacheTimeInterval;
@property (nonatomic) BOOL enableModifiedFileChangeTime;
@property (nonatomic) unsigned long long diskTraversalScheme;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (void).cxx_destruct;

@end
