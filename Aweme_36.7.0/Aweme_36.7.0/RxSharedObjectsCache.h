@class NSMutableDictionary;

@interface RxSharedObjectsCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;

- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)init;
- (id)allObjectsWithClass:(Class)a0;

@end
