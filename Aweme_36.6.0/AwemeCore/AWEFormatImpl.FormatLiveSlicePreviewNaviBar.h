@interface AWEFormatImpl.FormatLiveSlicePreviewNaviBar : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_aiTag;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_publishButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_moreButton;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ popoverMenu;
    void /* unknown type, empty encoding */ isPopoverShowing;
    void /* unknown type, empty encoding */ nameClickHandler;
    void /* unknown type, empty encoding */ publishClickHandler;
    void /* unknown type, empty encoding */ backClickHandler;
    void /* unknown type, empty encoding */ deleteClickHandler;
    void /* unknown type, empty encoding */ clickTracker;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ nickname;
}

- (void)clickNameButton;
- (void)clickPublishButton;
- (void)clickBackButton;
- (void)clickMoreButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
