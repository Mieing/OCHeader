@interface AWEPaySwiftImpl.ChannelPopupGuideView : UIView <CJPayLynxViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lottieView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTitleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionView;
    void /* unknown type, empty encoding */ lynxView;
    void /* unknown type, empty encoding */ closeAction;
    void /* unknown type, empty encoding */ cancelAction;
    void /* unknown type, empty encoding */ confirmAction;
    void /* unknown type, empty encoding */ updateHeightAction;
}

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)didCloseAction;
- (void)didConfirmAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)didCancelAction;

@end
