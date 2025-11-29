@class NSString;

@interface WCGPUCounterSamplingTask : NSObject <PBCoding>

@property (nonatomic) unsigned long long reportID;
@property (nonatomic) unsigned int reportTime;
@property (nonatomic) BOOL reportSuccess;
@property (nonatomic) BOOL isReportDirectly;
@property (nonatomic) int reportRetryCount;
@property (retain, nonatomic) NSString *reportData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_reportID;
+ (void)PBArrayAdd_reportTime;
+ (void)PBArrayAdd_reportSuccess;
+ (void)PBArrayAdd_reportRetryCount;
+ (void)PBArrayAdd_reportData;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
