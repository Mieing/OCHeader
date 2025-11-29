@protocol TSPKCacheUpdateStrategy, TSPKCacheStore;

@interface TSPKCacheProcessor : NSObject

@property (retain, nonatomic) id<TSPKCacheStore> store;
@property (retain, nonatomic) id<TSPKCacheUpdateStrategy> strategy;

+ (id)initWithStrategy:(id)a0 store:(id)a1;

- (BOOL)needUpdate:(id)a0;
- (void)updateCache:(id)a0 newValue:(id)a1;
- (void).cxx_destruct;
- (id)get:(id)a0;

@end
