@class MMFinderLiveShopShelfCoordinator, MMFinderLiveGoodsEmptyView, MMFinderLiveShopGoodsManageSectionHeaderView, MMFinderLiveShopShelfMainTableHeaderView;

@interface MMFinderLiveShopShelfExtraHeaderCell : UIView

@property (retain, nonatomic) MMFinderLiveShopShelfMainTableHeaderView *tableHeaderView;
@property (retain, nonatomic) MMFinderLiveShopGoodsManageSectionHeaderView *manageHeaderView;
@property (retain, nonatomic) MMFinderLiveGoodsEmptyView *emptyView;
@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *coordinator;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)initWithCoordinator:(id)a0;
- (void)initSubViews;
- (void)layoutSubviews;
- (void)update;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)reportExpose;
- (void).cxx_destruct;

@end
