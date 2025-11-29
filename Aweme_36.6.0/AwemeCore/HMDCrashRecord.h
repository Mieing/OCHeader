@class NSDictionary, NSString;

@interface HMDCrashRecord : HMDTrackerRecord

@property (nonatomic) double memoryUsage;
@property (nonatomic) double freeMemoryUsage;
@property (nonatomic) double freeMemoryPercent;
@property (nonatomic) double freeDiskUsage;
@property (nonatomic) unsigned long long isLaunchCrash;
@property (nonatomic) unsigned long long isBackground;
@property (copy, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) NSString *access;
@property (copy, nonatomic) NSString *lastScene;
@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSDictionary *filters;
@property (copy, nonatomic) NSString *crashShortVersion;
@property (copy, nonatomic) NSString *crashBuildVersion;
@property (copy, nonatomic) NSString *crashExceptionName;
@property (copy, nonatomic) NSString *crashReason;
@property (nonatomic) unsigned long long crashType;
@property (readonly, nonatomic) unsigned long long machCrashType;
@property (copy, nonatomic) NSDictionary *operationTrace;
@property (copy, nonatomic) NSString *crashLog;

+ (id)tableName;

- (unsigned long long)machCrashType;
- (void).cxx_destruct;

@end
