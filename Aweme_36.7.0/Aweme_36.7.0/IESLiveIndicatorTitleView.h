@class HTSLivePaddingLabel, UIImageView, NSTimer, UILabel;
@protocol IESLiveIndicatorTitleViewDelegate, IESLiveKTVSongIndicatorViewModelProtocol;

@interface IESLiveIndicatorTitleView : UIView

@property (nonatomic) BOOL isShowingForTime;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleFixLabel;
@property (retain, nonatomic) HTSLivePaddingLabel *statusLabel;
@property (retain, nonatomic) HTSLivePaddingLabel *statusFixLabel;
@property (retain, nonatomic) UIImageView *statusIconView;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) HTSLivePaddingLabel *tipLabel;
@property (weak, nonatomic) id<IESLiveKTVSongIndicatorViewModelProtocol> viewModel;
@property (nonatomic) BOOL shouldKeepShowTitle;
@property (nonatomic) BOOL isShowingTitle;
@property (nonatomic) BOOL hasShowMusicInfo;
@property (weak, nonatomic) id<IESLiveIndicatorTitleViewDelegate> delegate;

- (void)showTip:(id)a0;
- (void)p_layoutLabels;
- (void)p_addWaitingTimeObserver;
- (void)showMusicInfo;
- (BOOL)p_isFirstOpenMixKTV;
- (void)p_showTitle:(id)a0;
- (void)processHighScoreWithTipStr:(id)a0 avatarURL:(id)a1;
- (void)onWaiting:(id)a0;
- (void)p_updateLabelsOnTimerCounting:(long long)a0;
- (void)p_showTitle:(id)a0 status:(id)a1;
- (void)didBindMultiKTV;
- (void)onPlaying:(BOOL)a0;
- (void)onLyricShow;
- (void)showTipIfNeed;
- (void)showTitle:(id)a0 forTime:(long long)a1 completion:(id /* block */)a2;
- (void)startWaitingTimer:(long long)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)remove;
- (void)clear;
- (id)initWithViewModel:(id)a0;
- (void)hide;

@end
