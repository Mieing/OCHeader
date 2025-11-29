@class NSString, UITextField, UILabel, UIButton;

@interface IESLiveMultiKTVChallengeCustomTargetPanel : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UITextField *textField;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (copy, nonatomic) id /* block */ confirmCallback;
@property (nonatomic) unsigned long long minValue;
@property (nonatomic) unsigned long long maxValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didCancelBtnClicked;
- (void)didConfirmBtnClicked;
- (void)startInput;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setupSubviews;
- (void)textFieldDidChange:(id)a0;

@end
