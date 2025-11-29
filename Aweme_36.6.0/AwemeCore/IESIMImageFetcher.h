@interface IESIMImageFetcher : NSObject

+ (id)requestImage:(id)a0 alternativeURLs:(id)a1 options:(long long)a2 cacheName:(id)a3 progress:(id /* block */)a4 complete:(id /* block */)a5;
+ (id)requestImage:(id)a0 options:(long long)a1 complete:(id /* block */)a2;
+ (id)prefetchImagesWithURLs:(id)a0 cacheName:(id)a1 category:(id)a2 options:(long long)a3;
+ (id)requestImage:(id)a0 progress:(id /* block */)a1 complete:(id /* block */)a2;
+ (id)prefetchImageWithURL:(id)a0 cacheName:(id)a1 category:(id)a2 options:(long long)a3;
+ (id)prefetchImagesWithURLs:(id)a0 category:(id)a1 options:(long long)a2;
+ (id)requestImage:(id)a0 alternativeURLs:(id)a1 options:(long long)a2 config:(id)a3 blocks:(id)a4;
+ (id)requestImage:(id)a0 alternativeURLs:(id)a1 options:(long long)a2 cacheName:(id)a3 transformer:(id)a4 progress:(id /* block */)a5 complete:(id /* block */)a6;
+ (id)prefetchImageWithURL:(id)a0 category:(id)a1 options:(long long)a2 config:(id)a3 blocks:(id)a4;
+ (id)requestImage:(id)a0 options:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 complete:(id /* block */)a3;
+ (id)requestImage:(id)a0 alternativeURLs:(id)a1 options:(long long)a2 timeoutInterval:(double)a3 cacheName:(id)a4 transformer:(id)a5 progress:(id /* block */)a6 complete:(id /* block */)a7;
+ (id)requestImage:(id)a0 alternativeURLs:(id)a1 options:(long long)a2 size:(struct CGSize { double x0; double x1; })a3 timeoutInterval:(double)a4 cacheName:(id)a5 transformer:(id)a6 decryptBlock:(id /* block */)a7 progress:(id /* block */)a8 complete:(id /* block */)a9;
+ (id)prefetchImageWithURL:(id)a0 category:(id)a1 options:(long long)a2 config:(id)a3;
+ (id)requestImage:(id)a0 alternativeURLs:(id)a1 options:(long long)a2 timeoutInterval:(double)a3 cacheName:(id)a4 transformer:(id)a5 decryptBlock:(id /* block */)a6 progress:(id /* block */)a7 complete:(id /* block */)a8;
+ (id)prefetchImageWithURLs:(id)a0 category:(id)a1 options:(long long)a2 configs:(id)a3;
+ (id)prefetchImageWithURL:(id)a0 category:(id)a1 options:(long long)a2;

@end
