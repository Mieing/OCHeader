@class NSNumber, NSArray;

@interface AWENearbyTransformerCacheManager : NSObject

@property (retain, nonatomic) NSNumber *cacheEffectivePeriod;
@property (copy, nonatomic) NSArray *strictCacheCardTypesArr;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)__buildCacheWithSettingsResponse:(id)a0 pageType:(long long)a1;
- (BOOL)__checkStrategySatisfied:(long long)a0 settingsResponse:(id)a1;
- (void)__storeSettingsCache:(id)a0 strategy:(long long)a1 rowTye:(unsigned long long)a2 pageType:(long long)a3 callback:(id /* block */)a4;
- (id)cacheKeyWithRowType:(unsigned long long)a0 strategy:(long long)a1;
- (void)storeTransformerSettingsResponse:(id)a0 rowType:(unsigned long long)a1 pageType:(long long)a2 callback:(id /* block */)a3;
- (void)storeTransformerSettingsResponse:(id)a0 rowType:(unsigned long long)a1 pageType:(long long)a2 strategy:(long long)a3 callback:(id /* block */)a4;
- (void)getValidNearbySettingsCacheWithRowType:(unsigned long long)a0 pageType:(long long)a1 cacheConfig:(id)a2 complete:(id /* block */)a3;
- (void)checkCacheValid:(id)a0 expiredTime:(double)a1 resultBlk:(id /* block */)a2;
- (id)__cacheNameSpaceWithRowType:(unsigned long long)a0;
- (void)getValidNearbySettingsCacheWithRowType:(unsigned long long)a0 pageType:(long long)a1 complete:(id /* block */)a2;
- (void)trackCacheEventWithResult:(BOOL)a0 reason:(id)a1 cacheStrategy:(long long)a2 rowType:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
