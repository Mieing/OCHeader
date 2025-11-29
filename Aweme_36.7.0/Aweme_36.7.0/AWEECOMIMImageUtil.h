@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEECOMIMImageUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *fullURLMapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *urlMapperQueue;

+ (id)ecomim_imageNamed:(id)a0;
+ (void)ecomim_setDownsampleImageWithURL:(id)a0 pigeonBizType:(id)a1 imageView:(id)a2;
+ (void)imageView:(id)a0 offlineImageNamed:(id)a1;
+ (void)ecomim_setDownsampleImageWithURL:(id)a0 placeholderImage:(id)a1 imageView:(id)a2 pigeonBizType:(id)a3 completion:(id /* block */)a4;
+ (void)ecomim_setImageWithURLString:(id)a0 pigeonBizType:(id)a1 imageView:(id)a2;
+ (id)ecomim_imageFromColor:(id)a0;
+ (void)ecomim_setDownsampleImageWithURL:(id)a0 placeholderImage:(id)a1 pigeonBizType:(id)a2 imageView:(id)a3;
+ (void)button:(id)a0 setOfflineImageNamed:(id)a1 forState:(unsigned long long)a2;
+ (id)avatarPlaceholderImage;
+ (void)imageView:(id)a0 offlineImageNamed:(id)a1 theme:(long long)a2;
+ (void)ecomim_setImageWithURLString:(id)a0 placeholderImage:(id)a1 imageView:(id)a2 pigeonBizType:(id)a3 completion:(id /* block */)a4;
+ (id)ecomim_imageFromColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)offlineImageNamed:(id)a0;
+ (void)button:(id)a0 setOfflineBackgroundImageNamed:(id)a1 forState:(unsigned long long)a2;
+ (void)button:(id)a0 setOfflineImageNamed:(id)a1 forState:(unsigned long long)a2 theme:(long long)a3;
+ (void)button:(id)a0 setOfflineBackgroundImageNamed:(id)a1 forState:(unsigned long long)a2 theme:(long long)a3;
+ (id)shared;

- (void)requestImage:(id)a0 options:(long long)a1 pigeonBizType:(id)a2 completion:(id /* block */)a3;
- (void)saveImageToAlbumWithImageURL:(id)a0 pigeonBizType:(id)a1;
- (BOOL)needRequestFullURL:(id)a0;
- (void)innerRequestImage:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (id)URITransformToURLFailedError;
- (void)downsampleImageView:(id)a0 imageURL:(id)a1 placeholder:(id)a2 options:(long long)a3 pigeonBizType:(id)a4 completion:(id /* block */)a5;
- (void)innerDownsampleImageView:(id)a0 imageURL:(id)a1 placeholder:(id)a2 options:(long long)a3 completion:(id /* block */)a4;
- (BOOL)isURI:(id)a0;
- (BOOL)URLIsExpired:(id)a0;
- (id)getFullURLCacheWithURI:(id)a0;
- (void)cacheFullURL:(id)a0 withURI:(id)a1;
- (void)saveImageToAlbumWithImage:(id)a0;
- (void)button:(id)a0 controlState:(unsigned long long)a1 imageURL:(id)a2 placeholder:(id)a3 options:(long long)a4 pigeonBizType:(id)a5 completion:(id /* block */)a6;
- (void)requestImageFullURLWithImageXURI:(id)a0 pigeonBizType:(id)a1 completion:(id /* block */)a2;
- (id)innerRequestImageFullURLWithImageXURI:(id)a0 pigeonBizType:(id)a1 completion:(id /* block */)a2;
- (void)imageView:(id)a0 imageURL:(id)a1 placeholder:(id)a2 options:(long long)a3 pigeonBizType:(id)a4 completion:(id /* block */)a5;
- (void)innerImageView:(id)a0 imageURL:(id)a1 placeholder:(id)a2 options:(long long)a3 completion:(id /* block */)a4;
- (void)innerButton:(id)a0 controlState:(unsigned long long)a1 imageURL:(id)a2 placeholder:(id)a3 options:(long long)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
