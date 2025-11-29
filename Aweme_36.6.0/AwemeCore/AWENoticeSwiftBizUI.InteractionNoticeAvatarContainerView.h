@interface AWENoticeSwiftBizUI.InteractionNoticeAvatarContainerView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ tapAvatarViewBlock;
    void /* unknown type, empty encoding */ gestureShouldRequireFailureBlock;
    void /* unknown type, empty encoding */ currentConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarsView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_typeIconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_yellowPointView;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)tapAvatarViewWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
