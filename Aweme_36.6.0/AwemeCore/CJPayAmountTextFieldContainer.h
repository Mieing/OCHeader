@class UILabel, NSString, UIView, UIColor, CJPayCustomKeyboardTopView, CJPayAmountTextField, CJPayDouyinKeyboard, CJPayCustomRightView;
@protocol CJPayAmountTextFieldContainerDelegate;

@interface CJPayAmountTextFieldContainer : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *moneyIconLabel;
@property (retain, nonatomic) UIView *boardContainerView;
@property (retain, nonatomic) UIView *boardAccessoryView;
@property (retain, nonatomic) CJPayCustomKeyboardTopView *boardAccessoryTopView;
@property (copy, nonatomic) NSString *titleContent;
@property (retain, nonatomic) CJPayDouyinKeyboard *safeKeyBoard;
@property (retain, nonatomic) CJPayAmountTextField *textField;
@property (retain, nonatomic) CJPayCustomRightView *customClearView;
@property (weak, nonatomic) id<CJPayAmountTextFieldContainerDelegate> delegate;
@property (retain, nonatomic) UILabel *placeHolderLabel;
@property (retain, nonatomic) UIColor *cursorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_UIAppearance_setCursorColor:(id)a0;
- (double)amountValue;
- (void)p_installDefaultAppearance;
- (void)p_setupKeyBoard;
- (void)p_adapterTheme;
- (void)p_clearButtonClick;
- (void)p_deleteBackWord;
- (void)p_inputStr:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })p_selectedRange;
- (void)setTextFieldPlaceHolderWith:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)didMoveToWindow;
- (id)amountText;

@end
