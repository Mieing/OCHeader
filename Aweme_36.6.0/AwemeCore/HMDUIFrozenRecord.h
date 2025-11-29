@class NSString, NSDictionary;

@interface HMDUIFrozenRecord : HMDTrackerRecord

@property (retain, nonatomic) NSString *frozenType;
@property (retain, nonatomic) NSString *targetViewDescription;
@property (retain, nonatomic) NSString *targetWindowDescription;
@property (retain, nonatomic) NSDictionary *viewHierarchy;
@property (retain, nonatomic) NSString *viewControllerHierarchy;
@property (retain, nonatomic) NSString *responseChain;
@property (retain, nonatomic) NSString *nearViewController;
@property (retain, nonatomic) NSString *nearViewControllerDesc;
@property (nonatomic) double startTS;
@property (retain, nonatomic) NSString *operationCount;
@property (nonatomic, getter=isLaunchCrash) BOOL launchCrash;
@property (retain, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) NSString *binaryInfo;
@property (retain, nonatomic) NSString *targetViewStacks;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double freeMemoryUsage;
@property (nonatomic) double freeDiskUsage;
@property (nonatomic) long long freeDiskBlocks;
@property (retain, nonatomic) NSString *connectionTypeName;
@property (retain, nonatomic) NSString *internalSessionID;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSString *lastScene;
@property (retain, nonatomic) NSDictionary *operationTrace;
@property (retain, nonatomic) NSDictionary *customParams;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSString *commitID;

+ (id)reportDataForRecords:(id)a0;
+ (id)aggregateDataForRecords:(id)a0;
+ (id)tableName;
+ (id)newRecord;

- (void).cxx_destruct;
- (id)reportDictionary;

@end
