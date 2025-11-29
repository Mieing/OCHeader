@class AWEDouPlusCouponModel, UILabel, UIImageView;

@interface AWEDouPlusProductCouponIconView : UIView

@property (retain, nonatomic) AWEDouPlusCouponModel *couponModel;
@property (retain, nonatomic) UILabel *givingLabel;
@property (retain, nonatomic) UIImageView *douplusImageView;
@property (retain, nonatomic) UILabel *amountLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
