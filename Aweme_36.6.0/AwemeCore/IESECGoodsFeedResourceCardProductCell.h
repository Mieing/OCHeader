@class UIStackView, IESECGradientView, UIImageView, UIButton, YYLabel, IESECGoodsPriceLabel, IESECFeedRecommendProductWrapperModel, UILabel;

@interface IESECGoodsFeedResourceCardProductCell : UIView {
    UILabel *_saleLabel;
    UIButton *_buyButton;
    YYLabel *_titleLabel;
    UIStackView *_infoTags;
    UIImageView *_productImageView;
    IESECGoodsPriceLabel *_priceLabel;
    IESECGradientView *_infoTagsBackgroundView;
    IESECFeedRecommendProductWrapperModel *_product;
}

@property (nonatomic) BOOL isVersion3;
@property (retain, nonatomic) UIImageView *priceCurveImage;
@property (retain, nonatomic) UIImageView *priceDiscountBackgroundImage;
@property (copy, nonatomic) id /* block */ clickBuyButtonBlock;
@property (copy, nonatomic) id /* block */ clickProductCellBlock;

- (void)updateCellInOldVersionWithProduct:(id)a0 layout:(unsigned long long)a1;
- (void)updateCellInVersion3WithProduct:(id)a0 layout:(unsigned long long)a1;
- (void)enterGoodsDetail:(id)a0;
- (void)enterSKU:(id)a0;
- (id)transferToMoreProperExpressionWithPrice:(id)a0;
- (void)updateWithProductModel:(id)a0 layout:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
