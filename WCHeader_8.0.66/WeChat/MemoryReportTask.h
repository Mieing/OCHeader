@class NSDictionary, NSString;

@interface MemoryReportTask : NSObject <PBCoding>

@property (nonatomic) unsigned long long launchTime;
@property (nonatomic) BOOL generateFail;
@property (nonatomic) BOOL reportSuccess;
@property (nonatomic) int retryCount;
@property (retain, nonatomic) NSDictionary *customInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_launchTime;
+ (void)PBArrayAdd_generateFail;
+ (void)PBArrayAdd_reportSuccess;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_customInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
