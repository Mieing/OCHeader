@class _TtC21AWEMusicStreamingImpl12BNPlayButton;

@interface AWEMusicStreamingImpl.PlayCollectButton : UIView {
    void /* unknown type, empty encoding */ collectionEndWorkItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_animationView;
    void /* unknown type, empty encoding */ collectedView;
}

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL collected;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl12BNPlayButton *collectButton;

- (void)removeCollectAnimations;
- (void)setCollected:(BOOL)a0 animated:(BOOL)a1;
- (void)startCollectGuideAnimaFromAction:(id)a0;
- (void)removeCollectGuideAnima;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
