@class MMAnimatedImageDecoder, NSObject, UIImage, MMWebImageViewChainModel, MMWebImageRequest, UIView;
@protocol MMWebImageViewDelegate, OS_dispatch_queue;

@interface MMWebImageView : MMUIImageView {
    UIImage *_defaultImage;
    MMAnimatedImageDecoder *m_animatedImageDecoder;
    UIView *m_view;
    UIImage *m_cacheImage;
    NSObject<OS_dispatch_queue> *m_scaleQueue;
}

@property (readonly, copy, nonatomic) MMWebImageViewChainModel *zz_setup;
@property (weak, nonatomic) id<MMWebImageViewDelegate> m_loadingDelegate;
@property (retain, nonatomic) UIImage *lastedImageSnapShot;
@property (retain, nonatomic) MMWebImageRequest *imageRequest;
@property (copy, nonatomic) id /* block */ downloadTaskGenerator;
@property (copy, nonatomic) id /* block */ imageTaskEventObserversGenerator;
@property (nonatomic) BOOL loadCachedImageFileOnMainThread;
@property (nonatomic) BOOL asyncWaitSubThreadLoadDataIfNotInCacheYet;
@property (nonatomic) BOOL isImageStatic;
@property (nonatomic) double imageScale;
@property (nonatomic) BOOL autoScale;
@property (readonly, nonatomic) BOOL isSingleFrame;
@property (nonatomic) BOOL shouldShowWxamMark;
@property (nonatomic) BOOL alwaysTemplateRenderingMode;
@property (nonatomic) BOOL ignoreEmptyDefaultImage;
@property (nonatomic) BOOL useDissloveImageUpdate;

+ (id /* block */)zz_create;
+ (id)getLoadedImageData:(id)a0;

- (BOOL)displayWithImage:(id)a0 data:(id)a1;
- (void)swiftLoadImageWithUrl:(id)a0 scene:(long long)a1 darkImageURL:(id)a2 context:(id)a3 forceUpdate:(BOOL)a4;
- (void)swiftLoadImage:(id)a0 completionHandler:(id /* block */)a1;
- (void)swiftCancelLoading;
- (void)setWXGWidgetsrc:(id)a0;
- (void)setWXGWidgetlocalImage:(id)a0;
- (id)initForProductImage;
- (void)updateWithGoods:(id)a0;
- (void)updateWithProductImageURL:(id)a0;
- (void)leftAlignAspectFitImage;
- (void)configForEmoticonThumb:(id)a0 emojiInfoBuf:(id)a1;
- (void)configForEmoticonThumb:(id)a0 emojiInfo:(id)a1;
- (void)configureWithShowIcon:(id)a0;
- (void)configureWithUrlStr:(id)a0;
- (void)setLoadingDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)privateSetImage:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEmptyImageURL;
- (void)loadImageWithRequest:(id)a0;
- (void)loadImageWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)setImageURL:(id)a0;
- (void)setImageURL:(id)a0 requestURL:(id)a1;
- (void)setImageURL:(id)a0 scene:(long long)a1;
- (void)setImageURL:(id)a0 forceUpdate:(BOOL)a1;
- (void)setImageURL:(id)a0 reqContext:(id)a1;
- (void)setImageURL:(id)a0 reqContext:(id)a1 forceUpdate:(BOOL)a2;
- (void)setImageWithUrlStr:(id)a0;
- (void)setLightImageURL:(id)a0 darkImageURL:(id)a1;
- (void)setLightImageURL:(id)a0 darkImageURL:(id)a1 reqContext:(id)a2 forceUpdate:(BOOL)a3 scene:(long long)a4;
- (void)setLightImageURL:(id)a0 lightImgRequestURL:(id)a1 darkImageURL:(id)a2 darkImgRequestURL:(id)a3 reqContext:(id)a4 forceUpdate:(BOOL)a5 scene:(long long)a6;
- (void)__setImageRequest:(id)a0;
- (void)stopImageLoadingAndResetForCurrentUrl;
- (void)callLoadingDelegateOnLoadImageOk:(id)a0;
- (void)callLoadingDelegateOnLoadImageFail;
- (void)setDefaultImage:(id)a0;
- (id)getImage;
- (id)getDefaultImage;
- (id)syncGetLatestImage;
- (id)getUrl;
- (id)getDarkModeUrl;
- (id)getCurrentUrl;
- (void)setImageWithDefaultImage;
- (void)dealloc;
- (BOOL)setImageFromData:(id)a0;
- (BOOL)setImageFromData:(id)a0 url:(id)a1;
- (void)removeGifView;
- (BOOL)setImageFromCacheImage:(id)a0 dataSize:(id)a1 url:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
