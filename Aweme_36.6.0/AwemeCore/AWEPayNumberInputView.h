@class UIFont, AWEPayNumberKeyboard, NSString, UILabel;

@interface AWEPayNumberInputView : UITextField <UITextFieldDelegate>

@property (retain, nonatomic) AWEPayNumberKeyboard *keyboard;
@property (retain, nonatomic) UILabel *inputDescLabel;
@property (copy, nonatomic) id /* block */ didChangeBlock;
@property (nonatomic) unsigned long long numberKeyBoardType;
@property (copy, nonatomic) NSString *preStr;
@property (retain, nonatomic) UIFont *preStrFont;
@property (nonatomic) double contentYOffset;
@property (nonatomic) double placeHolderYOffset;
@property (copy, nonatomic) NSString *matchStrRegex;
@property (copy, nonatomic) NSString *inputDescStr;
@property (copy, nonatomic) id /* block */ didBecomeFirstResponderBlock;
@property (copy, nonatomic) id /* block */ didClickConfirmBtn;
@property (nonatomic) BOOL confirmEnabledWhenTextEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_clearText;
- (void)updateKeyboardConfirmBtnEnable;
- (BOOL)numberTextValid;
- (id)p_processNewInput:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)textField:(id)a0 editMenuForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 suggestedActions:(id)a2;

@end
