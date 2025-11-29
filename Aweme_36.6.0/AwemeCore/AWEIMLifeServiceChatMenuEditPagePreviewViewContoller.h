@class AWEIMLifeServiceChatMenuView, AWEIMLifeServiceChatMenuEditPageViewModel, CAGradientLayer, UIImageView, UIView;

@interface AWEIMLifeServiceChatMenuEditPagePreviewViewContoller : UIViewController

@property (retain, nonatomic) AWEIMLifeServiceChatMenuEditPageViewModel *viewModel;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuView *menuView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *shadowBackgroundView;
@property (retain, nonatomic) UIView *containerNaviView;
@property (retain, nonatomic) UIView *containerAvatar;
@property (retain, nonatomic) UIView *containerTitleView;
@property (retain, nonatomic) UIView *containerSubtitleView;
@property (retain, nonatomic) UIImageView *leftArrowView;
@property (retain, nonatomic) UIImageView *moreButtonView;
@property (retain, nonatomic) UIImageView *audioImageView;
@property (retain, nonatomic) UIImageView *videoImageView;
@property (nonatomic) double tranformScale;

- (void)awe_themeReload;
- (void)__backBtnClicked;
- (void)__updateGradientLayerWiththemeStyle:(long long)a0;
- (void)__setupContainerShadow:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;

@end
