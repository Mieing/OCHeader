@class NSString, AWEButton, AWEListDataController, UITableView, NSMutableArray, AWELoadMoreFooter, UILabel, AWEProfileMixDataManager;
@protocol AWEDiscoverDPlayletProfileListDataControllerProtocol;

@interface AWEProfileMixVideoListViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEButton *shareBtn;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (nonatomic) BOOL isAppear;
@property (retain, nonatomic) AWEProfileMixDataManager *manager;
@property (retain, nonatomic) AWEListDataController<AWEDiscoverDPlayletProfileListDataControllerProtocol> *seriesContentSubTypeDataController;
@property (retain, nonatomic) NSMutableArray *realDataSource;
@property (retain, nonatomic) AWELoadMoreFooter *footer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)loadMore;
- (void)hideNavigationBar;
- (void)backBtnClicked:(id)a0;
- (void)onShareBtnClicked:(id)a0;
- (void)p_mixLiveCellTrackerWithUser:(id)a0 isClick:(BOOL)a1;
- (id)initWithDataManager:(id)a0 seriesContentSubTypeDataController:(id)a1;
- (void)removePlayletDataSourceIfNeeded:(id)a0;
- (void)reorderRealDataSource;
- (void)oldRefreshData;
- (void)loadMoreWithDataController:(id)a0;
- (void)oldLoadMore;
- (void).cxx_destruct;
- (id)initWithDataManager:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)refreshData;

@end
