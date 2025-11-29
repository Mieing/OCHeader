@class NSString;

@interface AWEECWebImageServiceNewImpl : NSObject <AWEECWebImageServiceNew>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadImageWithURLArray:(id)a0 bizTag:(id)a1 sceneTag:(id)a2 options:(unsigned long long)a3 logExtra:(id)a4 perfBlock:(id /* block */)a5 completion:(id /* block */)a6;
+ (void)registerLogAppendDictionary:(id)a0 withBizTag:(id)a1;
+ (void)cancelRequestInImageView:(id)a0;
+ (id)getPreviewImageAtCacheWithURL:(id)a0;
+ (id)getWebImageAtCacheWithURL:(id)a0;
+ (void)imageView:(id)a0 setPreviewImageWithURL:(id)a1;
+ (void)preconnectHost:(id)a0 keepAlive:(long long)a1;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2 bizTag:(id)a3 sceneTag:(id)a4 preferredSize:(struct CGSize { double x0; double x1; })a5 options:(unsigned long long)a6 logExtra:(id)a7 perfBlock:(id /* block */)a8 completion:(id /* block */)a9;
+ (void)preloadImageWithURL:(id)a0 bizTag:(id)a1 sceneTag:(id)a2 options:(unsigned long long)a3 logExtra:(id)a4 perfBlock:(id /* block */)a5 completion:(id /* block */)a6;
+ (void)requestImageWithURLArray:(id)a0 bizTag:(id)a1 sceneTag:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 options:(unsigned long long)a4 logExtra:(id)a5 perfBlock:(id /* block */)a6 completion:(id /* block */)a7;


@end
