@class NSString;
@protocol RTVUserProfileManagerInterface, RTVXRInteractionController, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector, RTVInteractionConfigureManagerInterface;

@interface __RTVEffectGameInteractionControlViewConfigureController : NSObject <RTVInteractionControlViewConfigurationController>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVXRInteractionController> xrinteractionController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> configManager;
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
- (BOOL)shouldShowInviteButton;
- (BOOL)noNeedRefreshContents;
- (BOOL)backButtonTypeFixedWithBackFuncAndCloseImg;
- (id)toolBarViewControllerKey;
- (void).cxx_destruct;

@end
