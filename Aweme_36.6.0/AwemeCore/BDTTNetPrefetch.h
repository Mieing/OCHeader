@class NSMutableDictionary, NSHashTable;

@interface BDTTNetPrefetch : NSObject

@property (retain) NSMutableDictionary *taskMap;
@property (retain) NSHashTable *observers;

+ (id)shared;

- (BOOL)containsRequest:(id)a0;
- (void)addPrefetchObserver:(id)a0;
- (id)prefetchTaskWithPrefetchId:(id)a0;
- (id)dequeuePrefetchTaskWithRequest:(id)a0;
- (void)prefetchWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
