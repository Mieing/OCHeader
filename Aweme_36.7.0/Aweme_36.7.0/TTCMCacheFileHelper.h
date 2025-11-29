@interface TTCMCacheFileHelper : NSObject

+ (void)removeFileCacheByKey:(id)a0;
+ (long long)getAllCacheSize;
+ (long long)getCacheSizeByKey:(id)a0;
+ (void)removeAllFileCache;
+ (id)shareInstance;

- (id)init;

@end
