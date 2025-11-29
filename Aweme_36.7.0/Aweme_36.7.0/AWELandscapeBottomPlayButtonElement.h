@class UIButton, UIView;

@interface AWELandscapeBottomPlayButtonElement : AWELandscapeInteractionBaseElement

@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIView *screencastLoadingView;
@property (nonatomic) BOOL isScreenCastLoading;
@property (nonatomic) BOOL isInScreenCast;

- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)showScreenCastView:(BOOL)a0 showFeedBack:(BOOL)a1;
- (void)showScreenCastViewWithConnecting:(BOOL)a0;
- (void)updateScreenCastPlayStatus:(unsigned long long)a0;
- (void)updateScreenCastProgress;
- (void)updatePlayStateWithPlaying:(BOOL)a0;
- (id)screenCastLoadingAnimation;
- (void)handlePlayButtonClicked;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
