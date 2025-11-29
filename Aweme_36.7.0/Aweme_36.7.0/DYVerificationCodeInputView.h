@class UIFont, UIView, NSAttributedString, NSString, UIButton, AWEAccountDeleteButton, UITextField, UIColor;

@interface DYVerificationCodeInputView : UIView <UITextFieldDelegate, AWEAccountDeleteButtonDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *textFieldBackgroundView;
@property (retain, nonatomic) AWEAccountDeleteButton *deleteButton;
@property (nonatomic) BOOL hasEditingChanged;
@property (nonatomic) BOOL isReSendCode;
@property (copy, nonatomic) id /* block */ didChangeBlock;
@property (nonatomic) unsigned long long verificationCodeType;
@property (retain, nonatomic) UIFont *verificationCodeTextFont;
@property (retain, nonatomic) UIColor *verificationCodeTextColor;
@property (retain, nonatomic) UIFont *verificationButtonTextFont;
@property (retain, nonatomic) NSAttributedString *attributedPlaceholder;
@property (nonatomic) BOOL forbiddenBigFont;
@property (copy, nonatomic) id /* block */ firstInputCodeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;

- (void)adjustUI;
- (void)clearInputText;
- (void)setRemainTime:(unsigned long long)a0;
- (id)getAttributedPlaceholder:(id)a0;
- (void)deleteButtonDidClick;
- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void)editingChangedAction:(id)a0;
- (id)imageConvergenceMiddleScaleWithName:(id)a0;
- (void)removeButtonWidthConstraints;
- (void)addButtonWidthConstraintsForCountDown;
- (void)resetCountDownStatus;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)text;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
