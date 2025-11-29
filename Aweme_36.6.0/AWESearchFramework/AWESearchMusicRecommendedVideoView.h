@class AWEAwemeModel, UIView, NSString, UIImageView, AWESearchMusicRecommendVideoPlayerContainer, NSMutableDictionary, UIVisualEffectView, UILabel, AWEInvalidVideoSourceView;
@protocol AWESearchMusicRecommendedVideoViewDelegate;

@interface AWESearchMusicRecommendedVideoView : UIView <AWEPlayVideoViewControllerStatusDelegate, AWEPlayVideoDelegate, AWESearchListViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWESearchMusicRecommendVideoPlayerContainer *playerContainer;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEInvalidVideoSourceView *invalidVideoSourceView;
@property (retain, nonatomic) UIView *useMusicButton;
@property (retain, nonatomic) UILabel *useMusicButtonLabel;
@property (retain, nonatomic) UIView *playButton;
@property (retain, nonatomic) UIImageView *playView;
@property (retain, nonatomic) UILabel *playButtonLabel;
@property (retain, nonatomic) UIImageView *playButtonPlayImage;
@property (retain, nonatomic) UIImageView *playButtonPauseImage;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIVisualEffectView *pauseBlurView;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL darkMode;
@property (weak, nonatomic) id<AWESearchMusicRecommendedVideoViewDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *logExtraDict;
@property (retain, nonatomic) NSString *referString;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *playMusicTitle;
@property (copy, nonatomic) NSString *useMusicTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)musicInfoViewHeight;
+ (long long)musicVideoViewStyle;

- (void)videoResourceDidRecallInPlayer:(id)a0;
- (BOOL)shouldReponseToVideoRecallInPlayer:(id)a0;
- (void)updateUITheme:(BOOL)a0;
- (long long)getScaleModelWithAwemodel:(id)a0;
- (id)timeString:(double)a0;
- (void)showInvalidVideoSourceView;
- (void)hideInvalidVideoSourceView;
- (void)removePlayerContainer;
- (void)videoResourceDidRecallInVideoController:(id)a0;
- (void)didBeSelected;
- (id)getAccessibilityElements;
- (void)setControlViewToNotPlaying;
- (void)setPlayProgressTohead;
- (void)updateWithModel:(id)a0 playerContainer:(id)a1;
- (void)setBackgroundViewHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)addPlayerController;
- (void)handlePlayerBtn;
- (void)buttonTransformToStopStateWithAnimation:(BOOL)a0;
- (void)cleanPlayerController:(id)a0;
- (void)updatePlayerContextWithModel:(id)a0;
- (void)updateNormalDataWithModel:(id)a0;
- (void)buttonTransformToPlayStateWithAnimation:(BOOL)a0;
- (void)updatePlayerDataWithModel:(id)a0;
- (void)targetView:(id)a0 shouldShow:(BOOL)a1 animated:(BOOL)a2;
- (void)useMusic;
- (void)updatePausedViewWithModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (id)transitionContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTitleLabel;
- (void)updateWithModel:(id)a0;

@end
