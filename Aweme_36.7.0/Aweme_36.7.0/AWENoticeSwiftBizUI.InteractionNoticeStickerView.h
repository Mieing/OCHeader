@interface AWENoticeSwiftBizUI.InteractionNoticeStickerView : BDImageView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ currentConfig;
    void /* unknown type, empty encoding */ reuseId;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagView;
}

- (void)didClickWithSender:(id)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
