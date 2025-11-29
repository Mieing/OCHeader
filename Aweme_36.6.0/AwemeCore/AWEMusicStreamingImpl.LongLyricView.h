@class _TtC21AWEMusicStreamingImpl24BNLyricModeContainerView;

@interface AWEMusicStreamingImpl.LongLyricView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ lyricModePlayButton;
    void /* unknown type, empty encoding */ lyricSongView;
    void /* unknown type, empty encoding */ longLyricLoadingView;
    void /* unknown type, empty encoding */ longLyricRetryView;
    void /* unknown type, empty encoding */ coverImage;
    void /* unknown type, empty encoding */ isLyricAnimating;
    void /* unknown type, empty encoding */ collectButton;
    void /* unknown type, empty encoding */ containerWidth;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
}

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl24BNLyricModeContainerView *lyricContainer;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)handleTap:(id)a0;
- (void)updatePlayStateWithIsPlaying:(BOOL)a0;
- (void)updateColorWithColors:(id)a0;
- (void)showRetryViewWithStats:(long long)a0;
- (void)showLyricView;
- (void)reloadLyricViewIfNeeded;
- (void)reloadWithTrack:(id)a0 playScene:(id)a1;
- (void)updateButtonWithTrack:(id)a0;
- (void)updateInfoWithAnimationWithTrack:(id)a0 playScene:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)showLoading;

@end
