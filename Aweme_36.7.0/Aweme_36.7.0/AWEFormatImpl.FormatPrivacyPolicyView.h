@interface AWEFormatImpl.FormatPrivacyPolicyView : UIView <UITextViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_confirmBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_policyLabel;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ uid;
    void /* unknown type, empty encoding */ closeHandler;
}

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)closePanel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
