@class NSString, UIVisualEffectView, UIImageView, DUXBadge, AWESearchHomePageMessageEntranceView, UIButton;

@interface AWESearchHomePageNaviBar : UIView <AWEUserMessage, DUXPopoverDelegate>

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIVisualEffectView *messageGlassEffectView;
@property (retain, nonatomic) AWESearchHomePageMessageEntranceView *messageEntranceView;
@property (retain, nonatomic) DUXBadge *dotBadge;
@property (retain, nonatomic) UIImageView *logoTextView;
@property (nonatomic) BOOL scrollHidden;
@property (copy, nonatomic) id /* block */ rightButtonClickBlock;
@property (copy, nonatomic) id /* block */ leftButtonClickBlock;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)homePageNavigationBarHeight;
+ (double)homePageNavigationBarHeightWithContainer:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)leftButtonClicked;
- (void)setupObserver;
- (void)rightButtonClicked;
- (void)showBubbleFromLeftButtonWithContent:(id)a0;
- (void)updateRedDotDisplay:(BOOL)a0;
- (void)updateMessageBadgeCount:(unsigned long long)a0;
- (void)trackMessageEntranceShow;
- (id)getNaviBarLeftButton;
- (id)p_currentUser;
- (void)configAvatarIfLogin;
- (void)resetAvatarAfterLogout;
- (void)layoutLiquidGlass;
- (void)showBubbleWithContent:(id)a0 targetView:(id)a1 duration:(double)a2;
- (void)updateButton:(id)a0 withImage:(id)a1;
- (id)makeLiquidGlassButtonWithImage:(id)a0 action:(id /* block */)a1;
- (void)addLongPressGestureToBtn:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
