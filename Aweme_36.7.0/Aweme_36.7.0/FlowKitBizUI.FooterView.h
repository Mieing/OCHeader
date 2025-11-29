@interface FlowKitBizUI.FooterView : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_samePromptButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addCreationButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_privacyButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightStackView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ downloadState;
}

- (void)configureLayout;
- (void)shareButtonDidPress:(id)a0;
- (void)downloadButtonDidPress:(id)a0;
- (void)likeButtonDidPress:(id)a0;
- (void)dislikeButtonDidPress:(id)a0;
- (void)samePromptButtonDidPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
