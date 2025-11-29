@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MAMemoryCache : NSObject <MADataCache> {
    NSMutableDictionary *_memoryCache;
    NSObject<OS_dispatch_queue> *_memoryCacheQueue;
    unsigned long long _memoryCacheCapacity;
    double _memoryCachePeriod;
}

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) double period;
@property (nonatomic) BOOL shouldRefreshCachedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cachedImage:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a0 withCacheKey:(id)a1;
- (void)addImage:(id)a0 forTile:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a1 withCacheKey:(id)a2;
- (void)removeAllCachedImagesForCacheKey:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 expiryPeriod:(double)a1;
- (void)makeSpaceInCache;
- (void)removeTile:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)removeAllCachedImages;

@end
