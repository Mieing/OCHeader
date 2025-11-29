@interface AWEWebImageManagerTools : NSObject

+ (id)imageFromMemoryCacheForImageUrlArray:(id)a0 cacheName:(id)a1;
+ (BOOL)isExistInDefaultImageCache:(id)a0;
+ (void)feedReady;
+ (unsigned long long)totalDiskCost;
+ (void)removeAllMemoryCache;
+ (void)removeAllDiskCache;
+ (void)isExistInCacheName:(id)a0 imageUrlArray:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isExistInCacheName:(id)a0 imageUrlArray:(id)a1;
+ (void)isExistInDefaultImageCache:(id)a0 completion:(id /* block */)a1;
+ (void)performAdditionalOperations:(id)a0 image:(id)a1 from:(long long)a2 request:(id)a3 index:(unsigned long long)a4 cacheName:(id)a5;

@end
