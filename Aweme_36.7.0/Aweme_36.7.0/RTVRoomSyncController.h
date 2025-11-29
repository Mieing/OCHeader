@class NSString, NSMutableDictionary, RTVVoipSession, NSMutableArray;
@protocol RxInjector, RTVXRRoomMessageSender, RTVXRControllerInjector, RTVVoipManagerInterface, RTVSettingsManager, RTVXRCaptureController, RTVUserProfileManagerInterface, RTVDynamicResolutionManagerInterface, RTVVoipQosMonitorController;

@interface RTVRoomSyncController : NSObject <RTVXRRoomMessageSenderObserver, RTVXRRoomSessionControllerObserver, RTVXRCaptureControllerObserver, RTVRoomSyncController>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, weak, nonatomic) RTVVoipSession *roomController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (weak, nonatomic) id<RTVVoipQosMonitorController> qosMonitorController;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) id<RTVDynamicResolutionManagerInterface> dynamicResolutionManager;
@property (retain, nonatomic) NSMutableDictionary *hasSendActions;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (copy, nonatomic) NSString *othersMaxVersion;
@property (nonatomic) BOOL syncToRemoteRunning;
@property (nonatomic) BOOL isPullRunning;
@property (nonatomic) BOOL shouldSyncRoomVersionUpdate;
@property (nonatomic) BOOL shouldHandleRemoteRoomInfoUpdateMessage;
@property (nonatomic) BOOL shouldSendRoomUpdateAction;
@property (nonatomic) BOOL shouldHandleRoomUpdateAction;
@property (nonatomic) double delayForSyncToRemote;
@property (nonatomic) double delayForHandleRemoteRoomUpdate;
@property (retain, nonatomic) NSMutableArray *rtmMessageListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (BOOL)registerRTMMessageListener:(id)a0;
- (BOOL)unRegisterRTMMessageListener:(id)a0;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)__log:(id)a0;
- (void)voipSessionVoipInfoPrepareReady:(id)a0;
- (void)rtvSession:(id)a0 roomVersionDidChangeTo:(id)a1;
- (void)messageSender:(id)a0 didReceiveMessage:(id)a1;
- (void)sendKefuGuideWithMessage:(id)a0;
- (void)sendDynamicResolutionMessageWithOptionType:(long long)a0 extra:(id)a1;
- (void)syncSelfLocalInfo;
- (void)notifyRoomUpdateAction:(long long)a0;
- (void)notifyRoomUpdateAction:(long long)a0 ext:(id)a1;
- (void)sendAudioInterruptedMessage:(long long)a0 type:(long long)a1;
- (void)__sendAction:(long long)a0;
- (void)__sendDynamicResolutionCommand:(id)a0;
- (void)__sendKefuGuideCommand:(id)a0;
- (void)__sendAudioInterruptedCommand:(id)a0;
- (id)__selfUserID;
- (void)__sendSyncCommand:(id)a0;
- (void)__syncSelfLocalInfoWithNeedRequest:(BOOL)a0;
- (void)__handleDynamicResolutionOptMessage:(id)a0;
- (void)__handleOutListenerMessage:(id)a0;
- (void)__handleRoomSyncMessage:(id)a0;
- (void)__receiveBasicInfo:(id)a0 andRemoteRequestData:(id)a1;
- (void)__receiveAction:(id)a0 andRemoteRequestData:(id)a1 command:(id)a2;
- (void)__receiveRoomInfo:(id)a0 andRemoteRequestData:(id)a1;
- (void)__handleReceiveRoomSyncBasicInfo:(id)a0;
- (void)__handleReceiveCalleeAcceptCompensate:(id)a0;
- (void)__handleReceiveCallerCancelCommand:(id)a0;
- (BOOL)__isVersion:(id)a0 greaterThanAnotherVersion:(id)a1;
- (void).cxx_destruct;
- (void)sendAction:(long long)a0;
- (void)dealloc;

@end
