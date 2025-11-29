@class NSString, NSMutableArray, AWETimeLockPasswordTextField;

@interface AWETeenModePasswordInputView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (nonatomic) long long type;
@property (nonatomic) double passwordInputItemViewWidth;
@property (nonatomic) double passwordInputItemViewHeight;
@property (nonatomic) double passwordInputItemViewSpacing;
@property (copy, nonatomic) id /* block */ textFieldTextDidChangeBlock;
@property (retain, nonatomic) AWETimeLockPasswordTextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })passwordInputViewSize;
- (id)initWithType:(long long)a0 tintColor:(id)a1;
- (void)p_setupLayoutProperties;
- (void)setupSubviewsWithColor:(id)a0;
- (void)hideKeyBoard;
- (void)showKeyBoard;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)clearPassword;
- (void)textFieldTextDidChange:(id)a0;

@end
