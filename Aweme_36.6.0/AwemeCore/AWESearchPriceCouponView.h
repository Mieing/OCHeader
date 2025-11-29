@class UIFont, UIImageView, AWESearchMerchandiseProductRightStruct, UILabel;

@interface AWESearchPriceCouponView : UIView

@property (retain, nonatomic) UILabel *firstTagLabel;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) AWESearchMerchandiseProductRightStruct *coupon;

+ (double)widthForCoupon:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
