@class NSString;

@interface IESECWebImageServiceImpl : NSObject <IESECWebImageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestImageWithURLArray:(id)a0 completion:(id /* block */)a1;
+ (void)cancelRequestInImageView:(id)a0;
+ (id)getWebImageAtCacheWithURL:(id)a0;
+ (void)imageView:(id)a0 setImageWithURLArray:(id)a1 placeholder:(id)a2 completion:(id /* block */)a3;


@end
