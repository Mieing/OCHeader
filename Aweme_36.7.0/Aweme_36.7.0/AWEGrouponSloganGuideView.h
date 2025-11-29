@class NSString, UIImageView, LOTAnimationView, UIButton;

@interface AWEGrouponSloganGuideView : UIView <AWENearbyContainerEventMessage>

@property (retain, nonatomic) UIImageView *bgImgView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIButton *skipBtn;
@property (nonatomic) BOOL isRemoving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowSloganGuide;
+ (void)showGuideViewIfNeedWithParentView:(id)a0;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)dismissWithAnimation;
- (void)registerMessage;
- (void)nearbyContainerContentScrolled:(unsigned long long)a0 scrollView:(id)a1;
- (void)skipBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)setupLayout;

@end
