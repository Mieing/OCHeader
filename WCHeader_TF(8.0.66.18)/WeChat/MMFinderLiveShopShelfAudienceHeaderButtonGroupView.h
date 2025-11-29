@class MMUIView, MMWebImageView, MMFinderLiveShopShelfHeaderViewModel, MMFinderLiveShopShelfAudienceHeaderButtonGroupViewConfig, MMUIButton, MMUILabel;

@interface MMFinderLiveShopShelfAudienceHeaderButtonGroupView : UIView

@property (retain, nonatomic) MMFinderLiveShopShelfAudienceHeaderButtonGroupViewConfig *config;
@property (retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *viewModel;
@property (retain, nonatomic) MMUILabel *favoriteTextView;
@property (retain, nonatomic) MMUIButton *searchButton;
@property (retain, nonatomic) MMUIButton *shoppingCartButton;
@property (retain, nonatomic) MMUIView *favoriteButton;
@property (retain, nonatomic) MMWebImageView *favoriteIconView;
@property (retain, nonatomic) MMUIButton *customerServiceButton;
@property (retain, nonatomic) MMUIButton *goodsOrderCenterButton;

- (id)initWithConfig:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)layoutFavoriteButton;
- (id)buttons;
- (void)onClickSearchButton:(id)a0;
- (void)onClickGoodsOrderButton:(id)a0;
- (void)onClickFavoritesButton:(id)a0;
- (void)onClickShopAssistantButton:(id)a0;
- (void)onClickShoppingCartButton:(id)a0;
- (void)updateWithHeaderViewModel:(id)a0;
- (void)updateEdgeInsetsForButton:(id)a0;
- (id)getFavoriteButton;
- (id)getLikeButton;
- (void).cxx_destruct;

@end
