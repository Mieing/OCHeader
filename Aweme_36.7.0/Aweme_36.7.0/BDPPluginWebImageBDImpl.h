@class NSString;

@interface BDPPluginWebImageBDImpl : NSObject <BDPWebImagePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)imageView:(id)a0 setImageWithName:(id)a1;
- (void)button:(id)a0 setImageWithName:(id)a1 forState:(unsigned long long)a2;
- (BOOL)isAnimatedImage:(id)a0;
- (void)imageView:(id)a0 setImageWithURL:(id)a1 placeholder:(id)a2;
- (void)imageView:(id)a0 setImageWithURL:(id)a1 placeholder:(id)a2 completion:(id /* block */)a3;
- (void)button:(id)a0 setImageWithURL:(id)a1 forState:(unsigned long long)a2;
- (void)prefetchImageWithURL:(id)a0 priority:(unsigned long long)a1;
- (void)requestImageWithURL:(id)a0 priority:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)imageCacheContainsURL:(id)a0;
- (id)imageFromCacheWithURL:(id)a0;
- (id)createSpecializedImageView;
- (void)imageView:(id)a0 setAnimationImageWithURL:(id)a1;
- (void)button:(id)a0 setBackgroundImageWithUrl:(id)a1 forState:(unsigned long long)a2;
- (void)requestImageWithURL:(id)a0 priority:(unsigned long long)a1 headers:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (id)requestRawImageWithURL:(id)a0 priority:(unsigned long long)a1 targetSize:(struct CGSize { double x0; double x1; })a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (id)requestRawImageWithURL:(id)a0 priority:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)rawImageWithData:(id)a0;
- (id)dataRepresentationOf:(id)a0;
- (void)animatedGifDataWithImage:(id)a0 completion:(id /* block */)a1;
- (void)button:(id)a0 setImageWithPlaceholder:(id)a1 withUrl:(id)a2 forState:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)button:(id)a0 setBackgroundImageWithPlaceholder:(id)a1 withUrl:(id)a2 forState:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)imageView:(id)a0 setImageWithPlaceholder:(id)a1 withUrl:(id)a2 completion:(id /* block */)a3;
- (void)button:(id)a0 setBackgroundImageWithName:(id)a1 forState:(unsigned long long)a2;
- (void)imageView:(id)a0 setImageWithPlaceholder:(id)a1 withUrl:(id)a2;
- (void)button:(id)a0 setImageWithPlaceholder:(id)a1 withUrl:(id)a2 forState:(unsigned long long)a3;
- (void)button:(id)a0 setBackgroundImageWithPlaceholder:(id)a1 withUrl:(id)a2 forState:(unsigned long long)a3;
- (id)imageWithData:(id)a0;

@end
