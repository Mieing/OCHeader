@class AWEDouPlusCouponModel, UIImageView, AWEDouPlusProductCouponIconView, UIView, UILabel, AWEDouPlusIAPProductModel;

@interface AWEDouPlusRechargeIAPProductView : UIView

@property (retain, nonatomic) AWEDouPlusProductCouponIconView *couponIconView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *moneyLabel;
@property (retain, nonatomic) AWEDouPlusIAPProductModel *productModel;
@property (retain, nonatomic) AWEDouPlusCouponModel *couponModel;
@property (copy, nonatomic) id /* block */ clickProductBlock;

- (void)setupGestureRecognizer;
- (void)updateSubViewsStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)onTapAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
