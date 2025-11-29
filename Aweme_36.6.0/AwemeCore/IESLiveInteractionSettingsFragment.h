@class IESLiveInteractionSettings, NSString, IESliveAudienceInteractPanelManager, HTSLiveAnnounceInfo;
@protocol IESLiveSocialInteractiveRouter;

@interface IESLiveInteractionSettingsFragment : IESLiveRoomComponent <IESLiveInteractionSettingsAdapter, IESLiveAudienceInteractiveSettingsAction, IESLiveSocialInteractPreLoadExAction, HTSLiveMessageSubscriber>

@property (weak, nonatomic) id<IESLiveSocialInteractiveRouter> socialRouter;
@property (retain, nonatomic) HTSLiveAnnounceInfo *announceInfo;
@property (weak, nonatomic) IESliveAudienceInteractPanelManager *panelManager;
@property (retain, nonatomic) IESLiveInteractionSettings *interactionSettings;
@property (nonatomic) BOOL hasSettingsPanelRedDot;
@property (copy, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (id)strWithLayout:(int)a0;
- (void)fetchAudienceInteractiveSettingsWithCompletion:(id /* block */)a0 isLocalData:(BOOL)a1;
- (void)updateAudienceInteractiveSettingType:(unsigned long long)a0 on:(BOOL)a1 completion:(id /* block */)a2;
- (void)injectPanelManager:(id)a0;
- (void)popUpSettingsPanelWithSource:(id)a0;
- (void)handleLockPositionFromSettingsPanelWithValue:(BOOL)a0 completion:(id /* block */)a1;
- (id)buildVideoPreviewModeSwitchSceneSettingData;
- (id)buildVideoSwitchSceneSettingData;
- (id)buildAudioSwitchSceneSettingData;
- (void)onClickBigPartyConfigurationToSwitchToScene:(unsigned long long)a0 isDynamic:(BOOL)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
