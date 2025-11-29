@class NSString, MMUIActivityIndicatorView, UIImageView, MMUIView, UIView, MMFinderLiveKTVTrialListenManageLogic, PAGView;

@interface MMFinderLiveKTVSongRequestCell : MMFinderLiveKTVSongTableViewCell <MMFinderLiveKTVTrialListenManageExt>

@property (retain, nonatomic) MMUIView *tapView;
@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) UIImageView *playIconView;
@property (readonly, nonatomic) MMFinderLiveKTVTrialListenManageLogic *trialListenManageLogic;
@property (retain, nonatomic) MMUIActivityIndicatorView *trialPrepareLoadingView;
@property (retain, nonatomic) PAGView *trialPlayingAniView;
@property (nonatomic) long long currTrialProcessState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)commonInit;
- (void)dealloc;
- (void)customLayoutUI;
- (void)checkStates;
- (void)playTrialAnimation;
- (void)stopTrialAnimation;
- (BOOL)updateTrialProcessState:(long long)a0;
- (void)refreshUIForProcessState;
- (BOOL)isTrialPlayIconVisible;
- (void)onSongContentTap;
- (void)prepareForReuse;
- (void)onLiveKTVTrialListenProcessStateChanged:(long long)a0 song:(id)a1 taskId:(id)a2;
- (void).cxx_destruct;

@end
