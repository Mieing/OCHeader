@class RTVVoipTracker, RTVVoipSession, NSString;
@protocol RTVVoipConfigureManagerInterface, RTVStateMachineInterface, RxInjector, RTVXRControllerInjector, RTVVoipSettingManagerInterface, RTVRoomSyncController;

@interface RTVDynamicResolutionManager : NSObject <RTVXRControllerInterface, RTVVoipSessionObserver, RTVDynamicResolutionManagerInterface>

@property (nonatomic) struct CGSize { double width; double height; } degradeResolutionSize;
@property (nonatomic) unsigned long long degradeFPS;
@property (nonatomic) unsigned long long degradeBitRate;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (weak, nonatomic) id<RTVRoomSyncController> roomSyncController;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (nonatomic) unsigned long long currentStatus;
@property (retain, nonatomic) id<RTVStateMachineInterface> stateMachine;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } originResolutionSize;
@property (nonatomic) unsigned long long originFPS;
@property (nonatomic) unsigned long long originBitRate;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (BOOL)voipViewIsNarrowVisible;
- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)addNotification;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (void)onVoipStatusOnthecallOrAccepted;
- (void)onRtvWindowFold;
- (void)onRtvWindowUnfold;
- (void)onOtherRtvWindowFold;
- (void)onOtherRtvWindowUnFold;
- (void)onVideoChangeToShareFeed;
- (void)onShareFeedChangeToVideo;
- (void)onReceiveCommandMessage:(id)a0;
- (void)turnOnCurrentResolutionStatus:(unsigned long long)a0;
- (void)turnOffCurrentResolutionStatus:(unsigned long long)a0;
- (void)onAppDidEnterBackgroundProtectedDataWillBecomeUnavailable;
- (void)onAppDidEnterBackgroundProtectedDataDidBecomeAvailable;
- (void)__muteLocalVideoStream;
- (void)__muteRemoteVideoStream;
- (void)__unmuteLocalVideoStream;
- (void)__unmuteRemoteVideoStream;
- (void)__notifyPeerReduceDynamicResolutionIfNeed;
- (void)__notifyPeerRecoverDynamicResolutionIfNeed;
- (void)__notifyPeerMyDefaultDynamicResolutionIfNeed;
- (BOOL)__enableRoomResolutionV5Opt;
- (BOOL)__enableRoomResolutionV3Opt;
- (void)__handleOldResolutionStatus:(unsigned long long)a0 changeTo:(unsigned long long)a1;
- (BOOL)__enableRoomResolutionV2Opt;
- (BOOL)__enableRoomResolutionOpt;
- (BOOL)__enableRoomSyncDefaultResolutionOpt;
- (BOOL)__enableRoomResolutionV4Opt;
- (void).cxx_destruct;
- (id)voip;

@end
