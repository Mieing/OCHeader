@interface AWENoticeSwiftBizUI.GroupAuditActionButtonComponent : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ tapActionButtonBlock;
    void /* unknown type, empty encoding */ gestureShouldRequireFailureBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionButton;
    void /* unknown type, empty encoding */ tapCloseButtonBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)tapCloseBtnWithSender:(id)a0;
- (void)tapActionBtnWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
