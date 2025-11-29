@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEDeliveryImageUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *fullURLMapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *urlMapperQueue;
@property (retain, nonatomic) NSMutableDictionary *fetchingFullUrlMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchingFullUrlSerialQueue;

+ (id)awed_imageNamed:(id)a0;
+ (void)awed_setDownsampleImageWithURL:(id)a0 placeholderImage:(id)a1 imageView:(id)a2 pigeonBizType:(id)a3 completion:(id /* block */)a4;
+ (void)awed_setDownsampleImageWithURL:(id)a0 pigeonBizType:(id)a1 imageView:(id)a2;
+ (void)awed_setDownsampleImageWithURL:(id)a0 placeholderImage:(id)a1 pigeonBizType:(id)a2 imageView:(id)a3;
+ (id)awed_imageFromColor:(id)a0;
+ (id)awed_imageFromColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)shared;

- (void)awed_requestImageFullURLWithImageXURI:(id)a0 pigeonBizType:(id)a1 completion:(id /* block */)a2;
- (void)awed_requestImage:(id)a0 options:(long long)a1 pigeonBizType:(id)a2 completion:(id /* block */)a3;
- (void)saveImageToAlbumWithImageURL:(id)a0 pigeonBizType:(id)a1;
- (BOOL)needRequestFullURL:(id)a0;
- (void)innerRequestImage:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (id)URITransformToURLFailedError;
- (void)downsampleImageView:(id)a0 imageURL:(id)a1 placeholder:(id)a2 options:(long long)a3 pigeonBizType:(id)a4 completion:(id /* block */)a5;
- (void)innerDownsampleImageView:(id)a0 imageURL:(id)a1 placeholder:(id)a2 options:(long long)a3 completion:(id /* block */)a4;
- (BOOL)isURI:(id)a0;
- (BOOL)URLIsExpired:(id)a0;
- (id)getFullURLCacheWithURI:(id)a0;
- (BOOL)isFetchingFullUrlForUri:(id)a0;
- (void)setFetchingFullUrlForUri:(id)a0 fetching:(BOOL)a1;
- (void)cacheFullURL:(id)a0 withURI:(id)a1;
- (void)saveImageToAlbumWithImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
