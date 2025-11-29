@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDARVTemplateCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *memCache;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *cacheLock;

+ (id)sharedCache;

- (void)clearMemory;
- (void)storeTemplateData:(id)a0 forURL:(id)a1 enterFrom:(long long)a2 completion:(id /* block */)a3;
- (id)templateDataFromCacheForURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
