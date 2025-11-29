@interface AWEPaySwiftImpl.CCMOpenPageProtocolView : UIView <UITextViewDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_agreementLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ratioBox;
    void /* unknown type, empty encoding */ onUserTapAgreement;
    void /* unknown type, empty encoding */ onUserTapAgreementLink;
    void /* unknown type, empty encoding */ isConfirmedProtocol;
    void /* unknown type, empty encoding */ hideRatioBox;
}

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)clickProtocolView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
