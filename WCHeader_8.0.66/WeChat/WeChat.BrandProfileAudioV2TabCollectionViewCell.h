@interface WeChat.BrandProfileAudioV2TabCollectionViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playingAnimationView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_animationContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_thumbnailImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_durationLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_recommendReasonLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_queueButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pinnedView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomLine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_highlightOverlayView;
}

@property (nonatomic) BOOL highlighted;

- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)onClickPlay;
- (void)onClickQueue;
- (void).cxx_destruct;

@end
