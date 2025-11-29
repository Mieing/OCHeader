@class UIImageView, NSString, NSDictionary, HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality, IESLiveFreeTrialToastView, IESLiveGCDTimer, PrivilegeInfo;
@protocol IESLiveWebPPlayer;

@interface IESLiveVSPrivilegeFragment : IESLiveRoomComponent <IESLiveVSPrivilegeProvider, HTSLiveStreamPlayerAction>

@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality *lastResolution;
@property (retain, nonatomic) IESLiveFreeTrialToastView *toastView;
@property (nonatomic) BOOL toastViewShowing;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL payCardViewShowing;
@property (nonatomic) BOOL firstFrameLoaded;
@property (nonatomic) BOOL allComponentsLoaded;
@property (retain, nonatomic) PrivilegeInfo *resolutionPrivilegeInfo;
@property (copy, nonatomic) NSDictionary *resolutionPrivilegeInfoExtra;
@property (copy, nonatomic) NSString *VSPrivilegeResolutionShowingName;
@property (copy, nonatomic) id /* block */ showResolutionPrivilegeGuidanceBlock;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationImageView;
@property (copy, nonatomic) NSString *currentGuidanceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)appearDidFinishForLevel:(long long)a0;
- (void)streamPlayerDidReadyToRender;
- (void)onCameraWillChangeTo:(id)a0 source:(long long)a1;
- (id)resolutionVSPrivilegeInfo;
- (id)VSPrivilegeResolutionSDKKey;
- (void)didClickWithResolutionItems:(id)a0 atIndex:(unsigned long long)a1;
- (void)didChangeStreamResolution;
- (void)gotoPurchaseWithPrivilegeInfo:(id)a0 ticketEntrance:(id)a1;
- (BOOL)purchasedPrivilegeForType:(int)a0;
- (void)showResolutionPrivilegeGuidanceIfNeeded;
- (void)showResolutionPrivilegeGuidance;
- (void)trackResolutionBuyModuleClickWithTicketEntrance:(id)a0;
- (void)hideVSPrivilegeGuidanceToastViewNeedsTrack:(BOOL)a0;
- (void)trackResolutionBuyModuleShowWithTicketEntrance:(id)a0;
- (void)hideVSPrivilegeGuidancePayCardViewNeedsTrack:(BOOL)a0;
- (void)showVSPrivilegePayGuideViewWithState:(id)a0;
- (void)trackResolutionBuyModuleCloseWithTicketEntrance:(id)a0;
- (id)VSPrivilegeCommonParameters;
- (BOOL)hasPrivilegeForRoom;
- (void)showResolutionPrivilegeTrialGuidanceWithQualityInfo:(id)a0 atIndex:(unsigned long long)a1;
- (void)showResolutionPrivilegeSwitchGuidanceWithQualityInfo:(id)a0;
- (BOOL)permissionChangedWithNewPermission:(long long)a0;
- (void)degradeResolutionIfNeededWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
