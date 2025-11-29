@class UIView, NSString, DUXNavigationBar, AWEUILoadingView, UITableView, AWEPOIUGCRateShopListDataController, AWELoadMoreFooter, AWEPOIUGCRateSelectShopBar;

@interface AWEPOIUGCRateSelectShopListView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) DUXNavigationBar *navigationBar;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWELoadMoreFooter *loadMoreFooter;
@property (retain, nonatomic) AWEPOIUGCRateShopListDataController *listDataController;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) AWEPOIUGCRateSelectShopBar *shopBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithAnimation;
- (void)hideWithAnimation;
- (void)buildLoadingView;
- (void)resetLoadingView;
- (void)initFetch;
- (void)didClickBackground:(id)a0;
- (void)loadMoreFetch;
- (void)reloadData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)headerHeight;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;
- (double)footerHeight;
- (void)updateTableViewHeight;

@end
