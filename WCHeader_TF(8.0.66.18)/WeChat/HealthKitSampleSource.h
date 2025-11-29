@class NSString;

@interface HealthKitSampleSource : MMObject <PBCoding>

@property (retain, nonatomic) NSString *nsBundleId;
@property (retain, nonatomic) NSString *nsAppName;
@property (nonatomic) unsigned int uiStepCount;
@property (nonatomic) BOOL bIsAppleWatch;
@property (nonatomic) BOOL bIsLocalDevice;
@property (nonatomic) BOOL bIsInWhiteList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsBundleId;
+ (void)PBArrayAdd_nsAppName;
+ (void)PBArrayAdd_uiStepCount;
+ (void)PBArrayAdd_bIsAppleWatch;
+ (void)PBArrayAdd_bIsLocalDevice;
+ (void)PBArrayAdd_bIsInWhiteList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
