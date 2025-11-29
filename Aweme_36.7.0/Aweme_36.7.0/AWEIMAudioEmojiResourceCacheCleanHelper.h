@class NSString;

@interface AWEIMAudioEmojiResourceCacheCleanHelper : NSObject <AWEPerfResourceCleanStrategy>

@property (copy, nonatomic) NSString *cachePath;
@property (copy, nonatomic) id /* block */ cleanExpiredCacheBlock;
@property (copy, nonatomic) id /* block */ cleanAllCacheBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)cleanPaths;
- (void)cleanResourceWithStrategy:(unsigned long long)a0;
- (double)cleanSizeWithStrategy:(unsigned long long)a0;
- (double)p_expiredCacheSize;
- (double)p_allCacheSize;
- (void)configWithCachePath:(id)a0 cleanExpiredCacheBlock:(id /* block */)a1 cleanAllCacheBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
