@class NSString;

@interface MMGPUMonitorConfig : NSObject <PBCoding>

@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned int traceVertexHangMs;
@property (nonatomic) unsigned int traceFragmentHangMs;
@property (nonatomic) unsigned int traceEncodeHangMs;
@property (nonatomic) unsigned int traceGPUHangMs;
@property (nonatomic) unsigned int checkTime;
@property (nonatomic) unsigned int checkCount;
@property (nonatomic) unsigned int reportLimit;
@property (nonatomic) double criticalUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_traceVertexHangMs;
+ (void)PBArrayAdd_traceFragmentHangMs;
+ (void)PBArrayAdd_traceEncodeHangMs;
+ (void)PBArrayAdd_traceGPUHangMs;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_reportLimit;
+ (void)PBArrayAdd_criticalUsage;
+ (void)initialize;

@end
