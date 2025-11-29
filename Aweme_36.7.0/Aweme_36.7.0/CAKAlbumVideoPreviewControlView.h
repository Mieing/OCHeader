@class UIView, CAKAlbumVideoPreviewSliderView, UIButton, NSDictionary, UIPanGestureRecognizer, CAKAlbumVideoPreviewFakeProgressView, UILabel, AVPlayer;

@interface CAKAlbumVideoPreviewControlView : UIView

@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (retain, nonatomic) CAKAlbumVideoPreviewSliderView *progressSlider;
@property (retain, nonatomic) CAKAlbumVideoPreviewFakeProgressView *fakeProgressSlider;
@property (retain, nonatomic) UIView *panGestureView;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) BOOL isPlayingWhenDrag;
@property (nonatomic) BOOL isAppeared;
@property (weak, nonatomic) AVPlayer *player;
@property (copy, nonatomic) NSDictionary *commonParams;

- (void)progressSliderValueChanged:(id)a0;
- (void)progressSliderTouchEnded:(id)a0 bySlideScreen:(BOOL)a1;
- (void)showFakeSliderIfNeeded;
- (void)restoreToNormalWhenTouchEnd;
- (void)updateProgressSlider;
- (void)updatePlayButton;
- (void)updatePlayButtonImage:(id)a0 play:(BOOL)a1;
- (void)cancelPanGesture;
- (void)addFakeProgressSliderIfNeeded;
- (void)clickPlayButton;
- (void)trackProgressBarDragEvent;
- (void)trackPlayPauseClickEventWithStatus:(id)a0;
- (void)setupPlayerObserve;
- (void)setupMaskGradientView;
- (void)observePlayerStatus:(long long)a0;
- (void)observePlayerTimeControlStatus:(long long)a0;
- (double)totalDurtion;
- (double)currentDurtion;
- (id)p_timeFormatWithTimeInterval:(double)a0;
- (long long)playerControlStatus;
- (void)progressSliderTouchBegan:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isReady;
- (BOOL)isPlaying;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;
- (void)updateTimeLabel;

@end
