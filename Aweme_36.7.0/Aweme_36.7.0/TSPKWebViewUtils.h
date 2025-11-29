@class NSMutableArray;
@protocol TSPKLock;

@interface TSPKWebViewUtils : NSObject

@property (retain, nonatomic) NSMutableArray *mutableCacheURLArray;
@property (retain, nonatomic) id<TSPKLock> lock;

+ (id)sharedUtil;

- (void)cacheURL:(id)a0;
- (id)getCacheURLArray;
- (void).cxx_destruct;
- (id)init;

@end
