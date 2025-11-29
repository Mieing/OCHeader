@class NSString;

@interface ACFImagePreloadManager : NSObject <ACFImagePreloadManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setImageOfImageView:(id)a0 withImageURLArray:(id)a1 placeholder:(id)a2 completion:(id /* block */)a3;
+ (void)preloadImageWithAwemeModel:(id)a0 completion:(id /* block */)a1;
+ (void)preloadImageWithURLArray:(id)a0 completion:(id /* block */)a1;
+ (void)preloadImageBackgroundColorWithImage:(id)a0 awemeModel:(id)a1;
+ (void)setImageOfImageView:(id)a0 withModel:(id)a1 placeholder:(id)a2 completion:(id /* block */)a3;
+ (id)cacheName;
+ (unsigned long long)imageOptions;


@end
