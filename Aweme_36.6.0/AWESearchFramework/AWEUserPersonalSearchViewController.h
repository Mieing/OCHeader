@class NSDate, NSString, AWESearchTabManager, NSDictionary, AWEUserPersonalSearchDataController, AWESearchUtility, AWEUILoadingView, AWESlidingTabbarView, AWESlidingViewController;

@interface AWEUserPersonalSearchViewController : UIViewController <AWESearchTabManagerDelegate, AWESlidingViewControllerDelegate>

@property (nonatomic) BOOL hasSearch;
@property (retain, nonatomic) NSDate *searchDate;
@property (copy, nonatomic) NSString *researchKey;
@property (copy, nonatomic) NSDictionary *researchExt;
@property (retain, nonatomic) AWESearchUtility *searchUtility;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEUserPersonalSearchDataController *dataController;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (nonatomic) unsigned long long searchStyleType;
@property (copy, nonatomic) NSString *initialTab;
@property (nonatomic) long long selectIndex;
@property (nonatomic) long long previousIndex;
@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) AWESearchTabManager *tabManager;
@property (copy, nonatomic) id /* block */ userPersonalSearchIDBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (BOOL)aweui_sf_enableErrorButtonLimit;
- (void)configUI;
- (void)searchTabsDidUpdateWithSelectedIndex:(long long)a0;
- (void)fetchDataWithKeyWord:(id)a0 ext:(id)a1;
- (void)saveSearchWord:(id)a0;
- (id)initWithUserId:(id)a0 searchStyleType:(unsigned long long)a1;
- (BOOL)enablePersonalTabNewStyle;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
