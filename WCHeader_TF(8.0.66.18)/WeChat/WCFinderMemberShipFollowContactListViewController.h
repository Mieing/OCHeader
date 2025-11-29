@class NSString, WCFinderRefreshTableFooterView, WCTableView, WCFinderMemberShipFollowContactListViewModel, WCFinderMembershipContact, UILabel, UITapGestureRecognizer;

@interface WCFinderMemberShipFollowContactListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderMemberShipFollowContactListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderMemberShipFollowContactListCellDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCTableView *tableView;
@property (retain, nonatomic) WCFinderMemberShipFollowContactListViewModel *viewModel;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderMembershipContact *selectedContact;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)bindPageReport;
- (void)configureTableView;
- (void)updateTitle;
- (void)stateRetryGestureAction:(id)a0;
- (void)resetDetailToInitStatusWithRetry:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void)onMembershipFollowContactListViewModelNeedReloadDataWithContinueFlag:(BOOL)a0;
- (void)onMembershipFollowContactListViewModelFetchFailWithErrorCode:(int)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onFinderMemberShipBecomeMember;
- (void).cxx_destruct;

@end
