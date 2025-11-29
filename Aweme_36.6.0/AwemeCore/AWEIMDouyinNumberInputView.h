@class AWEIMDouyinNumberKeyboard, UILabel, NSString;

@interface AWEIMDouyinNumberInputView : UITextField <UITextFieldDelegate>

@property (retain, nonatomic) AWEIMDouyinNumberKeyboard *keyboard;
@property (retain, nonatomic) UILabel *inputDescLabel;
@property (copy, nonatomic) id /* block */ didChangeBlock;
@property (nonatomic) unsigned long long numberKeyBoardType;
@property (copy, nonatomic) NSString *preStr;
@property (nonatomic) double contentYOffset;
@property (nonatomic) double placeHolderYOffset;
@property (copy, nonatomic) NSString *matchStrRegex;
@property (copy, nonatomic) NSString *inputDescStr;
@property (copy, nonatomic) id /* block */ didBecomeFirstResponderBlock;
@property (copy, nonatomic) id /* block */ didClickConfirmBtn;
@property (copy, nonatomic) id /* block */ didEndEditBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_clearText;
- (id)p_processNewInput:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
