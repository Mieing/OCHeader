@class NSString, NSDictionary, IESLiveGCDTimer, IESLivePlaybackResolutionLiveItem, IESLivePlaybackFreeTrialToastView, PrivilegeInfo;

@interface IESLivePlaybackVSPrivilegeFragment : IESLivePlaybackComponent <IESLivePlaybackVSPrivilegeProvider, IESVSVideoPlayAction, IESLivePlaybackChangeStreamAction>

@property (retain, nonatomic) PrivilegeInfo *resolutionPrivilegeInfo;
@property (copy, nonatomic) NSDictionary *resolutionPrivilegeInfoExtra;
@property (nonatomic) BOOL firstFrameLoaded;
@property (retain, nonatomic) IESLivePlaybackFreeTrialToastView *freeTrialToastView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL toastViewShowing;
@property (retain, nonatomic) IESLivePlaybackResolutionLiveItem *lastResolution;
@property (copy, nonatomic) id /* block */ showResolutionPrivilegeGuidanceBlock;
@property (copy, nonatomic) NSString *VSPrivilegeResolutionShowingName;
@property (nonatomic) BOOL payCardViewShowing;
@property (copy, nonatomic) NSString *currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoProgressUpdate:(double)a0 duration:(double)a1;
- (void)streamChangedWithEpisode:(id)a0;
- (void)gotoPurchaseWithPrivilegeInfo:(id)a0;
- (void)didPaiedForVSPrivilege;
- (void)showResolutionPrivilegeGuidanceIfNeeded;
- (void)showResolutionPrivilegeGuidance;
- (void)showResolutionPrivilegeTrialGuidanceWithResolutionItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)showResolutionPrivilegeSwitchGuidanceWithResolutionItem:(id)a0;
- (void)trackResolutionBuyModuleClickWithTicketEntrance:(id)a0;
- (void)hideVSPrivilegeGuidanceToastViewNeedsTrack:(BOOL)a0;
- (void)trackResolutionBuyModuleShowWithTicketEntrance:(id)a0;
- (void)hideVSPrivilegeGuidancePayCardViewNeedsTrack:(BOOL)a0;
- (void)showVSPrivilegePayGuideViewWithState:(id)a0;
- (void)trackResolutionBuyModuleCloseWithTicketEntrance:(id)a0;
- (id)VSPrivilegeCommonParameters;
- (void).cxx_destruct;

@end
