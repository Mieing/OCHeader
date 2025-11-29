@class AWEPlayInteractionMusicInfoElementViewModel, NSString, AWEAwemeMusicInfoView, AWEPlayInteractionAITextEntranceView;

@interface AWEPlayInteractionMusicInfoElement : AWEPlayInteractionLeftElement <AWEAwemeMusicInfoViewDelegate, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEPlayInteractionMusicInfoElementViewModel *viewModel;
@property (nonatomic) double bottomOffset;
@property (retain, nonatomic) AWEPlayInteractionAITextEntranceView *aiTextEntranceView;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) double clickTime;
@property (retain, nonatomic) AWEAwemeMusicInfoView *musicInfoView;
@property (retain, nonatomic) NSString *musicLabelString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (Class)aAWEPlayInteractionDSAdapterClass;
+ (BOOL)p_shouldShowLunaAnchorWithModel:(id)a0;
+ (BOOL)_shouldMusicInfoActiveWithData:(id)a0 context:(id)a1;
+ (BOOL)shouldHideMusicInfoWithAwemeModel:(id)a0 context:(id)a1;
+ (BOOL)shouldMusicInfoActiveWithData:(id)a0 context:(id)a1;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)setAppear:(BOOL)a0;
- (void)videoPlayerWillTrackPlayTime;
- (void)enterMusicDetail:(id)a0;
- (void)handleElementWhenPriorityAvoid:(id)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (void)updateMusicInfoView;
- (void)p_layoutMusicInfoViewWithModel:(id)a0;
- (id)currentInfoForSubUnits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realFrame;
- (id)aAWEPlayInteractionDSAdapter;
- (BOOL)karaokeDuetSingEnabled;
- (void)musicInfoView:(id)a0 didClickMeetMusicView:(id)a1;
- (void)musicInfoView:(id)a0 didClickFollowShootAnchor:(id)a1;
- (void)musicInfoView:(id)a0 didClickMusicButton:(id)a1;
- (void)musicInfoView:(id)a0 didClickKaraokeButton:(id)a1;
- (void)musicInfoView:(id)a0 enterMusicDetail:(id)a1;
- (void)onAITextEntranceViewClicked:(id)a0;
- (void)playMusicAnimationsAfterFeedReadyDelay;
- (void)doPlayMusicAnimations;
- (void)performPause;
- (BOOL)bizDowngradeMusicAnimations;
- (BOOL)musicTrackAlertIfNotValid;
- (double)p_musicInfoViewHeight;
- (void)musicInfoShowTrackWithModel:(id)a0;
- (void)trackTickerEntranceShow;
- (void)trackTickerEntranceStayTime;
- (BOOL)canPlayMusicAnimation;
- (BOOL)musicIsOriginal;
- (BOOL)hasTranscribeText:(id)a0;
- (void)enterMusicDetailWithTrackerDict:(id)a0;
- (void)trackTickerEntranceClickWithEnterMethod:(id)a0;
- (void)trackTickerEntranceClickWithIconClick;
- (id)currentRelatedController;
- (void).cxx_destruct;
- (void)pause;
- (void)reset;
- (void)resume;
- (void)viewDidLoad;
- (id)currentInfo;

@end
