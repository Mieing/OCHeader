@class IESECStoreGoodsCardViewModel, IESECShopGoodsTitleLabel, UILabel, IESECStoreGoodsCardStatusView, IESECShopGoodsSourceView, IESECGoodsPriceLabel, UIButton, UIView, NSString, IESECShopGoodsTagsContainerOptView, IESECShopGoodsRecommendInfoView, CAShapeLayer, UIImageView;
@protocol IESECStoreGoodsCardViewDelegate;

@interface IESECStoreGoodsCardViewCell : UICollectionViewCell <IGListBindable>

@property (retain, nonatomic) IESECStoreGoodsCardViewModel *viewModel;
@property (retain, nonatomic) IESECStoreGoodsCardStatusView *goodsStatusView;
@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECShopGoodsTitleLabel *goodsTitleLabel;
@property (retain, nonatomic) IESECShopGoodsTagsContainerOptView *goodsTagsContainer;
@property (retain, nonatomic) IESECGoodsPriceLabel *goodsPriceLabel;
@property (retain, nonatomic) UILabel *goodsSalesLabel;
@property (retain, nonatomic) UIButton *addCartButton;
@property (retain, nonatomic) CAShapeLayer *dashline;
@property (retain, nonatomic) IESECShopGoodsRecommendInfoView *recommendInfoView;
@property (retain, nonatomic) IESECShopGoodsSourceView *goodsJumpView;
@property (weak, nonatomic) id<IESECStoreGoodsCardViewDelegate> delegate;
@property (nonatomic) long long titleLabelLines;
@property (nonatomic) BOOL shouldShowSalesLabel;
@property (nonatomic) BOOL shouldShowPricePrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (double)p_dashLineWidth;
- (void)remakeConstraints:(id)a0;
- (void)didTapAddCartButton:(id)a0 event:(id)a1;
- (void)didTapGoodsJumpView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
