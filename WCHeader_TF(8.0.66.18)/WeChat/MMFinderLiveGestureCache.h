@class NSArray, NSMutableDictionary, NSString, NSMutableArray;

@interface MMFinderLiveGestureCache : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *gesturesDict;
@property (retain, nonatomic) NSMutableDictionary *anchorSupportedGesturesDict;
@property (retain, nonatomic) NSMutableArray *validateCompletionQueue;
@property (retain, nonatomic) NSMutableArray *cacheUpdateQueue;
@property (readonly, nonatomic) NSArray *gestures;
@property (readonly, nonatomic) NSArray *anchorSupportedGestures;
@property (retain, nonatomic) NSArray *gestureDefaultEnabledLiveTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cachedGesturesWithCompletionBlock:(id /* block */)a0;
- (id)cachedGestureWithId:(id)a0;
- (void)updateCacheWithUpdateDirectives:(id)a0;
- (void)onServiceInit;
- (void)validateCachedGesturesWithCompletionBlock:(id /* block */)a0;
- (void)dequeueCacheUpdateWithUpdateDirectives:(id)a0;
- (void)updateCacheWithUpdateDirectivesEx:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
