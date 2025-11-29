@class YYMemoryCache;

@interface AWEGrouponFeedLynxCachePool : NSObject

@property (retain, nonatomic) YYMemoryCache *lynxCache;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)__bundleForUrl:(id)a0;
- (void)setLynxCache:(id)a0 url:(id)a1 pageType:(long long)a2;
- (id)lynxCacheWithUrl:(id)a0 pageType:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
