@class NSArray, NSString, MMFinderLiveTaskId, MMTableView;
@protocol MMFinderLiveProductsTableViewDelegate;

@interface MMFinderLiveProductsTableView : UIView <MMFinderLiveAudienceGoodsCellDelegate, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSArray *goodsViewModels;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (weak, nonatomic) id<MMFinderLiveProductsTableViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ reprocessGoodsViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShopWindowItems:(id)a0;
- (void)setProducts:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onLiveGoodsCellLimitDiscountArriveTime:(id)a0 goodsViewModel:(id)a1;
- (void)onPurchaseButtonClicked:(id)a0;
- (void)onPresentButtonClicked:(id)a0;
- (void)onMayNeedChangeSizeForImageLoaded:(id)a0;
- (void)onAddToShoppingCartOrFavoriteButtonExposed:(id)a0 goodsViewModel:(id)a1;
- (void)onAddToShoppingCartButtonClicked:(id)a0 goodsViewModel:(id)a1;
- (void)onAddToFavoriteButtonClicked:(id)a0 goodsViewModel:(id)a1;
- (void)onAddToLikeButtonClicked:(id)a0 goodsViewModel:(id)a1;
- (void)onAskForPromoteProductButtonClicked:(id)a0 goodsViewModel:(id)a1;
- (void)onOpenRecordPromotionReplay:(id)a0 goodsViewModel:(id)a1 info:(id)a2;
- (void)cell:(id)a0 model:(id)a1 didSelectSKU:(id)a2;
- (void)cell:(id)a0 model:(id)a1 willShowSKUCellForIndex:(unsigned long long)a2;
- (void)cell:(id)a0 didReleaseMoreSKUsTailForModel:(id)a1;
- (void)cell:(id)a0 didClickMoreSKUsTailForModel:(id)a1;
- (void)cell:(id)a0 willShowMoreSKUsTailForModel:(id)a1;
- (id)visibleGoodsCellWithProductID:(unsigned long long)a0;
- (void).cxx_destruct;

@end
