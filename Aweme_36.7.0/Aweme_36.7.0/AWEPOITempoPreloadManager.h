@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPOITempoPreloadManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *urlToKey;
@property (retain, nonatomic) NSMutableDictionary *memCache;

+ (id)sharedManager;

- (id)cacheKeyWithURL:(id)a0;
- (void)cachePreloadData:(id)a0 templateURL:(id)a1;
- (void)preloadTempo:(id)a0 level:(unsigned long long)a1 engine:(id)a2;
- (void)setObject:(id)a0 forCacheKey:(id)a1;
- (id)objectForCacheKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
