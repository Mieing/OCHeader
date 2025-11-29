@class NSDictionary, NSString;

@interface HMDCrashReportInfo : NSObject

@property (nonatomic) double memoryUsage;
@property (nonatomic) double freeMemoryUsage;
@property (nonatomic) double freeMemoryPercent;
@property (nonatomic) double freeDiskUsage;
@property (nonatomic) unsigned long long isLaunchCrash;
@property (nonatomic) unsigned long long isBackground;
@property (nonatomic) long long networkQuality;
@property (copy, nonatomic) NSDictionary *operationTrace;
@property (copy, nonatomic) NSDictionary *filters;
@property (copy, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) NSString *access;
@property (copy, nonatomic) NSString *lastScene;
@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *crashLog;
@property (nonatomic) unsigned long long usedVM;
@property (nonatomic) unsigned long long totalVM;
@property (nonatomic) int crashType;
@property (nonatomic) double time;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *sessionID;

- (void).cxx_destruct;

@end
