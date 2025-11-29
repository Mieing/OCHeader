@class NSString;

@interface AWEACCWebImageImpl : NSObject <ACCWebImageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestImageWithURLArray:(id)a0 completion:(id /* block */)a1;
+ (id)animatedImageView;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2 completion:(id /* block */)a3;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1;
+ (void)button:(id)a0 setImageWithURLArray:(id)a1 forState:(unsigned long long)a2 placeholder:(id)a3 completion:(id /* block */)a4;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2 progress:(id /* block */)a3 postProcess:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)requestImageWithURLArray:(id)a0 cacheName:(id)a1 completion:(id /* block */)a2;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2;
+ (void)cancelImageViewRequest:(id)a0;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 options:(long long)a2;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2 options:(long long)a3 completion:(id /* block */)a4;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 options:(long long)a2 sizeLimit:(struct CGSize { double x0; double x1; })a3;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 options:(long long)a2 postProcess:(id /* block */)a3;
+ (void)imageView:(id)a0 setImageWithURL:(id)a1 options:(long long)a2;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2 cacheName:(id)a3 options:(long long)a4 sizeLimit:(struct CGSize { double x0; double x1; })a5 progress:(id /* block */)a6 postProcess:(id /* block */)a7 transformer:(id)a8 completion:(id /* block */)a9;


@end
