@interface AWEFormatImpl.InputPanel : UIView {
    void /* unknown type, empty encoding */ sendAction;
    void /* unknown type, empty encoding */ willShow;
    void /* unknown type, empty encoding */ willDismiss;
    void /* unknown type, empty encoding */ didShow;
    void /* unknown type, empty encoding */ didDismiss;
    void /* unknown type, empty encoding */ heightWillChanged;
    void /* unknown type, empty encoding */ isShowing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bgTapContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputAreaContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topContainerBgView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_projectionBgView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_borderBgView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputArea;
    void /* unknown type, empty encoding */ $__lazy_storage_$_switchButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sendButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandDetailAreaContainer;
    void /* unknown type, empty encoding */ storedExpandDetailAreaContainerHeight;
    void /* unknown type, empty encoding */ currentExpandDetailAreaContainerHeight;
    void /* unknown type, empty encoding */ isDismissAnimating;
    void /* unknown type, empty encoding */ showCompletion;
    void /* unknown type, empty encoding */ context;
}

- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)sendButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
