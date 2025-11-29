@class UITapGestureRecognizer, NSString, UIImageView, AWEHPBottomTabUIConfigModel, UIImage, UIView, UIViewController;
@protocol AWETeenModeTabBarButtonDelegate, AWETeenModeTabBarInnerView;

@interface AWETeenModeTabBarGeneralButton : AWETeenModeTabBarButton <AWETeenModeTabBarGeneralButtonProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEHPBottomTabUIConfigModel *config;
@property (nonatomic) BOOL enableRefresh;
@property (nonatomic) BOOL enabledScrollToTop;
@property (nonatomic) BOOL isLight;
@property (retain, nonatomic) UIView<AWETeenModeTabBarInnerView> *innerView;
@property (retain, nonatomic) UIImage *loadingImage;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (weak, nonatomic) id<AWETeenModeTabBarButtonDelegate> delegate;
@property (nonatomic) long long type;
@property (nonatomic) long long index;
@property (nonatomic) long long validIndex;
@property (nonatomic) long long status;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UITapGestureRecognizer *singleTapGes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithInnerView:(id)a0 viewController:(id)a1 tabUIConfig:(id)a2 type:(long long)a3;

- (void)updateButtonStatus:(long long)a0;
- (void)p_showRefreshWithAnimated:(BOOL)a0;
- (void)setSubViewsTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)p_hideRefreshWithAnimated:(BOOL)a0;
- (void)switchToLightMode:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
