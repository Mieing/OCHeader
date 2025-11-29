@class UIView, NSString, UIImage, UIImageView, NSMutableArray, WCFinderRefreshTableFooterView, MMOrderCenterTableView, UILabel;
@protocol MMOrderCenterOrderDataProvider, MMOrderCenterReporter;

@interface MMOrderCenterTableViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMOrderCenterTableViewModularCellDelegate, MMOrderCenterTableViewControllerExt>

@property (retain, nonatomic) id<MMOrderCenterOrderDataProvider> dataProvider;
@property (retain, nonatomic) NSMutableArray *orders;
@property (retain, nonatomic) MMOrderCenterTableView *tableView;
@property (retain, nonatomic) UILabel *listEmptyView;
@property (retain, nonatomic) UIImage *listLoadingImage;
@property (retain, nonatomic) UIImageView *listLoadingView;
@property (retain, nonatomic) UIView *loadErrorView;
@property (nonatomic) BOOL loading;
@property (nonatomic) long long lastSelectedIndex;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *noMoreView;
@property (retain, nonatomic) id<MMOrderCenterReporter> reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOrderDataProvider:(id)a0;
- (void)fetchOrderListForcingRefresh:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)onFinderRefererTappedForOrder:(id)a0;
- (void)onHeaderStoreTappedForOrder:(id)a0;
- (void)onSkuListExpandTappedForOrder:(id)a0;
- (void)onTrackingViewTappedForOrder:(id)a0;
- (void)onReviewButtonTappedForOrder:(id)a0;
- (void)onGlobalOrderRefreshRequestedByOrderTableViewController:(id)a0;
- (void)refreshOrdersStartingFromIndex:(unsigned long long)a0;
- (void)fetchOrderListSucceededWithOrders:(id)a0 startover:(BOOL)a1;
- (void)fetchOrderListFailedWithErrorType:(int)a0 message:(id)a1;
- (void)checkAndConfigureListEmptyView;
- (void)configureViewHidingForStatus:(long long)a0;
- (void)configureLoadingViewForShowing:(BOOL)a0;
- (void)configureNoMoreViewForShowing:(BOOL)a0;
- (void)configureOrderListForShowing:(BOOL)a0;
- (void)configureListEmptyViewForShowing:(BOOL)a0;
- (void)configureLoadErrorViewForShowing:(BOOL)a0;
- (id)newErrorView;
- (void)fetchMoreOrderListItems;
- (void)registerCellTypes;
- (id)cellTypeForOrder:(id)a0;
- (double)cellHeightForOrder:(id)a0 estimate:(BOOL)a1;
- (void)navigateToWeAppWithId:(id)a0 path:(id)a1;
- (void)navigateToWeAppWithAppUsername:(id)a0 path:(id)a1;
- (void)addRotationAnimationToView:(id)a0;
- (void)removeRotationAnimationFromView:(id)a0;
- (void)reportEnteringDetailsOfOrder:(id)a0;
- (void)reportEnteringStoreOfOrder:(id)a0;
- (void)reportEnteringShippingDetailsOfOrder:(id)a0;
- (void)reportEnteringReferrerFinderProfileOfOrder:(id)a0;
- (void)reportEnteringReviewOfOrder:(id)a0;
- (void)reportEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
