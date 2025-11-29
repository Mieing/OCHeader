@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDARVDynamicComponentStorage : NSObject

@property (retain, nonatomic) NSMutableDictionary *memoryCache;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *cacheLock;

+ (id)sharedStorage;

- (void)saveData:(id)a0 uniqueKey:(id)a1;
- (id)dataCacheForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearMemoryCache;

@end
