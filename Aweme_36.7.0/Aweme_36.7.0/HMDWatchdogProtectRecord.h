@class NSString, NSDictionary;

@interface HMDWatchdogProtectRecord : HMDTrackerRecord

@property (retain, nonatomic) NSString *backtrace;
@property (nonatomic, getter=isLaunchCrash) BOOL launchCrash;
@property (retain, nonatomic) NSDictionary *settings;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double freeMemoryUsage;
@property (nonatomic) double freeDiskUsage;
@property (retain, nonatomic) NSString *connectionTypeName;
@property (retain, nonatomic) NSString *internalSessionID;
@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSString *lastScene;
@property (retain, nonatomic) NSDictionary *operationTrace;
@property (retain, nonatomic) NSDictionary *customParams;
@property (retain, nonatomic) NSDictionary *filters;

+ (id)reportDataForRecords:(id)a0;
+ (id)aggregateDataForRecords:(id)a0;
+ (id)tableName;
+ (id)newRecord;

- (void).cxx_destruct;

@end
