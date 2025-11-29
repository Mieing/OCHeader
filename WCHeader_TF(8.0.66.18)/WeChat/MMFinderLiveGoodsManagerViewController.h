@class NSString, MMFinderLiveGoodsManagerViewBottomActionView, MMFinderLiveTaskId, NSMutableArray, MMTableView;
@protocol MMFinderLiveGoodsManagerViewControllerDelegate;

@interface MMFinderLiveGoodsManagerViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMFinderLiveGoodsBaseCellDelegate, MMFinderLiveShopShelfManagedItemDelegate, MMFinderLiveGoodsManagerViewBottomActionViewDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMTableView *managerGoodsListTableView;
@property (retain, nonatomic) NSMutableArray *selectedItemViewModels;
@property (retain, nonatomic) NSMutableArray *itemViewModels;
@property (retain, nonatomic) MMFinderLiveGoodsManagerViewBottomActionView *bottomEdittingView;
@property (weak, nonatomic) id<MMFinderLiveGoodsManagerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadWithTaskId:(id)a0 completion:(id /* block */)a1;

- (id)initWithTaskId:(id)a0;
- (void)updateWithShopWindowItems:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (BOOL)showNavigationBarSepLine;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (double)getBottomEditingBarHeight;
- (void)addFromStore;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)onShopShelfItemSelected:(id)a0;
- (BOOL)isInMultiSelectEditingMode;
- (void)onFinderLiveGoodsManagerViewSetTop;
- (void)uploadNewOrderNeedsToast:(BOOL)a0;
- (void)onFinderLiveGoodsManagerViewDelete;
- (void)deleteGoods;
- (void).cxx_destruct;

@end
