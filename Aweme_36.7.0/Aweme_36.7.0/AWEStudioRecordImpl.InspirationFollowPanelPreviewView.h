@interface AWEStudioRecordImpl.InspirationFollowPanelPreviewView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ previewConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ inspirationInfo;
    void /* unknown type, empty encoding */ defaultDismissRect;
    void /* unknown type, empty encoding */ thumbnailImageRequest;
    void /* unknown type, empty encoding */ originImageRequest;
    void /* unknown type, empty encoding */ closeAction;
    void /* unknown type, empty encoding */ containerFrame;
}

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)closeButtonClick;
- (void)downSwipAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
