@interface AWEParameteriedCacheUtils : NSObject

+ (BOOL)cacheFileIsExistWithKey:(id)a0 fileType:(long long)a1;
+ (id)generateCacheFilePathWithKey:(id)a0 fileType:(long long)a1;
+ (id)cacheFileWithURL:(id)a0 specifiedCachePath:(id)a1 key:(id)a2 fileType:(long long)a3 shootWay:(id)a4 enterFrom:(id)a5 progress:(id /* block */)a6 completion:(id /* block */)a7;
+ (id)cacheFileWithURL:(id)a0 key:(id)a1 fileType:(long long)a2 shootWay:(id)a3 enterFrom:(id)a4 progress:(id /* block */)a5 completion:(id /* block */)a6;

@end
