@class UITableView, NSString, NSDictionary, AWEFavoriteGoodsDataController, DUXBottomNotification;

@interface AWEFavoriteGoodsListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEECReferProperty, AWEFavoriteDetailItemProtocol, AWETabListItemViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEFavoriteGoodsDataController *dataController;
@property (nonatomic) BOOL initialLoadMoreEnabled;
@property (nonatomic) BOOL shouldRefresh;
@property (nonatomic) BOOL isProfileExploreStyle;
@property (retain, nonatomic) DUXBottomNotification *noti;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabContentScrollView;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)_endRefreshing;
- (BOOL)shouldHideNoMoreText;
- (id)trackerParams;
- (void)showBottomNoti:(id)a0;
- (void)_refreshDataWithCompletion:(id /* block */)a0;
- (void)favoriteItemChanged:(id)a0;
- (void)handleLynxBroadcastNotification:(id)a0;
- (id)trackerParamsWithModel:(id)a0;
- (void)removeCellForRowAtIndexPath:(id)a0;
- (void)configWithProfileExploreStyle:(BOOL)a0;
- (void)_loadMoreData;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (id)customHeaderView;
- (void)refreshData;

@end
