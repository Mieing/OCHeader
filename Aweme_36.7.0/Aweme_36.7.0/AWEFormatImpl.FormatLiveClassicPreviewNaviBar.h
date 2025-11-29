@interface AWEFormatImpl.FormatLiveClassicPreviewNaviBar : UIView {
    void /* unknown type, empty encoding */ currentLayoutState;
    void /* unknown type, empty encoding */ currentAnimatedState;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ avatarInfoViewRightConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarInfoView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_publishButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_moreButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeBtn;
    void /* unknown type, empty encoding */ popoverMenu;
    void /* unknown type, empty encoding */ isPopoverShowing;
    void /* unknown type, empty encoding */ nameClickHandler;
    void /* unknown type, empty encoding */ publishClickHandler;
    void /* unknown type, empty encoding */ backClickHandler;
    void /* unknown type, empty encoding */ deleteClickHandler;
    void /* unknown type, empty encoding */ clickTracker;
}

- (void)clickAvatar;
- (void)clickBack;
- (void)clickCloseBtn;
- (void)clickNameLabel;
- (void)clickMore;
- (void)clickPublish;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
