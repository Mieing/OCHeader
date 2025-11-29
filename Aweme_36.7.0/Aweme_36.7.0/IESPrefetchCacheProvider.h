@protocol IESPrefetchCacheStorageProtocol, IESPrefetchMonitorService;

@interface IESPrefetchCacheProvider : NSObject

@property (weak, nonatomic) id<IESPrefetchCacheStorageProtocol> storage;
@property (weak, nonatomic) id<IESPrefetchMonitorService> monitorService;

- (id)modelForKey:(id)a0;
- (void)removeModelForKey:(id)a0;
- (id)allCaches;
- (id)fetchForKey:(id)a0;
- (id)initWithCacheStorage:(id)a0;
- (void)addCacheWithModel:(id)a0 forKey:(id)a1;
- (void)cleanExpiredDataIfNeed;
- (void).cxx_destruct;

@end
