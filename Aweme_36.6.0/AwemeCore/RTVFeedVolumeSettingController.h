@class UIViewController, RTVInteractionVolumeSettingViewController, MPVolumeView, NSString, RTVFeedTracker;
@protocol RTVFeedSessionInterface, RTVXRRoomSessionControllerInterface, RTVXRSettingsInterface, RTVXRControllerInjector, RTVStorageArea, RTVFeedContentController, RTVSystemVolumeNotificationDispatcherProtocol, RTVSettingsManager, RTVInteractionConfigureManagerInterface, RTVFeedConfigureManagerInterface, RTVVoipContextManagerInterface;

@interface RTVFeedVolumeSettingController : NSObject <RTVInteractionVolumeSettingViewControllerDelegate, RTVXRRoomSessionControllerObserver, RTVSystemVolumeChangeObserver, RTVFeedVolumeSettingController>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVFeedSessionInterface> feedSession;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVFeedConfigureManagerInterface> feedConfigureManager;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, nonatomic) id<RTVStorageArea> storageArea;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (weak, nonatomic) UIViewController<RTVFeedContentController> *contentController;
@property (retain, nonatomic) RTVInteractionVolumeSettingViewController *volumeSettingViewController;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (readonly, nonatomic) RTVFeedTracker *tracker;
@property (retain, nonatomic) MPVolumeView *volumeView;
@property (nonatomic) float videoVolumeTransformRatio;
@property (readonly, nonatomic) id<RTVSystemVolumeNotificationDispatcherProtocol> volumeNotificationDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)showVolumeAdjustmentPanel;
- (void)showVolumeAdjustmentTipBubbleIfNeeded;
- (void)refreshVolumePanelIfNeed;
- (id)currentVideoPlayVolume;
- (id)currentVoiceVolume;
- (id)updateVideoVolumeTransformRatio:(float)a0;
- (void)rtvSession:(id)a0 stateMachineDidChangeTo:(long long)a1 fromState:(long long)a2;
- (void)systemVolumeChangeFrom:(double)a0 toValue:(double)a1;
- (void)__showVolumeAdjustTipIfNeeded;
- (BOOL)__todayHasShownVolumeSettingTip;
- (void)__postShowBubbleTipsNotification;
- (void)interactionVolumeSettingViewController:(id)a0 interactionVolumeDidChanged:(float)a1;
- (void)interactionVolumeSettingViewController:(id)a0 voipVoiceVolumeDidChanged:(float)a1;
- (id)currentInteractionVolume;
- (void)feedVolumeSettingViewControllerWillDismiss:(id)a0;
- (id)__originVideoVolume;
- (long long)__volumeSettingTipShownTimes;
- (id)updateVideoPlayVolume:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
