@class IESLiveKTVComponentContext, NSString, HTSLiveChorusUserChangedContent, IESLiveKTVCommonStore, HTSEventForwardingView, IESLivePartyKTVControlBar, IESLivePartyKTVStatusBar;
@protocol IESLivePartyKTVChorusRouter;

@interface IESLiveKTVControlBarComponent : IESLiveInteractComponentBase <IESLivePartyKTVDelegate, IESLiveKTVActions, HTSLiveMessageSubscriber, IESLiveKTVGroupLiveChorusAction>

@property (weak, nonatomic) IESLiveKTVComponentContext *ktvContext;
@property (weak, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (retain, nonatomic) IESLivePartyKTVControlBar *controlBar;
@property (retain, nonatomic) HTSEventForwardingView *container;
@property (weak, nonatomic) id<IESLivePartyKTVChorusRouter> partyKTVChorusRouter;
@property (nonatomic) double lastMicClickTime;
@property (retain, nonatomic) IESLivePartyKTVStatusBar *statusBar;
@property (copy, nonatomic) NSString *lastSongName;
@property (copy, nonatomic) NSString *lastSongIdStr;
@property (nonatomic) int maxNumber;
@property (retain, nonatomic) NSString *poepleNumberColor;
@property (nonatomic) unsigned long long currentRoleType;
@property (retain, nonatomic) HTSLiveChorusUserChangedContent *chorusContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)didSetAttachingDIContext;
- (void)setupObserver;
- (void)showRedDotIfNeeded;
- (void)didKTVOrderListChanged;
- (void)didKTVIMOrderListChanged;
- (void)didUpdateKTVStageState:(unsigned long long)a0;
- (void)toggleJoinPartyKTVChorusAction;
- (void)showToolTipIfNeeded;
- (void)didAcceptJoinGroupKTVChorus;
- (void)updateChorusRoleType:(unsigned long long)a0;
- (void)trackUpdateRoleType:(unsigned long long)a0;
- (long long)currentSongId;
- (void)trackStatusBarShow:(int)a0;
- (void)didClickJoinPartyKTVChorus;
- (void)trackChorusJoinIconClickWithType:(id)a0;
- (void)trackStatusBarClicked;
- (void)didClickLeavePartyKTVChorus;
- (void)showKTVOrderPanel;
- (void)showKTVTuningPanel;
- (void)updateAnchorMicState;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)currentTitle;
- (void)setupView;
- (void)messageReceived:(id)a0;
- (void)updateProgress:(float)a0;

@end
