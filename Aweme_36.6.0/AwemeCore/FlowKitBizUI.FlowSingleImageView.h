@interface FlowKitBizUI.FlowSingleImageView : UIView {
    void /* unknown type, empty encoding */ tapBlock;
    void /* unknown type, empty encoding */ linkButtonClickBlock;
    void /* unknown type, empty encoding */ bgColor;
    void /* unknown type, empty encoding */ enableRetry;
    void /* unknown type, empty encoding */ enableCoverCount;
    void /* unknown type, empty encoding */ showRetry;
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ mainSiteUrl;
    void /* unknown type, empty encoding */ isImageSetted;
    void /* unknown type, empty encoding */ enableLinkButton;
    void /* unknown type, empty encoding */ imageItem;
    void /* unknown type, empty encoding */ isPlaceholder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverCountView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentImageView;
}

- (void)retryButtonDidPress:(id)a0;
- (void)imageContainerClickedHandle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
