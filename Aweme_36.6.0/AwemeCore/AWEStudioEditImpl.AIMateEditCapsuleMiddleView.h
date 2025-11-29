@interface AWEStudioEditImpl.AIMateEditCapsuleMiddleView : UIView {
    void /* unknown type, empty encoding */ currentStatus;
    void /* unknown type, empty encoding */ statusAnimator;
    void /* unknown type, empty encoding */ hintTextAnimator;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hintView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_processView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_historyView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hintLable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_processLable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_historyMask;
}

- (void)handleTapHintText;
- (void)handleTapProcessLabel;
- (void)clickCancelButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
