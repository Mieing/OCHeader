@interface BDPWebImageCenter : NSObject

+ (BOOL)isAnimatedImage:(id)a0;
+ (void)imageView:(id)a0 setImageWithURL:(id)a1 placeholder:(id)a2;
+ (void)imageView:(id)a0 setImageWithURL:(id)a1 placeholder:(id)a2 completion:(id /* block */)a3;
+ (void)button:(id)a0 setImageWithURL:(id)a1 forState:(unsigned long long)a2;
+ (void)prefetchImageWithURL:(id)a0 priority:(unsigned long long)a1;
+ (void)requestImageWithURL:(id)a0 priority:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (BOOL)imageCacheContainsURL:(id)a0;
+ (id)imageFromCacheWithURL:(id)a0;
+ (id)createSpecializedImageView;
+ (void)imageView:(id)a0 setAnimationImageWithURL:(id)a1;
+ (void)batchedPrefetchImagesWithURLs:(id)a0 priority:(unsigned long long)a1;
+ (void)button:(id)a0 setBackgroundImageWithURL:(id)a1 forState:(unsigned long long)a2;
+ (void)setImageWithBlock:(id /* block */)a0 url:(id)a1;
+ (void)imageView:(id)a0 setImageAsyncWithURL:(id)a1 placeholder:(id)a2 completion:(id /* block */)a3;
+ (void)button:(id)a0 setImageAsyncWithURL:(id)a1 forState:(unsigned long long)a2;
+ (void)button:(id)a0 setBackgroundImageAsyncWithURL:(id)a1 forState:(unsigned long long)a2;
+ (void)requestImageWithURL:(id)a0 priority:(unsigned long long)a1 headers:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)requestRawImageWithURL:(id)a0 priority:(unsigned long long)a1 targetSize:(struct CGSize { double x0; double x1; })a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)rawImageWithData:(id)a0;
+ (id)dataRepresentationOf:(id)a0;
+ (id)imageWithData:(id)a0;

@end
