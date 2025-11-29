@class UIView, AWEDoubleColumnSearchMerchandiseModel, NSDictionary, AWESearchMarketShopView, YYLabel, AWESearchCouponListView, UILabel, AWESearchAdCouponListView;

@interface AWESearchMarketGoodsInfoView : UIView {
    YYLabel *_titleLabel;
    UILabel *_strongPriceLabel;
    UILabel *_extraInfoLabel;
    UILabel *_weakPriceLabel;
    UILabel *_recommendLabel;
    AWESearchCouponListView *_couponListView;
    AWESearchAdCouponListView *_adCouponListView;
}

@property (retain, nonatomic) AWESearchMarketShopView *shopView;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (copy, nonatomic) NSDictionary *searchInfoDict;
@property (nonatomic) double paddingHorizontal;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (double)heightForModel:(id)a0 containerWidth:(double)a1 paddingHorizontal:(double)a2;

- (void)configWithModel:(id)a0;
- (id)makeStrongPriceAttributeText:(id)a0;
- (void)jumpShop;
- (unsigned long long)titleLabelLines;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
