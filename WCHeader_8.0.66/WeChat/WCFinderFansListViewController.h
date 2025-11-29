@class NSString, WCFinderContact, UITapGestureRecognizer, MMUISearchBar, WCTableView, WCFinderFollowSearchContactViewController, WCFinderFansListVCParams, WCFinderRefreshTableFooterView, WCFinderFansListViewModel, UILabel;

@interface WCFinderFansListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFansListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFansProfileViewControllerDelegate, UISearchBarDelegate, WCFinderFollowSearchContactViewControllerDelegate>

@property (retain, nonatomic) WCTableView *tableView;
@property (retain, nonatomic) WCFinderFansListViewModel *viewModel;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) WCFinderContact *selectContact;
@property (retain, nonatomic) WCFinderFollowSearchContactViewController *searchContactVC;
@property (retain, nonatomic) WCFinderFansListVCParams *params;
@property (nonatomic) int fromCommentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (id)initWithParams:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)updateTitle;
- (void)configureTableView;
- (void)stateRetryGestureAction:(id)a0;
- (void)resetDetailToInitStatusWithRetry:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)clickSearchBar;
- (void)embedSubviewFromChildViewController:(id)a0;
- (void)unembedChildViewController:(id)a0;
- (void)showCommentProfileViewWithComment:(id)a0;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)finderFansListViewModelNeedReloadDataWithContinueFlag:(BOOL)a0;
- (void)finderFansListFetchFailWithErrorCode:(int)a0;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void)fansProfileViewController:(id)a0 clickActionWithContact:(id)a1 finderContact:(id)a2 type:(unsigned long long)a3;
- (void)fansProfileViewController:(id)a0 clickPrivateMsgWithContact:(id)a1 finderContact:(id)a2 comment:(id)a3;
- (void)fansProfileViewController:(id)a0 clickFinderActionWithWXUsername:(id)a1;
- (void)showAddBlackListViewWithContact:(id)a0;
- (void)didCancelSelectSearchContact;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
