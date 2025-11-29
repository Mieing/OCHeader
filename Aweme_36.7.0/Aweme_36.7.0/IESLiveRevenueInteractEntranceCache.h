@class RivalsRecommendResponse;

@interface IESLiveRevenueInteractEntranceCache : NSObject

@property (retain, nonatomic) RivalsRecommendResponse *cacheData;
@property (nonatomic) long long cacheType;
@property (nonatomic) long long sourceType;
@property (nonatomic) double saveTiming;
@property (nonatomic) double shelfLife;
@property (nonatomic) BOOL hasHitCache;
@property (nonatomic) BOOL isRequesting;

- (void)saveCacheData:(id)a0 loadType:(long long)a1 sourceType:(long long)a2;
- (id)dataReuseConfig;
- (id)cacheStrategyConfig;
- (void).cxx_destruct;
- (void)clean;

@end
