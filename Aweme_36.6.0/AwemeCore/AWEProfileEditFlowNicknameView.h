@class UIButton, UITextField, NSString;

@interface AWEProfileEditFlowNicknameView : AWEProfileEditFlowStepView <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *clearButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapNextButton:(id)a0;
- (void)p_updateUIState;
- (void)p_tapClearButton:(id)a0;
- (void)p_textFieldEditingChanged:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;

@end
