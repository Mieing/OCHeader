@class NSString, WCFinderAnimationLoadingView, UIImageView, UITableView, WCFinderAddPOIViewController, WCFinderManagePOIViewModel, WCFinderRefreshTableFooterView, UILabel, MMPickLocationViewController;

@interface WCFinderManagePOIViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderManagePOIViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, MMPickLocationViewControllerDelegate, WCFinderAddPOIViewControllerDelegate>

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) WCFinderManagePOIViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIImageView *retryImageView;
@property (nonatomic) BOOL reloadFlag;
@property (nonatomic) BOOL emptyFlag;
@property (retain, nonatomic) WCFinderAddPOIViewController *addVC;
@property (retain, nonatomic) MMPickLocationViewController *pickLocationViewController;
@property (nonatomic) BOOL showingOtherVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)initViews;
- (void)tapBackButton;
- (void)tapAddButton;
- (void)showPickLocationVC;
- (id)onGetRightBarButton;
- (void)onTapAddButton;
- (void)onCancelSeletctedLocation;
- (void)updateEmptyState;
- (void)bindPOIWithIds:(id)a0;
- (void)reloadAllData;
- (void)onAuditingPOIListUpdate;
- (void)onAuditingPOIListNoMore;
- (void)onAuditingPOIListError;
- (void)onBindingPOIListUpdate;
- (void)onBindingPOIListNoMore;
- (void)onBindingPOIListError;
- (void)onBindPOISuccess;
- (void)onBindPOIFailure:(int)a0;
- (void)onUnbindPOISuccess;
- (void)onUnbindPOIFailure;
- (void)onAddVCSelectPOI:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
