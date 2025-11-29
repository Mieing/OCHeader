@class UIImageView, CJPayPaymentInfoModel, UILabel, UIView;

@interface CJPaySuperPayResultView : UIView

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *showView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayPaymentInfoModel *paymentInfo;

- (void)p_setTitle;
- (id)p_shortHandWithBankName:(id)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subTitle:(id)a1;

@end
