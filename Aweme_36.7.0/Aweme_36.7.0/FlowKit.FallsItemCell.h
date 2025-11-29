@interface FlowKit.FallsItemCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ longPressedBlock;
    void /* unknown type, empty encoding */ onTapBlock;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ indexPath;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ showBgShadowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playIconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_likeIconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_likeAmountLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bgShadowView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_extraView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authorInfoView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGes;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)handleTap;
- (void)longPressRecognized:(id)a0;

@end
