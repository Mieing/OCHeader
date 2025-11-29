@class UIView, MMFinderLiveShopShelfAudienceLocalLifeMiniAppButton, NSString, MMFinderLiveShopShelfHeaderViewModel, UILabel, MMLiveShopShelfDragBar, MMFinderLiveShopShelfAudienceHeaderButtonGroupView;

@interface MMFinderLiveShopShelfAudienceLocalLifeHeaderView : UIView <MMFinderLiveShopShelfHeaderContentView>

@property (retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *viewModel;
@property (retain, nonatomic) MMFinderLiveShopShelfAudienceHeaderButtonGroupView *audienceButtonGroupView;
@property (retain, nonatomic) MMFinderLiveShopShelfAudienceLocalLifeMiniAppButton *miniAppButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMLiveShopShelfDragBar *dragBar;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UILabel *productsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithHeaderViewModel:(id)a0;
- (void)onMiniAppButtonClicked:(id)a0;
- (id)shoppingCartButton;
- (id)goodsOrderCenterButton;
- (void).cxx_destruct;

@end
