@class WCFinderAnimationLoadingView, WCFinderRefreshTableFooterView, NSString, WCFinderFriendsAlsoFollowViewModel, UITableView;

@interface WCFinderFriendsAlsoFollowViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFinderFriendsAlsoFollowsTableViewCellDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFriendsAlsoFollowViewModelDelegate, WCFinderZoomAnimatorBehavior>

@property (nonatomic) unsigned long long enterTime;
@property (retain, nonatomic) WCFinderFriendsAlsoFollowViewModel *viewModel;
@property (retain, nonatomic) WCFinderAnimationLoadingView *customLoadingView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUsername:(id)a0 fromUsername:(id)a1 commentScene:(int)a2;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)fetchData;
- (void)refetchData;
- (void)setupUI;
- (void)pushToProfileVCWithContactIndex:(unsigned long long)a0 feedIndex:(unsigned long long)a1 followCell:(id)a2 clickFlowCell:(id)a3;
- (void)viewWillLayoutSubviews;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)makeReportUDFKV:(long long)a0 clickItem:(long long)a1 username:(id)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)finderFriendsAlsoFollowCell:(id)a0 didClickCoverAtIndex:(unsigned long long)a1 clickCell:(id)a2;
- (void)finderFriendsAlsoFollowCellDidClickFollowButton:(id)a0;
- (void)onContactFollowStateUpdate:(id)a0 atIndex:(unsigned long long)a1;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (int)feedViewControllerScene;
- (void)registerYReportSdk;
- (id)zoomAnimatorTransitionSnapView:(id)a0 cornerRaidus:(double *)a1;
- (void).cxx_destruct;

@end
