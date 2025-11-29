@class NSHashTable, NSString, AWEButton, NSMutableDictionary, AWESharePostViewController, AWESlidingTabbarView, NSMutableArray, AWEShareLikeViewController, AWESlidingViewController;

@interface AWEShareMyLikeViewController : AWEHalfScreenBaseViewController <AWESlidingViewControllerDelegate, AWEShareSelectDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) AWESharePostViewController *postVC;
@property (retain, nonatomic) AWEShareLikeViewController *likeVC;
@property (retain, nonatomic) AWEButton *sendButton;
@property (retain, nonatomic) NSHashTable *selectedAwemeIds;
@property (retain, nonatomic) NSMutableDictionary *selectedAwemeIndexMaps;
@property (retain, nonatomic) NSMutableArray *selectedAwemes;
@property (nonatomic) BOOL currIsLandingSelectTab;
@property (retain, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)didSelectedAwemeModel:(id)a0;
- (BOOL)selectedAwemeModel:(id)a0;
- (unsigned long long)selectedIndexAwemeModel:(id)a0;
- (BOOL)canSelectedAwemeModel:(id)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (id)aAWEPadModuleAdapter;
- (void)viewWillAppearWithIMStayTimeTracker;
- (void)viewWillDisappearWithIMStayTimeTracker;
- (id)imStayTimelabel;
- (id)imStaytimeKey;
- (void)p_handleTapOnContent:(id)a0;
- (void)p_sendButtonClick:(id)a0;
- (void)sendSelectAwemeModel;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (double)containerWidth;

@end
