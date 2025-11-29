@interface AWEHotSpotAwemeCacheManager : NSObject

+ (id)findMatchCacheAwemeWithAwemes:(id)a0;
+ (void)cacheAwemes:(id)a0 sourceType:(long long)a1;
+ (void)removeAwemesWithSourceType:(long long)a0;
+ (void)preloadAweme:(id)a0 sourceType:(long long)a1;
+ (void)preserveLowestBitrateWithAweme:(id)a0;
+ (id)cacheKeyWithSourceType:(long long)a0;
+ (void)addCacheAwemeIDs:(id)a0;
+ (void)filterHasCached:(id)a0 completion:(id /* block */)a1;
+ (id)fetchCacheAwemeIDs;
+ (double)downloadPercentageWithPlayAddr:(id)a0 bitrate:(id)a1 aweme:(id)a2;
+ (id)fetchCacheResultWithSourceType:(long long)a0 filterExpired:(BOOL)a1;
+ (BOOL)checkIfAllResultsAreEmpty:(id)a0;
+ (BOOL)checkIfAllResultsAreExpired:(id)a0;
+ (id)fetchCacheAwemeModels:(id)a0;
+ (void)filterUnavailableAwemes:(id)a0 completion:(id /* block */)a1;
+ (long long)serverFilterCode2ConsumeStatus:(long long)a0;
+ (id)cacheResultWithSourceType:(long long)a0 filterExpired:(BOOL)a1;
+ (BOOL)isCacheAwemeExpired:(id)a0;
+ (long long)sentenceTagWithAweme:(id)a0 templateBar:(id)a1;
+ (void)fetchCacheAwemesWithSourceType:(long long)a0 filterExpired:(BOOL)a1 filterUnavailable:(BOOL)a2 completion:(id /* block */)a3;

@end
