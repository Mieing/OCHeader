@class UIColor, UITextRange;
@protocol UITextFieldDelegate;

@interface FlowUIKit.VerificationCodeTextField : UITextField <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ codeLength;
    void /* unknown type, empty encoding */ characterSpacing;
    void /* unknown type, empty encoding */ textPreprocess;
    void /* unknown type, empty encoding */ validCharacterSet;
    void /* unknown type, empty encoding */ splitStyle;
    void /* unknown type, empty encoding */ specifyWidth;
    void /* unknown type, empty encoding */ lastText;
    void /* unknown type, empty encoding */ inputFinishedHandler;
    void /* unknown type, empty encoding */ inputChangedHandler;
    void /* unknown type, empty encoding */ characterLabels;
}

@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) id<UITextFieldDelegate> delegate;
@property (nonatomic, retain) UITextRange *selectedTextRange;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (BOOL)resignFirstResponder;
- (void)deleteBackward;
- (id)selectionRectsForRange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLabels;

@end
