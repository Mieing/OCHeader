@class GetProfileEcCardResp_ShopCard, UIImageView, UIView, MMUILabel;

@interface BrandProfileShopCardView : BrandProfileButton

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *shopNameLabel;
@property (retain, nonatomic) UIImageView *shopIcon;
@property (retain, nonatomic) MMUILabel *shopTagLabel;
@property (retain, nonatomic) UIImageView *shopTagIcon;
@property (retain, nonatomic) UIView *recommendSeparator;
@property (retain, nonatomic) MMUILabel *recommendLabel;
@property (retain, nonatomic) MMUILabel *enterLabel;
@property (retain, nonatomic) UIImageView *enterIcon;
@property (retain, nonatomic) GetProfileEcCardResp_ShopCard *shopCardInfo;
@property (nonatomic) BOOL hasProduct;

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
- (id)initWithShopCardInfo:(id)a0;
- (void)initSubViews;
- (void)renderWithShopCardInfo:(id)a0 hasProduct:(BOOL)a1;
- (void)layoutSubviews;
- (double)layoutSubviewsAndReturnHeight;
- (void).cxx_destruct;

@end
