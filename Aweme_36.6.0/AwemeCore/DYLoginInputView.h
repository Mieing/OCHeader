@class AWEAccountDeleteButton, NSString, UITextField, UIFont, UIColor, NSAttributedString, AWEPasswordEyeView;

@interface DYLoginInputView : UIView <AWEAccountDeleteButtonDelegate, UITextFieldDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) AWEAccountDeleteButton *deleteButton;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) BOOL isSecureInput;
@property (nonatomic) long long maxLength;
@property (retain, nonatomic) AWEPasswordEyeView *passwordEyeView;
@property (nonatomic) unsigned long long passwordEyeViewStyle;
@property (copy, nonatomic) id /* block */ didChangeBlock;
@property (copy, nonatomic) id /* block */ shouldBeginEditingBlock;
@property (readonly, copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSAttributedString *attributedPlaceholder;
@property (copy, nonatomic) id /* block */ didClickEyeImageView;
@property (nonatomic) BOOL forbiddenBigFont;
@property (nonatomic) BOOL onlySupportNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;

- (void)clearInputText;
- (id)getAttributedPlaceholder:(id)a0;
- (void)deleteButtonDidClick;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void)editingChangedAction:(id)a0;
- (id)initWithPlaceholder:(id)a0 secureInput:(BOOL)a1 maxInputLength:(long long)a2;
- (void)updateInputContent:(id)a0;
- (id)imageConvergenceMiddleScaleWithName:(id)a0;
- (id)initWithPlaceholder:(id)a0 secureInput:(BOOL)a1 maxInputLength:(long long)a2 passwordEyeViewStyle:(unsigned long long)a3;
- (void)updateEyeViewContentSize:(double)a0;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
