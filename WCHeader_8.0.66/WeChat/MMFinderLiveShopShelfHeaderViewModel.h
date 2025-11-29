@class MMFinderLiveShopShelfCoordinator, UIView;
@protocol MMFinderLiveShopShelfHeaderViewModelView;

@interface MMFinderLiveShopShelfHeaderViewModel : NSObject

@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *coordinator;
@property (weak, nonatomic) UIView<MMFinderLiveShopShelfHeaderViewModelView> *view;

- (void)updateWithCoordinator;
- (void)onHeaderViewAnchorSettingButtonClicked;
- (void)onHeaderViewSearchButtonClicked;
- (void)onHeaderViewGoodsOrderCenterButtonClicked;
- (void)onHeaderViewShopAssistantButtonClicked;
- (void)onHeaderViewShoppingCartButtonClicked;
- (void)onHeaderViewFavoriteButtonClicked;
- (void)onHeaderViewGuideBarClicked;
- (void)onHeaderViewDisplayWindowButtonClicked;
- (void)onHeaderViewMiniAppButtonClicked;
- (void)onHeaderViewScoreClicked;
- (BOOL)shouldGoodsOrderCenterButtonHidden;
- (BOOL)shouldShoppingCartButtonHidden;
- (unsigned long long)headerViewShopAssistantButtonMode;
- (BOOL)shouldDisplayWindowButtonHidden;
- (BOOL)shouldAnchorSettingButtonHidden;
- (void).cxx_destruct;

@end
