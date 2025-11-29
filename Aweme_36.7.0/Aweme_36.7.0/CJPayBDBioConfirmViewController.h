@class CJPayStyleButton, UIImageView, CJPayAccountInsuranceTipView, UILabel, NSString;

@interface CJPayBDBioConfirmViewController : CJPayHalfPageBaseViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (copy, nonatomic) NSString *verifyReasonText;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void)onConfirmClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
