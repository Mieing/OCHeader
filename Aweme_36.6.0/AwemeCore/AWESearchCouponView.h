@class UIFont, UIColor, CAShapeLayer, AWESearchMerchandiseProductRightStruct, UILabel;

@interface AWESearchCouponView : UIView

@property (retain, nonatomic) UILabel *firstTagLabel;
@property (retain, nonatomic) CAShapeLayer *dashedSeparatorLine;
@property (retain, nonatomic) UILabel *secondTagLabel;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) AWESearchMerchandiseProductRightStruct *coupon;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double fontSize;

+ (double)widthForCoupon:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
