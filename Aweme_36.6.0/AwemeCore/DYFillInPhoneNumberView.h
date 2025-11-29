@class DYLoginNextActionButton, UILabel, DYPhoneNumberInputView, MASConstraint;

@interface DYFillInPhoneNumberView : UIView

@property (retain, nonatomic) UILabel *extraSubTitleLabel;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) MASConstraint *nextButtonTopConstraint;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DYPhoneNumberInputView *phoneNumberInputView;
@property (retain, nonatomic) DYLoginNextActionButton *nextButton;

- (void)showErrorHint:(id)a0;
- (id)initWithButtonTitleType:(unsigned long long)a0;
- (id)getButtonNormalTitle;
- (id)getButtonSuccessTitle;
- (void)showExtraSubTitle:(id)a0;
- (void)bubbleDidClicked;
- (void).cxx_destruct;
- (void)setupUI;

@end
