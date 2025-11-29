@interface FlowKitBizUI.MessageUGCImageItemCell : FlowKitBizUI.MessageItemCell {
    void /* unknown type, empty encoding */ _settingProvider;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ imageRequest;
    void /* unknown type, empty encoding */ failedIcon;
    void /* unknown type, empty encoding */ shapeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadLoadingContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadLoadingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_beautifyButton;
    void /* unknown type, empty encoding */ tipsLabel;
    void /* unknown type, empty encoding */ isImagePreviewEnabled;
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ onTapDownloadImage;
    void /* unknown type, empty encoding */ onTapShareImage;
    void /* unknown type, empty encoding */ onTapBeautifyImage;
    void /* unknown type, empty encoding */ trackBeautyShow;
    void /* unknown type, empty encoding */ imageUrlStr;
    void /* unknown type, empty encoding */ oriImageUrlStr;
    void /* unknown type, empty encoding */ downloadUrl;
    void /* unknown type, empty encoding */ localRepliedMessageID;
    void /* unknown type, empty encoding */ localMessage;
    void /* unknown type, empty encoding */ loadingId;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ bgLoadingConfig;
    void /* unknown type, empty encoding */ imageRequestState;
}

- (void)clickShare;
- (void)clickDownload;
- (void)clickBeauty;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)click;

@end
