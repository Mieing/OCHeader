@class UIButton, DYLoginNextActionButton, UILabel, DYPhoneNumberInputView, MASConstraint;

@interface DYRebindFillInOldPhoneNumberView : UIView

@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) MASConstraint *nextButtonTopConstraint;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DYPhoneNumberInputView *phoneNumberInputView;
@property (retain, nonatomic) DYLoginNextActionButton *nextButton;
@property (retain, nonatomic) UIButton *forgetPhoneButton;

- (void)showErrorHint:(id)a0;
- (id)getButtonNormalTitle;
- (id)getButtonSuccessTitle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
