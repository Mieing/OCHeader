@interface FlowKit.FeedBackInputCell : UICollectionViewCell <UITextViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_placeHolderLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
}

- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
