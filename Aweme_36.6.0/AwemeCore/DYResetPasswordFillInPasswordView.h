@class DYLoginNextActionButton, DYRouterModel, UILabel, MASConstraint, DYLoginInputView;

@interface DYResetPasswordFillInPasswordView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) MASConstraint *tipLabelTopConstraint;
@property (retain, nonatomic) DYLoginInputView *passwordInputView;
@property (retain, nonatomic) DYLoginNextActionButton *nextButton;
@property (retain, nonatomic) DYRouterModel *context;

- (void)showErrorHint:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
