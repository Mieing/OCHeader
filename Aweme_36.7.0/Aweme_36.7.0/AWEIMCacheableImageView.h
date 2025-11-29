@class BDWebImageRequest, AWEIMBlockOperation;

@interface AWEIMCacheableImageView : BDImageView

@property (weak, nonatomic) BDWebImageRequest *bdRequest;
@property (retain, nonatomic) AWEIMBlockOperation *fileLoadOperation;

- (void)im_setImage:(id)a0;
- (void)im_setImageWithFilePath:(id)a0 placeholder:(id)a1 imageBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)im_setImageWithURL:(id)a0 placeholder:(id)a1 options:(long long)a2 cacheName:(id)a3 completion:(id /* block */)a4;
- (void)im_cancelImageLoad;
- (void)im_canceBDImageLoadIfNeeded;
- (void)im_canceDiskImageLoadIfNeeded;
- (void)im_setImageWithURL:(id)a0 placeholder:(id)a1 options:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
