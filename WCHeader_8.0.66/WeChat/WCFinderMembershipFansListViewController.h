@class UITapGestureRecognizer, WCFinderRefreshTableFooterView, WCFinderMembershipFansListViewModel, WCTableView, UILabel, NSString, WCFinderContact;

@interface WCFinderMembershipFansListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderMembershipFansListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFansProfileViewControllerDelegate>

@property (retain, nonatomic) WCTableView *tableView;
@property (retain, nonatomic) WCFinderMembershipFansListViewModel *viewModel;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderContact *selectedContact;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (nonatomic) unsigned long long fansCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0 fansCount:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (void)updateTitle;
- (void)stateRetryGestureAction:(id)a0;
- (void)resetDetailToInitStatusWithRetry:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)showCommentProfileViewWithComment:(id)a0;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void)onMembershipFansListViewModelNeedReloadDataWithContinueFlag:(BOOL)a0;
- (void)onMembershipFansListViewModelFetchFailWithErrorCode:(int)a0;
- (void).cxx_destruct;

@end
