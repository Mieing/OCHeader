@class NSString, NSObject;
@protocol OS_dispatch_queue, AWEUniversalCacheType;

@interface AWENetworkCache : NSObject <AWENetworkCacheType>

@property (retain, nonatomic) id<AWEUniversalCacheType> memoryCache;
@property (retain, nonatomic) id<AWEUniversalCacheType> diskCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveMemoryWarningNotification;
- (void)removeAllCaches;
- (void)objectForStrategy:(id)a0 completion:(id /* block */)a1;
- (void)saveItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setMemoryLimit:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)getItem:(id)a0;

@end
