@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEDataLayerNetworkCacheManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)sharedManager;

- (id)storageWithConfig:(id)a0;
- (void)getNetworkCacheWithIdentifier:(id)a0 config:(id)a1 completion:(id /* block */)a2;
- (void)setNetworkCache:(id)a0 cacheIdentifier:(id)a1 config:(id)a2;
- (void)clearNetworkCacheWithIdentifier:(id)a0 config:(id)a1;
- (void).cxx_destruct;

@end
