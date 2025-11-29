@interface FlowKit.MultiFileCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ fileBackgroundColor;
    void /* unknown type, empty encoding */ imageBackgroundColor;
    void /* unknown type, empty encoding */ retryBlock;
    void /* unknown type, empty encoding */ deleteBlock;
    void /* unknown type, empty encoding */ tapBlock;
    void /* unknown type, empty encoding */ onTapBeautifyImage;
    void /* unknown type, empty encoding */ cellCornerRadius;
    void /* unknown type, empty encoding */ $__lazy_storage_$_beautifyButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_borderView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ fileContent;
    void /* unknown type, empty encoding */ imageContent;
    void /* unknown type, empty encoding */ videoContent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_analysisView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_analysisImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_analysisLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_uploadingBgView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryBgView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retryButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nonComplianceView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deleteButton;
}

@property (nonatomic) BOOL highlighted;

- (void)clickBeauty;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
