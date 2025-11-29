@interface NunkiDecisionCacheResult : NSObject

@property (nonatomic) BOOL isPartialCache;
@property (nonatomic) BOOL cacheableDecisionResult;

- (id)init;

@end
