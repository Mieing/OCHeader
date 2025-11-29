@class UIView, AWEEcommerceSearchBannerIconGroupView, AWEDoubleColumnSearchMerchandiseModel, AWEEcommerceSearchStyleLabel, UIImageView, CALayer, AWEEcommerceSearchBannerBackgroundView, AWEEcomSearchWebImageView, AWEEcommerceSearchBannerActionView, NSDictionary;

@interface AWEEcommerceSearchBoxBannerBaseCell : AWESearchCachalotECommerceBaseCell

@property (readonly, nonatomic) UIImageView *bannerImgView;
@property (readonly, nonatomic) UIView *bannerContentView;
@property (readonly, nonatomic) AWEEcomSearchWebImageView *contentImgView;
@property (readonly, nonatomic) CALayer *contentImgMaskLayer;
@property (readonly, nonatomic) AWEEcommerceSearchBannerBackgroundView *contentBgView;
@property (readonly, nonatomic) AWEEcommerceSearchBannerIconGroupView *iconGroupView;
@property (readonly, nonatomic) AWEEcommerceSearchStyleLabel *mainTitleLab;
@property (readonly, nonatomic) AWEEcommerceSearchStyleLabel *subTitleLab;
@property (readonly, nonatomic) AWEEcommerceSearchBannerActionView *button;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (nonatomic) BOOL isFromECommerce;

+ (id)identifier;

- (void)trackCardShow;
- (void)clickButton;
- (void)trackCardClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
