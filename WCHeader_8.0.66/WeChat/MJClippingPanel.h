@class MJComposingToolbar, MMUIView, MJPublisherPlaybackProgressSlider;
@protocol MJClippingPanelDelegate;

@interface MJClippingPanel : MMUIView

@property (retain, nonatomic) MMUIView *bottomBackgroundView;
@property (weak, nonatomic) id<MJClippingPanelDelegate> delegate;
@property (readonly, nonatomic) unsigned long long panelConfiguration;
@property (readonly, nonatomic) MJPublisherPlaybackProgressSlider *playbackProgressSlider;
@property (readonly, nonatomic) MJComposingToolbar *toolbar;
@property (readonly, nonatomic) MMUIView *contentView;

- (id)initWithPanelConfiguration:(unsigned long long)a0;
- (void)setupViews;
- (void)layoutViews;
- (void)configWith:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setupBottomBackgroundViewDefault;
- (void)setupBottomBackgroundViewForLyricEditing;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)viewHitInSubview:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 event:(id)a2;
- (void)setIsPlaying:(BOOL)a0;
- (void)setPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setPlaybackDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setVideoFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)hidePlaybackProgressSliderAnimated:(BOOL)a0;
- (void)showPlaybackProgressSliderAnimated:(BOOL)a0;
- (void)hideUndoRedoAnimated:(BOOL)a0;
- (void)showUndoRedoAnimated:(BOOL)a0;
- (void)setIsToolbarHidden:(BOOL)a0 alpha:(double)a1;
- (void)setIsUndoEnabled:(BOOL)a0;
- (void)setIsRedoEnabled:(BOOL)a0;
- (void)playbackControlViewValueChanged:(id)a0;
- (void)playbackControlViewTouchDown:(id)a0;
- (void)playbackControlViewTouchEnd:(id)a0;
- (void)toolbarPlayButtonTouchUpInside:(id)a0;
- (void)toolbarUndoButtonTouchUpInside:(id)a0;
- (void)toolbarRedoButtonTouchUpInside:(id)a0;
- (void).cxx_destruct;

@end
