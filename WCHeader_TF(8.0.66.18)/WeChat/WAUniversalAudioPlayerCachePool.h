@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WAUniversalAudioPlayerCachePool : MMObject

@property (retain, nonatomic) NSMutableDictionary *cachePool;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic) unsigned long long currentMemoryUsage;
@property (nonatomic) unsigned long long memoryCapacity;
@property (nonatomic) unsigned long long preferredMemoryUsageAfterPurge;

- (id)initWithSuffix:(id)a0;
- (void)dealloc;
- (void)addCache:(id)a0 forIdentifier:(id)a1;
- (id)cacheForKey:(id)a0;
- (void)removeAllCache;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;

@end
