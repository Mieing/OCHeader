@interface AWEIMShareImpl.ShareContactListTargetCell : UICollectionViewCell <AWEIMStreakDisplayManagerDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageMaskView;
    void /* unknown type, empty encoding */ imageRequest;
    void /* unknown type, empty encoding */ $__lazy_storage_$_onlineDotView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkboxImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_checkboxView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_aiTagImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_redPacketView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleStackView;
    void /* unknown type, empty encoding */ config;
}

@property (nonatomic) BOOL highlighted;

- (id)customIMStreakTextPreferTheme;
- (void)asyncDidUpdateIMStreakView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
