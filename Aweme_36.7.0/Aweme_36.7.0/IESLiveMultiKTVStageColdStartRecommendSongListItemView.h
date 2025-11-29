@class IESLiveKTVMusicManager, IESLiveKtvSongStruct, UIImageView, NSString, UILabel, UIView, UIButton;
@protocol IESLiveCompoundSubscription, IESLiveWebPPlayer;

@interface IESLiveMultiKTVStageColdStartRecommendSongListItemView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *musicPlayingAnimationIcon;
@property (retain, nonatomic) UIView *titleAnimationLabelContainer;
@property (retain, nonatomic) UIView *titleLabelContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleAnimationLabel;
@property (retain, nonatomic) UILabel *singerNameLabel;
@property (retain, nonatomic) UIButton *orderSongBtn;
@property (nonatomic) BOOL isMusicPlaying;
@property (nonatomic) float progress;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> compoundDisposable;
@property (weak, nonatomic) IESLiveKTVMusicManager *musicManager;
@property (nonatomic) BOOL allowLinearAnimating;
@property (nonatomic) BOOL isInLinearAnimating;
@property (copy, nonatomic) id /* block */ clickOrderSongBtnCallback;
@property (retain, nonatomic) IESLiveKtvSongStruct *musicModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_makeConstraints;
- (void)p_setupSubviews;
- (void)startLinearAnimation;
- (void)setMusicIsOrder:(BOOL)a0;
- (void)p_renderProgress:(id)a0;
- (void)p_remakeLabelWidth;
- (void)p_clickOrderSongBtn;
- (id)getSongItem:(id)a0;
- (id)initWithKTVMusicManager:(id)a0 diContext:(id)a1;
- (void)updateUIWithMusicModel:(id)a0;
- (void)p_setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (void)updateMusicPlaying:(BOOL)a0;
- (void)activateDynamicKTVConstraints;
- (void)activatePartyKTVLayout;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;

@end
