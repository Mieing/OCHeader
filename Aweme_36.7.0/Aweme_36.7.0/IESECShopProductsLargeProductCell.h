@class IESECGoodsPriceLabel, IESECLLView, NSString, IESECShopGoodsCardViewModel, IESECStoreGoodsCardStatusView, IESECShopSlideShowContainer;
@protocol IESECStoreNewFlexGoodsCellDelegate;

@interface IESECShopProductsLargeProductCell : UICollectionViewCell <IESECShopGoodsCellProtocol> {
    IESECShopGoodsCardViewModel *_viewModel;
    id /* block */ _addToCartAction;
    IESECStoreGoodsCardStatusView *_statusView;
}

@property (retain, nonatomic) IESECLLView *llView;
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
+ (id /* block */)cellBuilderWithViewModel:(id)a0 addToCartAction:(id /* block */)a1 calculateLabel:(id)a2;
+ (double)titleWidthWithItemWidth:(double)a0;
+ (double)titleHeightWithViewModel:(id)a0 itemWidth:(double)a1;
+ (double)priceWidthWithViewModel:(id)a0 calculateLabel:(id)a1;
+ (double)priceHeight;

- (id)cardViewModel;
- (void)bindObject:(id)a0;
- (id)currentCoverImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
