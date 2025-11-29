@class AWEAnchorAdditionSearchBar, NSString, AWEAnchorAdditionEmptyView, UIView, AWEAnchorAdditionODRGuideView, AWEAnchorAdditionTabBar, UITableView, NSDictionary, AWEAnchorAdditionSearchHistoryViewController, AWEAnchorAdditionViewModel, UILabel;

@interface AWEAnchorAdditionListViewController : UIViewController <AWERouterViewControllerProtocol, AWEAnchorRecentAddViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>

@property (nonatomic) long long anchorType;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEAnchorAdditionSearchBar *searchBar;
@property (retain, nonatomic) AWEAnchorAdditionTabBar *tabBar;
@property (retain, nonatomic) AWEAnchorAdditionViewModel *viewModel;
@property (retain, nonatomic) AWEAnchorAdditionEmptyView *emptyView;
@property (retain, nonatomic) AWEAnchorAdditionSearchHistoryViewController *searchHistoryViewController;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *creationID;
@property (nonatomic) BOOL clicked;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isInSlidingViewController;
@property (retain, nonatomic) UIView *guideContentView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) AWEAnchorAdditionODRGuideView *emptyGuideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)closeViewControllerNotification:(id)a0;
- (void)setupBind;
- (void)setupTableViewInfinite;
- (void)updateGuideLabel;
- (id)sectionTypeToTimorParams:(long long)a0 cellModel:(id)a1;
- (void)pushRecentAddPage;
- (void)searchCancelButtonTapped:(id)a0;
- (void)anchorRecentAddDeleteDataSource:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)fetchData;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)didSelectRowAtIndexPath:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
