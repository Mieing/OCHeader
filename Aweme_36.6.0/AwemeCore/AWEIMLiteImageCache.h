@class YYMemoryCache;

@interface AWEIMLiteImageCache : NSObject

@property (readonly, nonatomic) YYMemoryCache *cache;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)p_generateMainCache;
- (id)accessCacheWithImageName:(id)a0 inBundle:(id)a1;
- (BOOL)writeCacheOfImage:(id)a0 withImageName:(id)a1 inBundle:(id)a2;
- (id)p_keyForImageName:(id)a0 bundleName:(id)a1;
- (BOOL)p_shouldCacheImage:(id)a0;
- (unsigned int)p_memoryCostOfUIImage:(id)a0;
- (BOOL)p_shouldTrack;
- (id)noticeImageNamed:(id)a0;
- (id)accessImageWithName:(id)a0 inBundle:(id)a1 missCacheBlock:(id /* block */)a2;
- (id)concernImageNamed:(id)a0;
- (BOOL)writeCacheWithContext:(id)a0;
- (id)accessCacheWithContext:(id)a0;
- (void)p_trackCacheReadIfNecessaryWithImageName:(id)a0 bundleName:(id)a1 resultImage:(id)a2;
- (void)p_trackCacheWriteIfNecessaryWithImageName:(id)a0 bundleName:(id)a1 inputImage:(id)a2 cacheSuccess:(BOOL)a3;
- (id)p_commonTrackParamWithImageName:(id)a0 bundleName:(id)a1 image:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
