@class UILabel, UIImageView, NSString;

@interface AWEDouPlusRechargeCouponStatusView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) NSString *couponStatusDesc;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
