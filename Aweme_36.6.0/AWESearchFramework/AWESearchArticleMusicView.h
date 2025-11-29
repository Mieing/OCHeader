@class AWESearchArticleDetailPageContext, AWEButton, UIVisualEffectView, UIView;
@protocol AWEDemaciaPlayerView;

@interface AWESearchArticleMusicView : UIView

@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;
@property (retain, nonatomic) AWEButton *musicButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView<AWEDemaciaPlayerView> *playerView;
@property (nonatomic) BOOL shouldUseSelfPlayer;
@property (nonatomic) BOOL isMusicPlaying;
@property (nonatomic) long long lastPlayingState;

+ (id)musicViewWithStatus:(BOOL)a0 andUsePlayer:(BOOL)a1;

- (id)playerModel;
- (void)bindPageContext:(id)a0;
- (void)reserveStateAndPause;
- (void)onMusicButtonClick;
- (void)trackMusicButtonClick;
- (id)video;
- (void).cxx_destruct;
- (void)setupUI;
- (void)resumeState;

@end
