@class AWEBinding, UITabBar;

@interface AWEBaseTabBarController : UITabBarController

@property (nonatomic) BOOL hasAddTabBarOnIPadOS18;
@property (retain, nonatomic) AWEBinding *floatBarHiddenBinding;
@property (retain, nonatomic) AWEBinding *floatBarAlphaBinding;
@property (nonatomic) BOOL isTransition;
@property (retain, nonatomic) UITabBar *customTabBar;
@property (nonatomic) BOOL navigationTransitionFlag;
@property (nonatomic) BOOL navigationPopTransitionFlag;
@property (nonatomic) BOOL disableCheckAddChildVC;

+ (Class)aAWEPadTabBarControllerAdapterClass;
+ (void)fixiOS12TransitionLayout;
+ (void)initialize;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })desireFrame;
- (id)aAWEPadTabBarControllerAdapter;
- (void)updateInterfaceOrientationsIfNeeded;
- (void)addFixIPadOS18TabBarIfNeeded;
- (BOOL)isTabBarFixIOS18VisibleEnabled;
- (BOOL)isFixTarBarOnIPadOS18;
- (id)tabBarTargetSubViewOnIPadOS18;
- (BOOL)isTabBarFixXcode16BackgroundColorEnabled;
- (long long)fixIPad26TabBarStrategy;
- (void)fixIPadOS18TabBar;
- (void)addFixXcode16BackgroundColorIfNeed;
- (void)fixIPadOS26TabBarNotDisplayIfNeeded;
- (void)addFloatBarBindingIfNeed;
- (void)fixIOS18TabBarVisibleWithNewSelectedIndex:(long long)a0;
- (BOOL)enableFixPadTabBarVCFrame;
- (void).cxx_destruct;
- (void)addChildViewController:(id)a0;
- (void)setSelectedIndex:(unsigned long long)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithTabBar:(id)a0;

@end
