@class UIImageView, IESECGradientView, UILabel, UIView;

@interface IESECBalanceExchangeCouponView : UIView <IESECLLComponent>

@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIImageView *redeemEntry;
@property (retain, nonatomic) UIImageView *couponExchangeIcon;
@property (retain, nonatomic) UILabel *subDescribeLabel;
@property (retain, nonatomic) UILabel *mainDescribeLabel;
@property (retain, nonatomic) UILabel *redeemDescriptionLabel;
@property (retain, nonatomic) IESECGradientView *backgroundView;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
