@class NSString;

@interface WCFinderPrefetchConfig : NSObject <PBCoding>

@property (nonatomic) unsigned long long configId;
@property (nonatomic) BOOL enablePrefetch;
@property (nonatomic) BOOL infinitePrefetch;
@property (nonatomic) unsigned long long validityPeriodOfFeature;
@property (nonatomic) unsigned long long thresholdInSecond;
@property (nonatomic) float maxMultipleFactor;
@property (nonatomic) float timeFactor;
@property (nonatomic) unsigned long long exprType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_configId;
+ (void)PBArrayAdd_enablePrefetch;
+ (void)PBArrayAdd_infinitePrefetch;
+ (void)PBArrayAdd_validityPeriodOfFeature;
+ (void)PBArrayAdd_thresholdInSecond;
+ (void)PBArrayAdd_maxMultipleFactor;
+ (void)PBArrayAdd_timeFactor;
+ (void)PBArrayAdd_exprType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (unsigned long long)switchState;
- (id)validityPeriod;
- (unsigned long long)validityPeriodOfTab:(int)a0;

@end
