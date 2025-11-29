@class NSString, NSDictionary, NSArray;

@interface HMDWatchDogRecord : HMDTrackerRecord

@property (nonatomic) double timeoutDuration;
@property (retain, nonatomic) NSString *internalSessionID;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double freeMemoryUsage;
@property (nonatomic) double freeDiskUsage;
@property (nonatomic) long long freeDiskBlocks;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSString *lastScene;
@property (retain, nonatomic) NSString *backtrace;
@property (retain, nonatomic) NSString *connectionTypeName;
@property (retain, nonatomic) NSDictionary *customParams;
@property (nonatomic, getter=isLaunchCrash) BOOL launchCrash;
@property (nonatomic, getter=isBackground) BOOL background;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSDictionary *operationTrace;
@property (retain, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) NSString *timeline;
@property (retain, nonatomic) NSArray *deadlock;
@property (nonatomic, getter=isMainDeadlock) BOOL MainDeadlock;
@property (nonatomic) unsigned long long exceptionMainAddress;
@property (nonatomic) double main_thread_cpu_usage;
@property (nonatomic) double host_cpu_usage;
@property (nonatomic) double task_cpu_usage;
@property (nonatomic) int cpu_count;
@property (nonatomic, getter=isFromExtension) BOOL fromExtension;

+ (id)reportDataForRecords:(id)a0;
+ (id)aggregateDataForRecords:(id)a0;
+ (id)tableName;
+ (id)newRecord;

- (void).cxx_destruct;
- (id)reportDictionary;

@end
