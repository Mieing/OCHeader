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

- (id)initWithShopCardInfo:(id)a0;
- (void)initSubViews;
- (void)renderWithShopCardInfo:(id)a0 hasProduct:(BOOL)a1;
- (void)layoutSubviews;
- (double)layoutSubviewsAndReturnHeight;
- (void).cxx_destruct;

@end
