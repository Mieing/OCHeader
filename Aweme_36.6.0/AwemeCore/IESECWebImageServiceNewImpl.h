@class NSString;

@interface IESECWebImageServiceNewImpl : NSObject <IESECWebImageServiceNew>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestImageWithURLArray:(id)a0 bizTag:(id)a1 sceneTag:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 options:(unsigned long long)a4 logExtra:(id)a5 perfBlock:(id /* block */)a6 requestConfig:(id /* block */)a7 completion:(id /* block */)a8;
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
+ (void)preloadImageCustomWithURLArray:(id)a0 bizTag:(id)a1 sceneTag:(id)a2 options:(unsigned long long)a3 logExtra:(id)a4 perfBlock:(id /* block */)a5 configModifyBlock:(id /* block */)a6 completion:(id /* block */)a7;
+ (void)preloadImageWithURLArray:(id)a0 bizTag:(id)a1 sceneTag:(id)a2 options:(unsigned long long)a3 logExtra:(id)a4 perfBlock:(id /* block */)a5 configModifyBlock:(id /* block */)a6 completion:(id /* block */)a7;
+ (BOOL)enableAddQueryFlagForImageRequest;
+ (BOOL)enableImagePrefetchOptionOpt;
+ (BOOL)preloadImageWithDecodeEnabled;
+ (id)p_iesec_requestImageWithURLArray:(id)a0 imageView:(id)a1 placeholder:(id)a2 bizTag:(id)a3 sceneTag:(id)a4 preferredSize:(struct CGSize { double x0; double x1; })a5 options:(unsigned long long)a6 isPreview:(BOOL)a7 isPreload:(BOOL)a8 logExtra:(id)a9 perfBlock:(id /* block */)a10 requestConfig:(id /* block */)a11 completion:(id /* block */)a12;
+ (void)p_iesec_requestImageWithURLArray:(id)a0 bizTag:(id)a1 sceneTag:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 options:(unsigned long long)a4 isPreview:(BOOL)a5 isPreload:(BOOL)a6 logExtra:(id)a7 perfBlock:(id /* block */)a8 completion:(id /* block */)a9;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2 bizTag:(id)a3 sceneTag:(id)a4 preferredSize:(struct CGSize { double x0; double x1; })a5 options:(unsigned long long)a6 logExtra:(id)a7 perfBlock:(id /* block */)a8 requestConfig:(id /* block */)a9 completion:(id /* block */)a10;
+ (void)p_iesec_imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2 bizTag:(id)a3 sceneTag:(id)a4 preferredSize:(struct CGSize { double x0; double x1; })a5 options:(unsigned long long)a6 isPreview:(BOOL)a7 logExtra:(id)a8 perfBlock:(id /* block */)a9 requestConfig:(id /* block */)a10 completion:(id /* block */)a11;
+ (void)p_iesec_imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2 bizTag:(id)a3 sceneTag:(id)a4 preferredSize:(struct CGSize { double x0; double x1; })a5 options:(unsigned long long)a6 isPreview:(BOOL)a7 logExtra:(id)a8 perfBlock:(id /* block */)a9 completion:(id /* block */)a10;
+ (id)logAppendMap;
+ (id)p_iesec_curPageName;
+ (id)p_iesec_updateBizTagForUrl:(id)a0;
+ (id)p_iesec_updateSceneTagForUrl:(id)a0 imageView:(id)a1;
+ (id)p_placeholderWithImageView:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 andImageXResult:(id)a2;
+ (id)appendLogWithBizTag:(id)a0 logExtra:(id)a1;
+ (id)p_iesec_requestImageWithURLArray:(id)a0 index:(long long)a1 bizTag:(id)a2 sceneTag:(id)a3 preferredSize:(struct CGSize { double x0; double x1; })a4 options:(unsigned long long)a5 requestConfig:(id /* block */)a6 completion:(id /* block */)a7;
+ (void)p_iesec_imageView:(id)a0 fetchImageWithURLArray:(id)a1 placeholder:(id)a2 bizTag:(id)a3 sceneTag:(id)a4 preferredSize:(struct CGSize { double x0; double x1; })a5 options:(unsigned long long)a6 requestConfig:(id /* block */)a7 completion:(id /* block */)a8;
+ (BOOL)findSceneTagFromResponder;
+ (id)requestImageWithURLArray:(id)a0 imageView:(id)a1 placeholder:(id)a2 bizTag:(id)a3 sceneTag:(id)a4 preferredSize:(struct CGSize { double x0; double x1; })a5 options:(unsigned long long)a6 logExtra:(id)a7 perfBlock:(id /* block */)a8 completion:(id /* block */)a9;
+ (void)p_iesec_imageView:(id)a0 fetchImageWithURLArray:(id)a1 placeholder:(id)a2 bizTag:(id)a3 sceneTag:(id)a4 preferredSize:(struct CGSize { double x0; double x1; })a5 options:(unsigned long long)a6 completion:(id /* block */)a7;


@end
