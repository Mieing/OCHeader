@interface AWEStoryImpl.MomentBaseCell : UICollectionViewCell <AFDPureModePinchable> {
    void /* unknown type, empty encoding */ backgroundImageCacheKey;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ pauseIcon;
    void /* unknown type, empty encoding */ backgroundImageView;
    void /* unknown type, empty encoding */ backgroundMaskView;
    void /* unknown type, empty encoding */ popoverController;
    void /* unknown type, empty encoding */ needRender;
    void /* unknown type, empty encoding */ renderBlock;
}

- (id)pinchTargetView;
- (id)pinchBackgroundViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isContentReady;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
