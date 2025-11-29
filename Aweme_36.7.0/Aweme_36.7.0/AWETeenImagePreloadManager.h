@interface AWETeenImagePreloadManager : NSObject

+ (void)preloadRemainImageWithModel:(id)a0 currentIndex:(long long)a1 referString:(id)a2 completion:(id /* block */)a3;
+ (void)preloadImageWithURLArray:(id)a0 SRTransformer:(id)a1 completion:(id /* block */)a2;
+ (id)cacheName;
+ (unsigned long long)imageOptions;

@end
