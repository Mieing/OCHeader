@class UIButton, AWEDouPlusIAPProductModel, UIImageView, AWEDouPlusCouponModel, UIView, UILabel, YYLabel;

@interface AWEDouplusRerchageConfirmView : UIView

@property (retain, nonatomic) UIView *agreementBgView;
@property (retain, nonatomic) UIView *confirmBgView;
@property (retain, nonatomic) YYLabel *agreementLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *rechargeBtn;
@property (retain, nonatomic) AWEDouPlusIAPProductModel *productModel;
@property (retain, nonatomic) AWEDouPlusCouponModel *couponModel;
@property (copy, nonatomic) id /* block */ confirmRerchageBlock;

- (void)rechargeBtnClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateDetailText;

@end
