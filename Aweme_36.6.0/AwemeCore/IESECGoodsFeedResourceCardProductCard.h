@class UIImageView, IESECLLView, UIView, IESECFeedRecommendProductWrapperModel, IESECGoodsFeedResourceCardPriceLabel;

@interface IESECGoodsFeedResourceCardProductCard : UIView {
    IESECLLView *_contentView;
    UIImageView *_backgroundImageView;
    IESECFeedRecommendProductWrapperModel *_product;
    IESECGoodsFeedResourceCardPriceLabel *_priceLabel;
}

@property (retain, nonatomic) UIView *priceTag;
@property (retain, nonatomic) UIImageView *priceHeader;

- (void)updateWithProductModel:(id)a0 style:(unsigned long long)a1;
- (void)updateWithProductModel:(id)a0 showCrossedMarketPrice:(BOOL)a1 fixCrossedMarketPrice:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
