@class NSArray, NSMutableDictionary, GameCenterTabBarLogicControllerV5, MMUIView, MMUIViewController;

@interface MMGameTabBarViewController : MMGameUIViewController

@property (retain, nonatomic) GameCenterTabBarLogicControllerV5 *tabBarLogicControllerV5;
@property (retain, nonatomic) NSArray *tabItemArrayFromCache;
@property (retain, nonatomic) NSMutableDictionary *tabIndex2ViewController;
@property (retain, nonatomic) NSMutableDictionary *tabIndex2Button;
@property (retain, nonatomic) MMUIView *tabBarParentView;
@property (retain, nonatomic) MMUIViewController *nativeHomeVC;
@property int currentSelectedIndex;
@property (nonatomic) unsigned long long tabCount;
@property (retain, nonatomic) MMUIViewController *homeVC;
@property (retain, nonatomic) MMUIViewController *webVC;
@property (nonatomic) BOOL bHasH5FloatLayer;

- (id)init;
- (id)initWithSourceScene:(unsigned int)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (void)AdjustTabBarUI;
- (void)initTabControllers:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)initAllTabAndViewController:(id)a0;
- (void)showH5FloatLayerWebViewControllerIfNeeded;
- (double)getTabBarHeight;
- (void)initTabBars:(id)a0;
- (id)getOneTabBar:(int)a0 TabItem:(id)a1 OriginX:(double)a2 OriginY:(double)a3;
- (void)selectTabIndex:(int)a0 ToIndex:(int)a1;
- (void)setTabIndexHighlighted:(int)a0;
- (void)setTabButtonHighlighted:(BOOL)a0 TabButton:(id)a1;
- (void)replaceFromViewController:(id)a0 toViewController:(id)a1 NewIndex:(int)a2;
- (void)itemButtonTap:(id)a0;
- (void)tabBarExposureReport:(id)a0;
- (void)tabBarClickReport:(id)a0;
- (void).cxx_destruct;

@end
