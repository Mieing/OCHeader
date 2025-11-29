@class UIView, NSString, UITapGestureRecognizer, WCFinderFollowSearchContactViewController, MMUISearchBar, WCTableView, WCFinderRefreshTableFooterView, UILabel, WCFinderContactListViewModel;

@interface WCFinderContactListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderContactListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderRedDotNotifyExt, UISearchBarDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFollowSearchContactViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderContactListCellDelegate>

@property (retain, nonatomic) WCTableView *tableView;
@property (retain, nonatomic) WCFinderContactListViewModel *viewModel;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) UIView *searchContainer;
@property (retain, nonatomic) WCFinderFollowSearchContactViewController *searchContactVC;
@property (nonatomic) BOOL disableSearch;
@property (retain, nonatomic) NSString *titleFormatString;
@property (nonatomic) int finderProfileDefaultJumpTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)updateRightBarButtonItems;
- (void)onLimitedClicked;
- (void)updateTitle;
- (void)configureTableView;
- (void)stateRetryGestureAction:(id)a0;
- (void)resetDetailToInitStatusWithRetry:(BOOL)a0;
- (void)clickSearchBar;
- (void)openProfileWithContact:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)finderContactListViewNeedReloadWithContinueFlag:(BOOL)a0;
- (void)finderContactListViewFetchFailWithErrorCode:(int)a0;
- (void)finderContactListUnFollowContact:(id)a0 index:(unsigned long long)a1;
- (void)finderContactListFollowContact:(id)a0;
- (void)finderContactListUpdateFollowingCount;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void)onFinderNotifyFollowCountNeedReload;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)setupSearchBar;
- (void)didCancelSelectSearchContact;
- (void)embedSubviewFromChildViewController:(id)a0;
- (void)unembedChildViewController:(id)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void)onFinderContactListCell:(id)a0 liveNowViewDidClick:(id)a1;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
