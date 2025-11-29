@class NSString, UIImageView, IESLiveChargeCouponToastConfig, UIView, UILabel, UIButton;

@interface IESLiveChargeCouponToastView : UIView

@property (retain, nonatomic) IESLiveChargeCouponToastConfig *config;
@property (copy, nonatomic) NSString *amountStr;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *couponImageView;
@property (retain, nonatomic) UIImageView *diamondImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *couponLabel;
@property (retain, nonatomic) UILabel *subCouponLabel;
@property (retain, nonatomic) UIView *amountContainer;
@property (retain, nonatomic) UILabel *amountLabel;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void)closeButtonClick;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)confirmButtonClick;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (void)setupUI;

@end
