@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TTAdSplashCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheDictionary;
@property (retain, nonatomic) NSMutableDictionary *topViewCacheDictionary;
@property (nonatomic) double defaultTimeoutInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;

+ (BOOL)hasCacheSize;
+ (void)reCalculateCacheSize;
+ (BOOL)isVideoCacheExistWithVideoId:(id)a0;
+ (id)cachePath4VideoWithVideoId:(id)a0;
+ (BOOL)isImageResourceExist:(id)a0;
+ (BOOL)isFallbackExist:(id)a0;
+ (BOOL)isRealtimeImageResourceExist:(id)a0;
+ (BOOL)isRealtimeFallbackExist:(id)a0;
+ (BOOL)isRealTimeVideoCacheExistWithVideoId:(id)a0;
+ (id)sharedCache;
+ (float)cacheSize;
+ (void)initialize;

- (void)saveCacheDictionary;
- (void)setData:(id)a0 forMD5Key:(id)a1 withTimeoutInterval:(double)a2;
- (void)addCacheDictObj:(id)a0 key:(id)a1;
- (void)removeCacheDictItemForKey:(id)a0;
- (void)removeItemFromCache:(id)a0 updateSize:(BOOL)a1;
- (void)deleteDataAtPath:(id)a0;
- (BOOL)isCacheExistWithMD5Key:(id)a0;
- (id)fileCachePathIfExist:(id)a0;
- (BOOL)isCacheExist:(id)a0;
- (id)dataForUrl:(id)a0;
- (id)imageInfoModelCachePathIfExist:(id)a0;
- (void)clearResource;
- (void)createIfNotExistPath:(id)a0;
- (BOOL)isZipFile:(id)a0;
- (id)filePathIfExist:(id)a0 type:(long long)a1;
- (id)dataForKey:(id)a0 type:(long long)a1;
- (BOOL)isCacheExist:(id)a0 type:(long long)a1;
- (void)updateResourceExpiresWithKey:(id)a0 expires:(double)a1 type:(long long)a2;
- (void)setData:(id)a0 resourceModel:(id)a1;
- (void)clearResourceRegularly;
- (id)preloadKeyForSplashAdId:(id)a0;
- (void)setPreloadVideoInfo:(id)a0 forSplashAdId:(id)a1 withTimeoutInterval:(double)a2;
- (void)initTopViewCacheDict;
- (id)getRealKeyWithKey:(id)a0 type:(long long)a1;
- (void)setAlphaVideoData:(id)a0 forMD5Key:(id)a1 withTimeoutInterval:(double)a2;
- (id)realTimeDataForUrl:(id)a0;
- (void)addTopViewCacheDictObj:(id)a0 key:(id)a1;
- (id)preloadVideoInfoForSplashAdId:(id)a0;
- (BOOL)clearTopViewResource;
- (void)removeTopViewCacheDictItemForKey:(id)a0;
- (void)removeCacheWithFileName:(id)a0;
- (void)setData:(id)a0 forKey:(id)a1 expires:(double)a2;
- (void)setData:(id)a0 forVideoId:(id)a1 expires:(double)a2;
- (void)deletePreloadKeyForSplashAdid:(id)a0;
- (unsigned long long)getDiskCount;
- (void)calculateSizeWithCompletionBlock:(id /* block */)a0;
- (id)cachePath;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)writeData:(id)a0 toPath:(id)a1;
- (void)dealloc;
- (void)saveAfterDelay;
- (unsigned long long)getSize;

@end
