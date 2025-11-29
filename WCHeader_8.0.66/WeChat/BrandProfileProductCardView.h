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

- (void)removeFromSuperview;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)sendSubviewToBack:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithProductCardInfo:(id)a0;
- (void)renderWithProfileProductInfo:(id)a0;
- (void)initSubViews;
- (void)layoutSubviews;
- (double)layoutSubviewsAndReturnHeight;
- (void).cxx_destruct;

@end
