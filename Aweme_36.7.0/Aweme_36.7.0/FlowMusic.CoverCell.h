@interface FlowMusic.CoverCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_failedImagePlaceHolder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cover;
    void /* unknown type, empty encoding */ $__lazy_storage_$_thumbLoadingImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_originLoadingImageView;
    void /* unknown type, empty encoding */ imageType;
    void /* unknown type, empty encoding */ animationView;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)onTap;

@end
