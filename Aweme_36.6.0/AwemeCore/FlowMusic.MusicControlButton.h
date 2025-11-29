@interface FlowMusic.MusicControlButton : UIButton {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ iconContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicControlButtonPlayingTrackBackgroundLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playingTrackLoadingLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicControlButtonPlayingTrackProgressLayer;
}

- (void)handleButtonTouchUpInside:(id)a0;
- (void).cxx_destruct;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end
