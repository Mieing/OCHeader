@class NSString;
@protocol RxInjector, RTVFeedSessionInterface, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVXRInteractionController, RTVInteractionConfigureManagerInterface, RTVSettingsManager, RTVUserProfileManagerInterface, RTVFeedConfigureManagerInterface;

@interface __RTVVoipFeedInteractionControlViewConfiguration : NSObject <RTVCompactStateMachineDelegate, RTVInteractionControlViewConfigurationController, RTVXRControllerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> interactionController;
@property (readonly, weak, nonatomic) id<RTVFeedConfigureManagerInterface> feedConfigureManager;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVFeedSessionInterface> feedSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (BOOL)enableVolumeSetting;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (BOOL)enableTextChat;
- (BOOL)needCloseButtonOnTopLeftOfInteractionType:(unsigned long long)a0;
- (BOOL)needParticipantJoinWaitingHint;
- (BOOL)shouldShowInviteButton;
- (BOOL)noNeedRefreshContents;
- (BOOL)backButtonTypeFixedWithBackFuncAndCloseImg;
- (id)toolBarViewControllerKey;
- (id)extraInfoView;
- (void)__createDependencies;
- (BOOL)__needCloseButtonOnTopLeftOfInteractionType:(unsigned long long)a0;
- (BOOL)__isSelfOwnerOfInteractionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)shouldShowShareButton;

@end
