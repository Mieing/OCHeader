@interface FlowWebImage : NSObject

+ (id)flow_prefetchImageWithUrlString:(id)a0 category:(id)a1 options:(long long)a2 config:(id)a3 bizTag:(id)a4 blocks:(id)a5;
+ (void)cacheImageWithCacheKey:(id)a0 cacheName:(id)a1 callBack:(id /* block */)a2;
+ (void)setCacheWithImage:(id)a0 imageData:(id)a1 cacheName:(id)a2 cacheKey:(id)a3 cacheType:(unsigned long long)a4 callBack:(id /* block */)a5;
+ (id)cacheImageWithURLString:(id)a0 cacheName:(id)a1;
+ (id)imageWithCacheKey:(id)a0;
+ (id)requestExternalImageWithURLString:(id)a0 cacheKey:(id)a1 bizTag:(id)a2 config:(id)a3 completion:(id /* block */)a4;
+ (id)srRequestConfigWithImageSize:(struct CGSize { double x0; double x1; })a0;
+ (id)flow_requestImageWithUriString:(id)a0 urlString:(id)a1 cacheKey:(id)a2 cacheName:(id)a3 bizTag:(id)a4 completion:(id /* block */)a5;
+ (id)cacheImageWithCacheKey:(id)a0 cacheName:(id)a1;
+ (id)requestExternalImageWithURLString:(id)a0 cacheKey:(id)a1 bizTag:(id)a2 completion:(id /* block */)a3;
+ (id)flow_requestImageWithUrlString:(id)a0 cacheKey:(id)a1 config:(id)a2 completion:(id /* block */)a3;
+ (BOOL)hasExpire:(id)a0;
+ (void)requestImageWithURL:(id)a0 completion:(id /* block */)a1;
+ (void)setCacheWithImage:(id)a0 imageData:(id)a1 cacheName:(id)a2 URLString:(id)a3 cacheType:(unsigned long long)a4 callBack:(id /* block */)a5;
+ (id)imageWithCacheKey:(id)a0 cacheName:(id)a1;
+ (id)flow_requestImageWithUriString:(id)a0 urlString:(id)a1 cacheKey:(id)a2 options:(long long)a3 config:(id)a4 bizTag:(id)a5 completion:(id /* block */)a6;
+ (id)sceneTagWithBizTag:(id)a0;
+ (id)pageTagWithBizTag:(id)a0;
+ (id)flow_hitCacheWithCacheKey:(id)a0 cacheName:(id)a1;
+ (id)flow_hitCacheWithURL:(id)a0 cacheName:(id)a1;
+ (void)trackURLExpiresItem:(id)a0 biztag:(id)a1;
+ (id)requestImageWithURL:(id)a0 alternativeURLs:(id)a1 options:(long long)a2 cacheKey:(id)a3 bizTag:(id)a4 config:(id)a5 flowRequest:(id)a6 progress:(id /* block */)a7 complete:(id /* block */)a8;
+ (id)uriWithURLString:(id)a0;
+ (id)refreshURLWithURLString:(id)a0 uri:(id)a1 cacheKey:(id)a2 options:(long long)a3 config:(id)a4 completion:(id /* block */)a5;
+ (id)refreshExpireURLWithURLString:(id)a0 completion:(id /* block */)a1;
+ (id)flow_substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 string:(id)a1;
+ (void)clearImageCacheForKey:(id)a0;
+ (void)checkClearImageCacheConfig;
+ (void)cacheImageWithURLString:(id)a0 cacheName:(id)a1 callBack:(id /* block */)a2;
+ (void)setUp;
+ (BOOL)isNetworkError:(id)a0;

@end
