@class UIView, CJPayBaseSafeInputView, NSString, CJPaySafeKeyboard, NSCharacterSet, CJPayButton, UILabel, UIColor;

@interface CJPayIDCardLast6DigitsInputView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayBaseSafeInputView *textField;
@property (retain, nonatomic) UIView *keyboardContainerView;
@property (retain, nonatomic) CJPaySafeKeyboard *safeKeyBoard;
@property (retain, nonatomic) NSCharacterSet *supportedCharacterSet;
@property (retain, nonatomic) CJPayButton *customClearBtn;
@property (retain, nonatomic) UIColor *cursorColor;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ didStartInputBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_makeConstraints;
- (void)p_tapClear;
- (void)p_changeClearBtnHiddenStatus;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (void)deleteBackward;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)inputString:(id)a0;

@end
