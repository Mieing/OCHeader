@class NSString;

@interface WCFinderUserPrefetchRelatedInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long scene;
@property (nonatomic) double averageEnterCount;
@property (nonatomic) unsigned long long prefetchAttempCount;
@property (nonatomic) unsigned long long startTimestampOfLimitedPeriod;
@property (nonatomic) double probThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_prefetchAttempCount;
+ (void)PBArrayAdd_startTimestampOfLimitedPeriod;
+ (void)PBArrayAdd_probThreshold;
+ (void)PBArrayAdd_averageEnterCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithPrefetchScene:(unsigned long long)a0;
- (id)reportUserDict;
- (void)updateAverageEnterCount:(double)a0;
- (void)updatePrefetchAttempCount:(unsigned long long)a0;
- (void)updateStartTimestampOfLimitedPeriod:(unsigned long long)a0;
- (void)updateProbThreshold:(double)a0;

@end
