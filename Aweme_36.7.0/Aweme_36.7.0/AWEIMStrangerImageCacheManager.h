@class YYMemoryCache;

@interface AWEIMStrangerImageCacheManager : NSObject

@property (retain, nonatomic) YYMemoryCache *cache;
@property (retain, nonatomic) YYMemoryCache *coverCache;

+ (id)hMacMD5String:(id)a0;
+ (id)sharedInstance;

- (id)coverImageForKey:(id)a0;
- (void)saveAvatarImage:(id)a0 forKey:(id)a1;
- (void)saveCoverImage:(id)a0 forKey:(id)a1;
- (id)avatarImageForKey:(id)a0;
- (id)getCacheKey:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;

@end
