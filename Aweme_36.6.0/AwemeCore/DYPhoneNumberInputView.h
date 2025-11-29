@class UIFont, NSString, DYPhoneNumberModel, NSAttributedString, SHSPhoneTextField, AWEAccountDeleteButton, DYCountryCodeView, UIColor;

@interface DYPhoneNumberInputView : UIView <UITextFieldDelegate, AWEAccountDeleteButtonDelegate>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) SHSPhoneTextField *textField;
@property (retain, nonatomic) DYCountryCodeView *countryCodeView;
@property (retain, nonatomic) AWEAccountDeleteButton *deleteButton;
@property (nonatomic) BOOL hasManualFilledNumber;
@property (nonatomic) BOOL preFilledNumberHasChange;
@property (nonatomic) BOOL isPreFilledNumber;
@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (retain, nonatomic) NSAttributedString *attributedPlaceholder;
@property (copy, nonatomic) id /* block */ didChangeBlock;
@property (nonatomic) BOOL isSetToChinese;
@property (retain, nonatomic) UIFont *phoneNumberTextFont;
@property (retain, nonatomic) UIColor *phoneNumberTextColor;
@property (nonatomic) BOOL forbiddenBigFont;
@property (copy, nonatomic) id /* block */ firstManualInputNumber;
@property (copy, nonatomic) id /* block */ didClickCountryCode;
@property (copy, nonatomic) id /* block */ didDeletePhoneNumber;
@property (copy, nonatomic) id /* block */ contentSizeChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserCommonAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;

- (void)didChangeValue:(id)a0 fromUser:(BOOL)a1 fromClearButton:(BOOL)a2;
- (id)getAttributedPlaceholder:(id)a0;
- (void)deleteButtonDidClick;
- (id)aAWEUserCommonAdapter;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (id)imageConvergenceMiddleScaleWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
