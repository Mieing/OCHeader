@class NSString;

@interface WCGPUCounterSamplingConfig : NSObject <PBCoding>

@property (nonatomic) unsigned int lastReportTime;
@property (nonatomic) unsigned int reportCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastReportTime;
+ (void)PBArrayAdd_reportCount;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
