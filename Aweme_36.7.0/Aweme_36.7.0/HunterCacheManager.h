@class HunterCachePool;

@interface HunterCacheManager : NSObject

@property (retain, nonatomic) HunterCachePool *cachePool;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
