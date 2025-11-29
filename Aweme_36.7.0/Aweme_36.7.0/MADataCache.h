@class NSString, MAMemoryCache, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MADataCache : NSObject <MADataCache> {
    MAMemoryCache *_memoryCache;
    MAMemoryCache *_trafficCache;
    double _expiryPeriod;
    NSObject<OS_dispatch_queue> *_dataCacheQueue;
}

@property (readonly, nonatomic) NSMutableArray *dataCaches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tileHash:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a0;
+ (id)tileKey:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a0 cacheKey:(id)a1;

- (id)cachedImage:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a0 withCacheKey:(id)a1;
- (void)addImage:(id)a0 forTile:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a1 withCacheKey:(id)a2;
- (void)removeAllCachedImagesForCacheKey:(id)a0;
- (void)initMemoryCache;
- (void)initDiskCache;
- (id)initWithExpiryPeriod:(double)a0;
- (void)insertCache:(id)a0 atIndex:(unsigned long long)a1;
- (id)tileCaches;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)addCache:(id)a0;
- (void)removeAllCachedImages;

@end
