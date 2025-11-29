@class MMLoadingView, WCTimeLineFooterView, MMTableView, MMFinderLivePurchasedFeedViewModel, NSString, MMFinderLiveTask, MMUILabel;

@interface WCFinderLivePurchasedFeedViewController : MMCPUIViewController <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMFinderLivePurchasedFeedViewModelDelegate>

@property (retain, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (retain, nonatomic) MMUILabel *emptyTitleLabel;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) MMTableView *purchasedFeedsTableView;
@property (retain, nonatomic) MMFinderLivePurchasedFeedViewModel *viewModel;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (nonatomic) BOOL resetTableViewOnViewSizeChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)bindPageReport;
- (void)setupUI;
- (void)setupTableView;
- (void)setupData;
- (void)layoutContentView;
- (void)viewSafeAreaInsetsDidChange;
- (void)onBackButtonClicked:(id)a0;
- (void)onHelpButtonClick;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)genImageOfView:(id)a0;
- (id)genDeleteConfirmIcon;
- (id)udfDictForRowAtIndexPath:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onFinderECObjectSelected:(id)a0 AtIndexPath:(id)a1;
- (void)onFinderObjectSelected:(id)a0 AtIndexPath:(id)a1;
- (void)onPurchasedFeedViewModelStartFetching;
- (void)onPurchasedFeedViewModelUpdated:(BOOL)a0 hasMoreData:(BOOL)a1;
- (void).cxx_destruct;

@end
