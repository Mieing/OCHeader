@class WCCanvasComponent, NSString, UIImageView, UIVisualEffectView, RichTextView;

@interface WCCanvasFloatActionButtonComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) RichTextView *titleView;
@property (retain, nonatomic) RichTextView *descView;
@property (retain, nonatomic) UIImageView *backgroundImgView;
@property (retain, nonatomic) UIVisualEffectView *backgroundBlurView;
@property (retain, nonatomic) WCCanvasComponent *buttonComponent;
@property (nonatomic) double appearPaddingTop;
@property (nonatomic) double appearPaddingBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)dealloc;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentReportAddExposureCount;
- (void)initViews;
- (void)initBackgroundStyle;
- (void)initButtonComponent;
- (void)initIconView;
- (void)initTitleView;
- (void)initDescView;
- (id)createTextViewWithContent:(id)a0 textColor:(id)a1 font:(id)a2 maxWidth:(double)a3;
- (double)fetchMaxWidthForContent;
- (void)initFullViewBtn;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)a0;
- (void)updateContentsLayout;
- (void)loadIconResource;
- (void)initBackgroundImgWithUrl;
- (void)loadBackgroundImgResource;
- (void)initBackgroundWithBlurEffect;
- (id)fetchComponentColorFor:(unsigned long long)a0;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
