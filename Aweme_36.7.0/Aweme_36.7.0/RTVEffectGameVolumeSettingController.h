@class NSString, RTVInteractionVolumeSettingViewController;
@protocol RTVSystemVolumeNotificationDispatcherProtocol, RTVXREngine, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVStorageArea, RTVEffectGameContentBEFWrapper, RTVInteractionConfigureManagerInterface, RTVVoipContextManagerInterface;

@interface RTVEffectGameVolumeSettingController : NSObject <RTVInteractionVolumeSettingViewControllerDelegate, RTVXRRoomSessionControllerObserver, RTVSystemVolumeChangeObserver, RTVEffectGameVolumeSettingControllerInterface>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVEffectGameContentBEFWrapper> befWrapper;
@property (readonly, weak, nonatomic) id<RTVXREngine> xrEngine;
@property (readonly, nonatomic) id<RTVStorageArea> storageArea;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (retain, nonatomic) RTVInteractionVolumeSettingViewController *volumeSettingViewController;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVSystemVolumeNotificationDispatcherProtocol> volumeNotificationDispatcher;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)currentVoiceVolume;
- (void)rtvSession:(id)a0 stateMachineDidChangeTo:(long long)a1 fromState:(long long)a2;
- (void)systemVolumeChangeFrom:(double)a0 toValue:(double)a1;
- (void)showVolumeAdjustmentPanelOnVC:(id)a0;
- (id)currentGameVolume;
- (void)__showVolumeAdjustTipIfNeeded;
- (BOOL)__todayHasShownVolumeSettingTip;
- (void)__postShowBubbleTipsNotification;
- (void)interactionVolumeSettingViewController:(id)a0 interactionVolumeDidChanged:(float)a1;
- (void)interactionVolumeSettingViewController:(id)a0 voipVoiceVolumeDidChanged:(float)a1;
- (id)currentInteractionVolume;
- (void).cxx_destruct;

@end
