@class NSMutableArray;

@interface AWEGrouponInnerCachePreloadManager : NSObject

@property (retain, nonatomic) NSMutableArray *nearbyCacheAwemeList;
@property (retain, nonatomic) NSMutableArray *mallCacheAwemeList;
@property (nonatomic) double lastCacheGetTimeSt;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)currentCityCode;
- (long long)cacheExpiredTime;
- (void)resetInnerCachePool:(unsigned long long)a0 source:(unsigned long long)a1;
- (void)checkoutNearbyInnerCachePoolWithSource:(unsigned long long)a0;
- (id)hasVaildNearbyInnerCacheWithSource:(unsigned long long)a0;
- (long long)cachePoolNumWithSource:(unsigned long long)a0;
- (id)cacheAwemeListWithSource:(unsigned long long)a0;
- (void)reqNewCacheWithSource:(unsigned long long)a0;
- (BOOL)cacheIsExpired;
- (long long)cachePollCount;
- (long long)cacheReqThreshold;
- (id)innerCacheSettings;
- (void)getVaildNearbyInnerCacheWithSource:(unsigned long long)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)enableCache;

@end
