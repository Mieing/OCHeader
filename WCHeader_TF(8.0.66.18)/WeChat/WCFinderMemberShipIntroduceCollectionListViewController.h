@class WCFinderCollectionDetailListViewModel, UIView, NSArray, WCFinderMaskButton, NSString, UITableView, WCFinderStreamProfileDragBarView, WCFinderRefreshTableFooterView, MMUIButton, UILabel;
@protocol WCFinderMemberShipIntroduceCollectionListViewControllerDelegate;

@interface WCFinderMemberShipIntroduceCollectionListViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource, WCFinderCollectionDetailListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderStreamProfileDragBarViewDelegate>

@property (nonatomic) int commentScene;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *collectionList;
@property (retain, nonatomic) WCFinderCollectionDetailListViewModel *viewModel;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) MMUIButton *emptyTipsRetryButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCFinderMaskButton *confirmButton;
@property (nonatomic) unsigned long long entranceSource;
@property (retain, nonatomic) WCFinderStreamProfileDragBarView *dragBarView;
@property (retain, nonatomic) UIView *topViewContainer;
@property (weak, nonatomic) id<WCFinderMemberShipIntroduceCollectionListViewControllerDelegate> previewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 entranceSource:(unsigned long long)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupSubviews;
- (void)configureTableView;
- (void)bindPageReport;
- (void)showEmptyTips:(id)a0 canRetry:(BOOL)a1;
- (void)hideEmptyTips;
- (void)retryButtonClicked:(id)a0;
- (double)getMaxHalfScreenHeight;
- (void)onClickConfirm;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_setupReportWithCell:(id)a0 collection:(id)a1 indexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)finderCollectionDetailListDataChangedWithContinueFlag:(BOOL)a0;
- (void)finderCollectionDetailListRequestFailed;
- (void)finderCollectionDetailListStartLoading;
- (void)finderCollectionDetailListEndLoading;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void)dragBarViewWillBegin:(id)a0;
- (void)dragBarViewDidEnd:(id)a0 slideToClose:(BOOL)a1;
- (double)dragBarViewExpandMinHeight:(id)a0;
- (double)dragBarViewExpandMaxHeight:(id)a0;
- (void).cxx_destruct;

@end
