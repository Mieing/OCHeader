@class NSURL, NSString, UIImage;
@protocol WCPayWebImageViewDelegate;

@interface WCPayWebImageView : MMUIImageView <MMImageLoaderObserver>

@property (retain, nonatomic) NSURL *imageDownloadUrl;
@property (retain, nonatomic) NSURL *lightModeUrl;
@property (retain, nonatomic) NSURL *darkModeUrl;
@property (retain, nonatomic) NSString *cacheFolder;
@property (nonatomic) BOOL bForceUpdateImage;
@property (retain, nonatomic) UIImage *defaultWebImage;
@property (retain, nonatomic) NSString *nsMd5;
@property (retain, nonatomic) NSString *nsDarkmodeMd5;
@property (nonatomic) BOOL loadImageOnMainThread;
@property (nonatomic) double imageScale;
@property (nonatomic) BOOL isNeedResize;
@property (weak, nonatomic) id<WCPayWebImageViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } resizeableInsets;
@property (nonatomic) long long resizeMode;
@property (nonatomic) long long expandHitWidth;
@property (nonatomic) long long expandHitHeight;
@property (nonatomic) BOOL bShouldRestrictCheckMd5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cacheFolder:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 md5:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 md5:(id)a1 darkModeMd5:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cacheFolder:(id)a1 md5:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cacheFolder:(id)a1 md5:(id)a2 darkModeMd5:(id)a3;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)handleTouchStateChange:(unsigned long long)a0 touch:(id)a1;
- (id)init;
- (id)initWithMd5:(id)a0;
- (id)initWithMd5:(id)a0 darkModeMd5:(id)a1;
- (void)setImageURL:(id)a0;
- (void)setImageURL:(id)a0 darkModeUrl:(id)a1;
- (void)setImageURL:(id)a0 forceUpdate:(BOOL)a1;
- (void)setImageURL:(id)a0 darkModeUrl:(id)a1 forceUpdate:(BOOL)a2;
- (void)setImageURL:(id)a0 forceUpdate:(BOOL)a1 imageLoadDelegate:(id)a2;
- (void)setImageURL:(id)a0 darkModeUrl:(id)a1 forceUpdate:(BOOL)a2 imageLoadDelegate:(id)a3;
- (void)setDefaultImage:(id)a0;
- (id)getImageUrlString;
- (id)getLightModeUrlString;
- (id)getDarkModeUrlString;
- (id)getDefaultImage;
- (void)startLoadImageData;
- (id)md5ForString:(id)a0;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (id)getImageDataMd5:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)scaleImageToFitMemoryIfNecessary:(id)a0 imageData:(id)a1;
- (void).cxx_destruct;

@end
