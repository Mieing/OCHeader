@interface AWEFormatImpl.InputArea : UIView <UITextViewDelegate> {
    void /* unknown type, empty encoding */ maxInputCount;
    void /* unknown type, empty encoding */ currentText;
    void /* unknown type, empty encoding */ isKeyboardActivated;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ currentHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textViewForCalculating;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emojiBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_keyboardBtn;
    void /* unknown type, empty encoding */ emojiAdapter;
}

- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)handleEmojiBtnClickedWithSender:(id)a0;
- (void)handleKeyboardBtnClickedWithSender:(id)a0;
- (void)keyboardWillHideWithSender:(id)a0;
- (void)keyboardWillShowWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
