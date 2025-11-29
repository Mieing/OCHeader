@class CAGradientLayer, IESECGoodsPriceLabel, IESECLLView, NSString, IESECShopGoodsCardViewModel, IESECStoreGoodsCardStatusView, IESECShopSlideShowContainer;
@protocol IESECStoreNewFlexGoodsCellDelegate;

@interface IESECShopProductsSmallProductCell : UICollectionViewCell <IESECShopGoodsCellProtocol> {
    IESECShopGoodsCardViewModel *_viewModel;
    id /* block */ _addToCartAction;
    IESECStoreGoodsCardStatusView *_statusView;
}

@property (retain, nonatomic) IESECLLView *llView;
@property (retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
@property (weak, nonatomic) id<IESECStoreNewFlexGoodsCellDelegate> delegate;
@property (retain, nonatomic) IESECGoodsPriceLabel *cachedCalculateLabel;
@property (readonly, nonatomic) IESECShopSlideShowContainer *slideshowContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)priceTagFont;
+ (id)priceIntegerFont;
+ (id)priceDecimalFont;
+ (id)priceSuffixFont;
+ (double)heightWithViewModel:(id)a0 itemWidth:(double)a1;
+ (double)titleHeightWithViewModel:(id)a0 itemWidth:(double)a1;
+ (double)priceHeight;
+ (id /* block */)cellBuilderWithViewModel:(id)a0 itemWidth:(double)a1 addToCartAction:(id /* block */)a2 calculateLabel:(id)a3;
+ (double)priceWidthWithViewModel:(id)a0 itemWidth:(double)a1 calculateLabel:(id)a2 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
+ (id /* block */)cellBuilderWithViewModel:(id)a0 itemWidth:(double)a1;

- (id)cardViewModel;
- (void)bindObject:(id)a0;
- (id)currentCoverImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
