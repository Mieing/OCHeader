@class IESLiveAnchorStableModePushStrategy, HTSLiveToolbarItem, IESLiveAnchorStableModeEffectStrategy, IESLiveAnchorStableModeCommonStrategy, NSString;
@protocol IESLivePerfSampler;

@interface IESLiveAnchorStableModeFragment : IESLiveRoomComponent <IESLiveAnchorStableModeService>

@property (retain, nonatomic) HTSLiveToolbarItem *stableModeToolBarItem;
@property (nonatomic) BOOL hasStableModePushShowedBefore;
@property (retain, nonatomic) IESLiveAnchorStableModePushStrategy *pushStrategy;
@property (retain, nonatomic) IESLiveAnchorStableModeEffectStrategy *effectStrategy;
@property (retain, nonatomic) IESLiveAnchorStableModeCommonStrategy *commonStrategy;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) long long currentStableModeLevel;
@property (nonatomic) BOOL isStableModeAutoEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDestroy;
- (void)updateStableModeStatus:(BOOL)a0;
- (void)startStableMode;
- (void)stopStableMode:(BOOL)a0;
- (void)clickPushViewWithType:(long long)a0;
- (BOOL)isStableModelLevel:(long long)a0;
- (BOOL)isRestartLevel:(long long)a0;
- (BOOL)isVideoLive;
- (void)onDecisionLevelUpdated:(long long)a0;
- (void)pauseIM;
- (void)loadStableModeToolBarItem;
- (void)resumeIM;
- (void)forceResumeIM;
- (void)openStableModePanel:(id)a0;
- (void)trackStableModeItemClick;
- (void)trackStableModeSwitchButtonClickedWithEnable:(BOOL)a0;
- (void)trackPushClickedWithFactor:(id)a0 sourceType:(id)a1;
- (BOOL)isEnableIMPause;
- (void).cxx_destruct;
- (void)dealloc;

@end
