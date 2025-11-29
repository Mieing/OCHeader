@class UIView, NSString, CADisplayLink, UIImage, CALayer, NSMutableDictionary, CAAnimation, UIColor;
@protocol ImageStyleDelegate;

@interface ImageStyle : BaseStyle <MMImageLoaderObserver>

@property (retain, nonatomic) CAAnimation *animation;
@property (retain, nonatomic) CALayer *animationLayer;
@property (nonatomic) double timeOffset;
@property (copy, nonatomic) id /* block */ startHandler;
@property (copy, nonatomic) id /* block */ endHandler;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL didCropImg;
@property (retain, nonatomic) NSMutableDictionary *networkResultTempData;
@property (nonatomic) BOOL isLoadFail;
@property (nonatomic) BOOL isLoadSuccess;
@property (nonatomic) BOOL hasFinishLoad;
@property (retain, nonatomic) UIView *overlayLoadingView;
@property (nonatomic) double animationTimeStamp;
@property (retain, nonatomic) UIImage *oImage;
@property (retain, nonatomic) NSString *imageName;
@property (weak, nonatomic) id<ImageStyleDelegate> delegate;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSString *darkImageURL;
@property (nonatomic) BOOL alwaysTemplate;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *animationFilePath;
@property (copy, nonatomic) NSString *nsImgSrc;
@property (nonatomic) double paddingHorizontal;
@property (nonatomic) double topMargin;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL customImageProvider;
@property (nonatomic) long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)updateImage;
- (void)setImageURL:(id)a0 darkImageURL:(id)a1;
- (void)tryLoadImageURLCache;
- (id)imageLoadingConfig:(BOOL)a0;
- (BOOL)needAsyncLoadWebImage;
- (void)asyncLoadWebImageWithCompletion:(id /* block */)a0;
- (void)startLoadWebImage;
- (void)checkLoadImageFinish;
- (void)startLoading;
- (void)onLoadImageFail;
- (void)onLoadImageSuccess;
- (BOOL)onClickAtImageStyleShouldResponse;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)playAnimateEmojiWithStartHandler:(id /* block */)a0 endHandler:(id /* block */)a1;
- (void)stopPlayAnimateEmoji;
- (void)tick;
- (void).cxx_destruct;

@end
