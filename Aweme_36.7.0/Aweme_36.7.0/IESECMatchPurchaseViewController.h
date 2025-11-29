@class UIView, IESECTracker, IESECMatchPurchaseViewModel, NSString, UITableView, IESECMatchPurchaseNavigationBar, IESECQualityInfoV2, IESECMatchPurchaseRequest;
@protocol IESECEmptyViewProtocol;

@interface IESECMatchPurchaseViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, IESECMatchPurchaseNavigationBarDelegate, IESECMatchPurchaseFullTableCellProtocol, IESECMatchPurchaseViewModelProtocol, IESECMatchPurchaseSKUViewDelegate>

@property (retain, nonatomic) IESECMatchPurchaseRequest *request;
@property (retain, nonatomic) UIView *tapToDismissView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESECMatchPurchaseNavigationBar *navigationBar;
@property (retain, nonatomic) IESECMatchPurchaseViewModel *viewModel;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) id<IESECEmptyViewProtocol> errorView;
@property (retain, nonatomic) UIView *errorBgView;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackPageShow;
- (void)configBtmTrackerV2;
- (void)configBTMTracker;
- (void)setupMask;
- (void)tapToClose;
- (id)btmPageId;
- (void)dismissFromParentVC;
- (void)animateDismiss;
- (void)TapAnchorWithModel:(id)a0 anchorPoint:(id)a1;
- (void)matchPurchaseNavigationBarDidClickLeftButton:(id)a0;
- (void)matchPurchaseNavigationBarDidClickRightButton:(id)a0;
- (void)matchPurchaseSKUView:(id)a0 didConfirmSkuInfo:(id)a1;
- (void)tapToCloseMask:(id)a0;
- (void)calculateScrollView:(id)a0;
- (void)trackerWithEvent:(id)a0 once:(id)a1 AndExtraParams:(id)a2;
- (void)trackerWithEvent:(id)a0 once:(id)a1 AndExtraParams:(id)a2 btmID:(id)a3;
- (void)openSkuWithItemModel:(id)a0;
- (void)openOrderWithSchema:(id)a0;
- (void)openProductDetail:(id)a0;
- (void)reloadData;
- (void)backAction;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchData;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithParams:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateNavigationBar;

@end
