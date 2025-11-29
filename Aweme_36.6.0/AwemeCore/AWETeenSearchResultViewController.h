@class NSString, AWESlidingViewController, AWESlidingTabbarView, NSArray;

@interface AWETeenSearchResultViewController : UIViewController <AWESlidingViewControllerDelegate, AWETeenSearchResultDelegate, AWEPadUITrackerProtocol>

@property (nonatomic) BOOL isAppear;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSString *searchPosition;
@property (nonatomic) long long lastSearchType;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) AWESlidingTabbarView *slidingTabView;
@property (copy, nonatomic) NSArray *tabViewTitles;
@property (copy, nonatomic) NSArray *tabViewControllers;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long searchVideoType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *awe_padUITrackerPageEnterFrom;
@property (nonatomic) BOOL awe_padUITrackerIgnoreStayTime;

- (void)setHide:(BOOL)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)searchResultVC:(id)a0 didClickViewMore:(unsigned long long)a1;
- (void)didFinishRefreshData;
- (void)p_cancelTeenQualitySearchPageWithMsg:(id)a0;
- (void)p_startTeenQualitySearch;
- (id)currentQualitySubScene;
- (id)p_getSearchPosition;
- (void)searchWithKeyword:(id)a0 type:(long long)a1 completeBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)setupData;

@end
