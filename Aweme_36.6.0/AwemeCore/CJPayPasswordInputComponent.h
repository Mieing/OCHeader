@class CJPayPasswordInputStyleModel, CJPayButton, CJPaySafeInputView, MASConstraint, CJPayErrorInfoActionView;

@interface CJPayPasswordInputComponent : UIView

@property (retain, nonatomic) CJPayPasswordInputStyleModel *model;
@property (retain, nonatomic) CJPayButton *forgetPasswordBtn;
@property (retain, nonatomic) CJPayErrorInfoActionView *errorInfoActionView;
@property (retain, nonatomic) CJPaySafeInputView *inputPasswordView;
@property (retain, nonatomic) MASConstraint *bottomBaseInputviewConstraint;
@property (retain, nonatomic) MASConstraint *bottomBaseForgetBtnConstraint;
@property (copy, nonatomic) id /* block */ forgetPasswordBtnBlock;
@property (copy, nonatomic) id /* block */ errorInfoActionBtnBlock;

- (void)setForgetBtnHidden:(BOOL)a0;
- (void)p_updatePasswordViewConstraint;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
