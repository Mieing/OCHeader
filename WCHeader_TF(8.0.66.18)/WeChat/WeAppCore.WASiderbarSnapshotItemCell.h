@interface WeAppCore.WASiderbarSnapshotItemCell : UICollectionViewCell <WAContactMgrExtension> {
    void /* unknown type, empty encoding */ itemData;
    void /* unknown type, empty encoding */ headImageUrl;
    void /* unknown type, empty encoding */ contactGetter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_snapshotView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_debugLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nickNameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_highlightMaskView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)onModifyWeAppContact:(id)a0;
- (void).cxx_destruct;

@end
