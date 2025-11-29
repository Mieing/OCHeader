@class YYMemoryCache;

@interface AWEIMImagePlaceholderCacheManager : NSObject

@property (retain, nonatomic) YYMemoryCache *placeholderCache;

+ (id)sharedManager;

- (id)imageforKey:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
