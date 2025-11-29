@class NSMutableArray, MMTimer, OpenglRenderView, UIImageView, UIView, VoipOpenglesContext, UILabel;

@interface WCVideoOpenglRender : WCVideoRender

@property (retain, nonatomic) VoipOpenglesContext *m_backOpenglesContext;
@property (retain, nonatomic) VoipOpenglesContext *m_frontOpenglesContext;
@property (retain, nonatomic) OpenglRenderView *m_backRenderView;
@property (retain, nonatomic) OpenglRenderView *m_frontRenderView;
@property (retain, nonatomic) UIView *m_renderView;
@property (retain, nonatomic) MMTimer *m_fpsTimer;
@property (nonatomic) unsigned int m_frontFpsCount;
@property (nonatomic) unsigned int m_backFpsCount;
@property (nonatomic) unsigned int m_videoSizeW;
@property (nonatomic) unsigned int m_videoMemberId;
@property (nonatomic) unsigned int m_videoCodecType;
@property (nonatomic) BOOL m_frontCamera;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) BOOL hideBlurWhenRenderSizeChanged;
@property (nonatomic) double renderImageWidth;
@property (nonatomic) double renderImageHeight;
@property (nonatomic) BOOL shouldFlipFrontBackView;
@property (nonatomic) BOOL freezeRender;
@property (nonatomic) BOOL checkScreenDataWhenHideBlur;
@property (retain, nonatomic) UIImageView *loadingImagesView;
@property (retain, nonatomic) NSMutableArray *loadingImagesList;
@property (retain, nonatomic) MMTimer *loadingImagesTimer;
@property (nonatomic) unsigned long long loadingImagesTimerCount;
@property (nonatomic) BOOL isRendered;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cameraFrontMode:(BOOL)a0;
- (void)updateViewWithFrontCamera;
- (float)defaultFrontDegrees;
- (float)frontDegrees;
- (void)setFrontDegrees:(float)a0;
- (float)defaultBackDegrees;
- (float)backDegrees;
- (void)setBackDegrees:(float)a0;
- (void)renderImage:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2 FitView:(BOOL)a3;
- (void)changeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getRenderView;
- (void)whenBecomeActive;
- (void)setupELGS;
- (void)dealloc;
- (void)showBlurUntilRenderSizeChangeForChangingToSmallSizeAnimation;
- (void)showBlurUntilRenderSizeChangeForChangingToBigScreenDataAnimation;
- (void)showBlurWithTip:(id)a0;
- (void)hideBlur;
- (void)checkLoadingAndHideBlur;
- (void)checkAndShowLoading;
- (void)loadingTimerCheck;
- (void)hideLoading;
- (void)checkAndHideBlur;
- (BOOL)isTouchInsideViewWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
