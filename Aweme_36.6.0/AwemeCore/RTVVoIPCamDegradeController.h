@class NSMutableDictionary, RxScheduler, NSString, RTVVoipSession, NSNumber;
@protocol RTVVoipContextManagerInterface, RTVXRSettingsInterface, RTVXREngine, RTVXRControllerInjector, RTVVoipSettingManagerInterface, RTVComposerBeautyPannelWrapperInterface;

@interface RTVVoIPCamDegradeController : NSObject <RTVVoIPCamDegradeControllerProtocol, RTVVoipObserver, RTVXRControllerInterface> {
    NSNumber *_degradeStrategy;
    NSNumber *_enableDegrade;
}

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *session;
@property (readonly, weak, nonatomic) id<RTVXREngine> engine;
@property (readonly, weak, nonatomic) id<RTVComposerBeautyPannelWrapperInterface> beautyPanel;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) NSMutableDictionary *muteMap;
@property (readonly, nonatomic) unsigned long long degradeStrategy;
@property (readonly, nonatomic) BOOL enableDegrade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)voipService:(id)a0 voip:(id)a1 didSwitchNarrow:(BOOL)a2;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (BOOL)shouldToggleCameraOffWhenFold;
- (void)renderBeautyPanel:(id)a0;
- (void)displayUserIdentifier:(id)a0;
- (void)resumeAllVideoStreamIfNeed;
- (unsigned long long)__degradeStrategy;
- (unsigned long long)__degradeStrategyForPad;
- (unsigned long long)__degradeStrategyForPhone;
- (void)__updateCaptureSessionPreset:(id)a0;
- (void)__updateRTCExtInfo;
- (void)__degrade;
- (void)__upgrade;
- (void).cxx_destruct;

@end
