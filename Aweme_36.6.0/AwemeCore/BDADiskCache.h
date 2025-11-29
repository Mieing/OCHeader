@class NSOperationQueue, NSMutableDictionary;

@interface BDADiskCache : NSObject {
    BOOL _stopGarbageCollection;
}

@property (retain) NSMutableDictionary *cacheDictionary;
@property (retain) NSOperationQueue *operationQueue;
@property double defaultTimeoutInterval;

+ (BOOL)hasCacheSize;
+ (void)reCalculateCacheSize;
+ (BOOL)isVideoCacheExistWithVideoId:(id)a0;
+ (id)cachePath4VideoWithVideoId:(id)a0;
+ (id)sharedCache;
+ (float)cacheSize;
+ (void)initialize;

- (void)saveCacheDictionary;
- (void)setData:(id)a0 forMD5Key:(id)a1 withTimeoutInterval:(double)a2;
- (void)performDiskWriteOperation:(id)a0;
- (void)addCacheDictObj:(id)a0 key:(id)a1;
- (void)removeCacheDictItemForKey:(id)a0;
- (void)deleteDataByKeyArrayAndSavePathDictionary:(id)a0;
- (void)removeItemFromCache:(id)a0 updateSize:(BOOL)a1;
- (void)deleteDataAtPath:(id)a0;
- (BOOL)isCacheExistWithMD5Key:(id)a0;
- (BOOL)quickCheckIsCacheExist:(id)a0;
- (id)fileCachePathIfExist:(id)a0;
- (BOOL)isCacheExist:(id)a0;
- (id)dataForUrl:(id)a0;
- (void)setData:(id)a0 forImageInfosModel:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1 withTimeoutInterval:(double)a2;
- (void)setData:(id)a0 forImageInfosModel:(id)a1 withTimeoutInterval:(double)a2;
- (void)startGarbageCollection;
- (void)enterBackgroundClear;
- (void)removeCacheForUrl:(id)a0;
- (void)setData:(id)a0 forVideoId:(id)a1;
- (BOOL)quickCheckIsImageInfosModelExist:(id)a0;
- (id)imageInfoModelCachePathIfExist:(id)a0;
- (BOOL)isImageInfosModelCacheExist:(id)a0;
- (BOOL)isImageCacheExist:(id)a0;
- (id)dataForURLAndHeaders:(id)a0;
- (id)dataForImageInfosModel:(id)a0;
- (void)stopGarbageCollection;
- (void)setData:(id)a0 forKey:(id)a1;
- (id)cachePath;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)writeData:(id)a0 toPath:(id)a1;
- (void)dealloc;
- (void)saveAfterDelay;

@end
