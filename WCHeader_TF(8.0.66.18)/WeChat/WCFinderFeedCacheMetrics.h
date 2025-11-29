@class NSString;

@interface WCFinderFeedCacheMetrics : NSObject <PBCoding>

@property (nonatomic) long long strategy;
@property (copy, nonatomic) NSString *contextId;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) unsigned long long hitCount;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) unsigned long long evictCount;
@property (nonatomic) unsigned long long actualCost;
@property (nonatomic) unsigned long long evictCost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_strategy;
+ (void)PBArrayAdd_contextId;
+ (void)PBArrayAdd_totalCount;
+ (void)PBArrayAdd_hitCount;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_actualCost;
+ (void)PBArrayAdd_evictCount;
+ (void)PBArrayAdd_evictCost;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStrategy:(long long)a0;
- (void).cxx_destruct;

@end
