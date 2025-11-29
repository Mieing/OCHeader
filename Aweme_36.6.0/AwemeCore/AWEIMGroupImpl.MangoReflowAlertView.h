@interface AWEIMGroupImpl.MangoReflowAlertView : UIView {
    void /* unknown type, empty encoding */ alertInfo;
    void /* unknown type, empty encoding */ invitor;
    void /* unknown type, empty encoding */ closeAction;
    void /* unknown type, empty encoding */ confirmAction;
    void /* unknown type, empty encoding */ userInfoAction;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subInfoRegion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleRegion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userInfoRegion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userNameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionButton;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)handleCloseButton;
- (void)handleActionButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
