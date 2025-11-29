@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MADiskCache : NSObject <MADataCache> {
    NSObject<OS_dispatch_queue> *_diskCacheQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCacheFilePath:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a0 cacheKey:(id)a1;
+ (int)isExistCacheWithIndexName:(id)a0 withTile:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a1;
+ (BOOL)createCachedDataPath:(id)a0 withIndexName:(id)a1 withDataName:(id)a2;
+ (struct JMergePoint { int x0; int x1; })GetJMergeGrid:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a0;
+ (struct JMergePoint { int x0; int x1; })GetJMergeDirection:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a0;

- (id)cachedImage:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a0 withCacheKey:(id)a1;
- (void)addImage:(id)a0 forTile:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a1 withCacheKey:(id)a2;
- (void)removeAllCachedImagesForCacheKey:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)removeAllCachedImages;

@end
