@class MMFinderLiveShopShelfHeaderViewModel, NSString, UIView;
@protocol MMFinderLiveShopShelfHeaderContentView;

@interface MMFinderLiveShopShelfHeaderContainerView : UIView <MMFinderLiveShopShelfHeaderViewModelView>

@property (retain, nonatomic) UIView<MMFinderLiveShopShelfHeaderContentView> *contentView;
@property (retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)preferContentClass;
- (void)updateWithHeaderViewModel:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)handleContentGestureChangeTo:(double)a0;
- (void)handleContentGestureEnd;
- (id)goodsOrderCenterButton;
- (id)shoppingCartButton;
- (id)favoriteButton;
- (id)favoriteIconView;
- (id)anchorSettingButton;
- (void)reportElementsExposed;
- (void)onShelfContainerDisplay;
- (void).cxx_destruct;

@end
