@class YYMemoryCache;

@interface AWEShowAdInsertFirstShowManager : NSObject

@property (retain, nonatomic) YYMemoryCache *memoryCache;

+ (id)sharedInstance;

- (BOOL)containsItemId:(id)a0 requestedItemId:(id)a1;
- (void)addAdItemId:(id)a0 requestedItemId:(id)a1;
- (void)removeItemId:(id)a0 requestedItemId:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
