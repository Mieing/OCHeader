@interface AWEStudioEditImpl.ModernTextEditTextView : UIView <UITextViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ textViewHeight;
    void /* unknown type, empty encoding */ textViewMaxHeight;
    void /* unknown type, empty encoding */ isBigFontMode;
    void /* unknown type, empty encoding */ textView;
}

- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
