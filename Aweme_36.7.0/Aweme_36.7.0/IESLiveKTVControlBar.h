@class IESLiveKTVBarButton, UIView, IESLiveKTVControlStore, IESLiveKTVControlVideoChorusInfoView, NSString, UIImageView, IESLiveKTVMultiChorusInfoView, IESLiveKTVMultiChorusButton, UILabel;
@protocol IESLiveCompoundSubscription, IESLiveVideoChorusService, IESLiveKTVControlBarDelegate, IESLiveKTVControlActions;

@interface IESLiveKTVControlBar : UIView <IESLiveKTVMultiChorusActions, IESLiveInteractionLinkerServiceAction>

@property (retain, nonatomic) IESLiveKTVControlStore *store;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLiveKTVBarButton *tuningButton;
@property (retain, nonatomic) IESLiveKTVBarButton *playButton;
@property (retain, nonatomic) IESLiveKTVBarButton *nextButton;
@property (retain, nonatomic) IESLiveKTVBarButton *originalButton;
@property (retain, nonatomic) IESLiveKTVBarButton *scoreButton;
@property (retain, nonatomic) IESLiveKTVBarButton *challengeButton;
@property (retain, nonatomic) IESLiveKTVBarButton *exitButton;
@property (retain, nonatomic) IESLiveKTVBarButton *silenceButton;
@property (retain, nonatomic) IESLiveKTVMultiChorusButton *multiChorusButton;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) UIView *musicInfoView;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *coverTimeLablel;
@property (retain, nonatomic) UILabel *musicTitle;
@property (retain, nonatomic) UIImageView *singerAvatar;
@property (retain, nonatomic) UILabel *singerLabel;
@property (retain, nonatomic) IESLiveKTVMultiChorusInfoView *multiChorusInfoView;
@property (retain, nonatomic) IESLiveKTVControlVideoChorusInfoView *videoChorusInfoView;
@property (retain, nonatomic) UILabel *chorusLabel;
@property (retain, nonatomic) id<IESLiveKTVControlActions> actionsCreator;
@property (nonatomic) BOOL isOrderPanel;
@property (retain, nonatomic) UIImageView *scoreYellowDot;
@property (retain, nonatomic) UIView *challengeYellowDot;
@property (weak, nonatomic) id<IESLiveVideoChorusService> videoChorusService;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> mixDisposable;
@property (weak, nonatomic) id<IESLiveKTVControlBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)p_setupObservers;
- (void)interactionLinkerService:(id)a0 muteStateDidChange:(BOOL)a1 reason:(id)a2;
- (void)tr_clickedControlEvent:(id)a0;
- (id)commonStore;
- (void)didJoinMultiChorusForMusicModel:(id)a0;
- (void)didLeaveMultiChorusForMusicModel:(id)a0;
- (void)updateCurrentPlayTime:(double)a0;
- (void)p_setupMixUIs;
- (void)p_setupIndicatorUIs;
- (void)p_setupMixObservers;
- (void)p_renderMix;
- (void)trackChallengeEntranceShow;
- (void)addChallengeObservers;
- (BOOL)isCurrentPlayingMusic:(id)a0;
- (void)refreshMixUI;
- (id)createScoreYellowDot;
- (BOOL)shouldShowChallengeEntrance;
- (void)tr_clickedScoreEvent;
- (void)tr_clickedExitEvent;
- (void)tr_clickChorusButtonWithJoined:(BOOL)a0;
- (id)initWithStore:(id)a0 isOrderPanel:(BOOL)a1;
- (void)willShowControlBar;
- (void).cxx_destruct;
- (void)dealloc;

@end
