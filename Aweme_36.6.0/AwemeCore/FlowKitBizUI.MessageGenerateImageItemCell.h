@interface FlowKitBizUI.MessageGenerateImageItemCell : FlowKitBizUI.MessageItemCell {
    void /* unknown type, empty encoding */ _settingProvider;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ failedIcon;
    void /* unknown type, empty encoding */ shapeView;
    void /* unknown type, empty encoding */ numberLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numberMask;
    void /* unknown type, empty encoding */ isImagePreviewEnabled;
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ linkButtonClickBlock;
    void /* unknown type, empty encoding */ imageUrlStr;
    void /* unknown type, empty encoding */ oriImageUrlStr;
    void /* unknown type, empty encoding */ downloadUrl;
    void /* unknown type, empty encoding */ isBiserialImage;
    void /* unknown type, empty encoding */ localRepliedMessageID;
    void /* unknown type, empty encoding */ localMessage;
    void /* unknown type, empty encoding */ linkButtonConfig;
    void /* unknown type, empty encoding */ imageRequestState;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)click;

@end
