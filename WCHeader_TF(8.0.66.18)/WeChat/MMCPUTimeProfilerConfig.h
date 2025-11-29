@class NSString;

@interface MMCPUTimeProfilerConfig : NSObject <PBCoding>

@property (nonatomic) BOOL enabled;
@property (nonatomic) double dumpInternal;
@property (nonatomic) double minCpuUsageToDump;
@property (nonatomic) unsigned int checkTime;
@property (nonatomic) unsigned int checkCount;
@property (nonatomic) unsigned int reportLimit;
@property (nonatomic) double criticalUsage;
@property (nonatomic) double minCpuUsageToReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_dumpInternal;
+ (void)PBArrayAdd_minCpuUsageToDump;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_reportLimit;
+ (void)PBArrayAdd_criticalUsage;
+ (void)PBArrayAdd_minCpuUsageToReport;
+ (void)initialize;

@end
