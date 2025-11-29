@interface BDUGLocationImplCache : NSObject

+ (void)removeCachedInfo;
+ (id)cachedModelWithCacheTime:(double)a0 intelUploadInterval:(double)a1 desiredAccuracy:(long long)a2 token:(id)a3;
+ (void)saveCachedInfo:(id)a0;
+ (BOOL)tailCacheProcessWithInfo:(id)a0;
+ (id)cachedModel;

@end
