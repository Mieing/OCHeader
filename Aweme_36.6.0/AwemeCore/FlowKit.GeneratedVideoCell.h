@interface FlowKit.GeneratedVideoCell : FlowKitBizUI.MessageCell {
    void /* unknown type, empty encoding */ downloadUrl;
    void /* unknown type, empty encoding */ onTapDownloadVideo;
    void /* unknown type, empty encoding */ onCellSelected;
    void /* unknown type, empty encoding */ videoIcon;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ effectView;
    void /* unknown type, empty encoding */ failedIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadLoadingContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadLoadingView;
}

- (void)clickDownload;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)cellSelected;

@end
