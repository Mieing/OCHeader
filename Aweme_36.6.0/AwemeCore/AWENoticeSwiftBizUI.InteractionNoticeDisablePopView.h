@interface AWENoticeSwiftBizUI.InteractionNoticeDisablePopView : UIView {
    void /* unknown type, empty encoding */ mainButtonHandler;
    void /* unknown type, empty encoding */ secondaryButtonHandler;
    void /* unknown type, empty encoding */ closeButtonHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipsIconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_descriptionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondaryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkBox;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkInfoText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkInfoView;
}

@property (class, nonatomic, readonly) Class layerClass;

- (void)didTapMainButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)didTapCloseButton;
- (void)didTapSecondaryButton;

@end
