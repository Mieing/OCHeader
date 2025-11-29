@interface AWEParameteriedCacheUtils : NSObject

+ (BOOL)cacheFileIsExistWithKey:(id)a0 fileType:(long long)a1;
+ (id)generateCacheFilePathWithKey:(id)a0 fileType:(long long)a1;
+ (id)cacheFileWithURL:(id)a0 key:(id)a1 fileType:(long long)a2 shootWay:(id)a3 enterFrom:(id)a4 progress:(id /* block */)a5 completion:(id /* block */)a6;

@end
