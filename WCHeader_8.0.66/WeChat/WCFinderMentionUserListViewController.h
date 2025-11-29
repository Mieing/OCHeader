@class UIView, WCFinderMentionUserViewModel, UITapGestureRecognizer, NSString, MMUISearchBar, WCTableView, WCFinderRefreshTableFooterView, WCFinderMentionSearchViewController, UILabel;
@protocol WCFinderMentionUserListViewControllerDelegate;

@interface WCFinderMentionUserListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate, UISearchBarDelegate, WCFinderMentionUserViewModelDelegate, WCFinderMentionSearchViewControllerDelegate>

@property (retain, nonatomic) WCTableView *tableView;
@property (retain, nonatomic) WCFinderMentionUserViewModel *viewModel;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) UIView *searchContainer;
@property (retain, nonatomic) WCFinderMentionSearchViewController *searchViewController;
@property (weak, nonatomic) id<WCFinderMentionUserListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)layoutComponents;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)updateNavigationBarView;
- (void)onClickCloseLeftItem;
- (void)configureTableView;
- (void)initSearchBar;
- (void)clickSearchBar:(id)a0;
- (void)stateRetryGestureAction:(id)a0;
- (void)resetDetailToInitStatusWithRetry:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didSelectedMentionFollowListCell:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)getTableViewHeaderWithTitle:(id)a0 section:(long long)a1;
- (void)finderContactListViewNeedReloadWithContinueFlag:(BOOL)a0;
- (void)finderContactListViewFetchFailWithErrorCode:(int)a0;
- (void)finderContactListUnFollowContact:(id)a0 index:(unsigned long long)a1;
- (void)finderContactListFollowContact:(id)a0;
- (void)finderContactListUpdateFinished;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)didSelectSearchContact:(id)a0;
- (void)didCancelSelectSearchContact;
- (void)embedSubviewFromChildViewController:(id)a0;
- (void)unembedChildViewController:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
