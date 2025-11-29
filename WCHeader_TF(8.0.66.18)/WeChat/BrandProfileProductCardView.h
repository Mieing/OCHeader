@class UIImageView, UIView, GetProfileEcCardResp_ProductCard, MMUILabel;

@interface BrandProfileProductCardView : BrandProfileButton

@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) UIView *textInfoView;
@property (retain, nonatomic) MMUILabel *productNameLabel;
@property (retain, nonatomic) MMUILabel *priceLabel;
@property (retain, nonatomic) MMUILabel *priceStartLabel;
@property (retain, nonatomic) MMUILabel *recommendLabel;
@property (retain, nonatomic) MMUILabel *commentLabel;
@property (retain, nonatomic) UIView *recommendSeparator;
@property (retain, nonatomic) GetProfileEcCardResp_ProductCard *productCardInfo;

- (id)initWithProductCardInfo:(id)a0;
- (void)renderWithProfileProductInfo:(id)a0;
- (void)initSubViews;
- (void)layoutSubviews;
- (double)layoutSubviewsAndReturnHeight;
- (void).cxx_destruct;

@end
