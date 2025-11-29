@class AWEFollowGroupSystemViewController, AWESlidingViewController, AWEFollowGroupMineViewController, AWESlidingTabbarView, NSString, NSMutableArray;

@interface AWEFollowGroupListViewController : UIViewController <AWESlidingViewControllerDelegate, AWERouterViewControllerProtocol>

@property (nonatomic) long long currentSelectedType;
@property (nonatomic) long long currentSelectedIndex;
@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) AWESlidingViewController *slidingVC;
@property (retain, nonatomic) AWEFollowGroupMineViewController *mineGroupVC;
@property (retain, nonatomic) AWEFollowGroupSystemViewController *systemGroupVC;
@property (retain, nonatomic) NSMutableArray *tabArray;
@property (retain, nonatomic) NSMutableArray *titlesArray;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } formerFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (id)aAWEPadModuleAdapter;
- (void)backBtnClicked;
- (void)configNavigationBar;
- (void)configureSlidingViewController;
- (void)constructTabData;
- (id)titleWithType:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;

@end
