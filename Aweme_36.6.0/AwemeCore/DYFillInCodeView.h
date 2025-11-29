@class DYLoginNextActionButton, UILabel, DYVerificationCodeInputView, MASConstraint;

@interface DYFillInCodeView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) MASConstraint *nextButtonTopConstraint;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DYVerificationCodeInputView *codeInputView;
@property (retain, nonatomic) DYLoginNextActionButton *nextButton;

- (void)showErrorHint:(id)a0;
- (id)getButtonNormalTitle;
- (id)getButtonSuccessTitle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
