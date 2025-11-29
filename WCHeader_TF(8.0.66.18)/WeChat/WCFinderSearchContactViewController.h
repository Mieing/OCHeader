@class NSString, MMTagTextField, WCFinderAnimationLoadingView, MMTitleView, UITapGestureRecognizer, WCFinderSearchHistoryListView, UITableView, UIImageView, WCFinderRefreshTableFooterView, WCFinderSearchContactViewModel, UILabel;

@interface WCFinderSearchContactViewController : MMUIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, WCFinderSearchContactViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderSearchHistoryListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCGeneralMonitorDelegate, WCFinderSearchContactCellDelegate>

@property (retain, nonatomic) MMTagTextField *navSearchTextField;
@property (retain, nonatomic) MMTitleView *titleView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderSearchHistoryListView *historyListView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (retain, nonatomic) UIImageView *retryImageView;
@property (retain, nonatomic) WCFinderSearchContactViewModel *viewModel;
@property (nonatomic) BOOL hideHistoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willDisappear;
- (id)navigationBarBackgroundColor;
- (void)initNaviBar;
- (void)configTableView;
- (void)setupHistoryListView;
- (void)onNavigationBackItemClick:(id)a0;
- (void)onTextFieldChanged:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)stateRetryGestureAction:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void)onFinderSearchContactResultEmpty;
- (void)onFinderSearchContactResultChanged;
- (void)onFinderSearchContactResultError;
- (void)onFinderSearchContactResultNoMore;
- (void)onFinderSearchContactNextPageError;
- (void)onFinderSearchContactReload:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)onSelectSearchRecord:(id)a0;
- (void)doSearchAction:(id)a0;
- (void)onClearAllSerchHistory;
- (void)onDeleteSearchRecord:(id)a0;
- (void)setSearchTextFieldBecomeFirstResponder;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void)onFinderSearchContactCell:(id)a0 liveNowViewDidClick:(id)a1;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
