@class UIFont, UIColor, UIImageView, CAShapeLayer, UILabel, UIView, AWESearchMerchandiseProductRightStruct;

@interface AWESearchNewCouponView : UIView

@property (retain, nonatomic) UILabel *firstTagLabel;
@property (retain, nonatomic) UIView *firstTagView;
@property (retain, nonatomic) UIImageView *firstIconView;
@property (retain, nonatomic) CAShapeLayer *dashedSeparatorLine;
@property (retain, nonatomic) UILabel *secondTagLabel;
@property (retain, nonatomic) UIView *secondTagView;
@property (retain, nonatomic) CAShapeLayer *firstTagLayer;
@property (retain, nonatomic) CAShapeLayer *secondTagLayer;
@property (nonatomic) double firstWidth;
@property (nonatomic) double secondWidth;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) AWESearchMerchandiseProductRightStruct *coupon;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *textColor;

+ (double)widthForCoupon:(id)a0;

- (void)updateTagLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
