@class UILabel, UITextField, NSString;

@interface CJPayStandardAlertInputView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UILabel *errorLabel;
@property (copy, nonatomic) NSString *errorText;
@property (copy, nonatomic) id /* block */ inputContentDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
