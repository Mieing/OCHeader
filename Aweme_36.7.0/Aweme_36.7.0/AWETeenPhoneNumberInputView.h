@class UIButton, NSString, AWETeenCountryCodeView, AWETeenPhoneTextField;

@interface AWETeenPhoneNumberInputView : UIView <UITextFieldDelegate>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWETeenPhoneTextField *textField;
@property (retain, nonatomic) AWETeenCountryCodeView *countryCodeView;
@property (retain, nonatomic) UIButton *deleteBtn;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *phoneNumberString;
@property (copy, nonatomic) id /* block */ didValueChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeValue:(id)a0 fromUser:(BOOL)a1 fromClearButton:(BOOL)a2;
- (void)deleteBtnClicked;
- (id)getAttributedPlaceholder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
