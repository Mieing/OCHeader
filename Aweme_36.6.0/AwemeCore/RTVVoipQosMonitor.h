@class NSString;
@protocol RTVUserProfileManagerInterface, RTVRoomSyncController, RTVQosMonitorV2Protocol, RTVXRRoomSessionControllerInterface, RxInjector, RTVXRControllerInjector, RTVVoipSettingManagerInterface;

@interface RTVVoipQosMonitor : NSObject <RTVXRRoomSessionControllerObserver, RTVXREngineDelegate, RTVVoipQosMonitorController>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (weak, nonatomic) id<RTVRoomSyncController> roomSyncController;
@property (retain, nonatomic) id<RTVQosMonitorV2Protocol> monitor;
@property (nonatomic) BOOL noFirstFrameRenderCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)markNoFirstFrameVideoCallback;
- (void)__log:(id)a0;
- (void)rtvSession:(id)a0 contextKeyPathChange:(id)a1 fromValue:(id)a2 toValue:(id)a3;
- (void)voipSession:(id)a0 remoteParticipant:(id)a1 didChangeToMicOff:(BOOL)a2;
- (void)voipSession:(id)a0 remoteParticipant:(id)a1 didChangeToCameraOff:(BOOL)a2;
- (void)xrEngine:(id)a0 videoCaptureStateChange:(unsigned long long)a1;
- (void)xrEngine:(id)a0 didJoinRoom:(id)a1 withUid:(id)a2;
- (void)xrEngine:(id)a0 newSessionCreatedLocal:(BOOL)a1 withUid:(id)a2;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteAudioFrameOfUid:(id)a1;
- (void)xrEngine:(id)a0 onAudioFramePlayStateChanged:(id)a1 state:(unsigned long long)a2;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteVideoFrameOfUid:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)xrEngine:(id)a0 didVideoEnabled:(BOOL)a1 byUid:(id)a2;
- (void)xrEngine:(id)a0 didAudioEnabled:(BOOL)a1 byUid:(id)a2;
- (void)xrEngine:(id)a0 onAudioDeviceStateChanged:(id)a1 device_type:(long long)a2 device_state:(long long)a3 device_error:(long long)a4;
- (void)xrEngine:(id)a0 onVideoDeviceStateChanged:(id)a1 device_type:(long long)a2 device_state:(long long)a3 device_error:(long long)a4;
- (void)xrEngine:(id)a0 audioCaptureStateChange:(unsigned long long)a1;
- (void)xrEngine:(id)a0 onRemoteVideoStateChanged:(id)a1 videoState:(long long)a2 stateChangeReason:(long long)a3;
- (void)xrEngine:(id)a0 onLocalVideoStateChanged:(long long)a1 streamState:(long long)a2 withStreamError:(long long)a3;
- (void)xrEngine:(id)a0 onLocalAudioStateChanged:(long long)a1 withStreamError:(long long)a2;
- (void)xrEngine:(id)a0 onRemoteAudioStateChanged:(id)a1 audioState:(long long)a2 stateChangeReason:(long long)a3;
- (void)xrEngine:(id)a0 onAudioFrameSendStateChanged:(id)a1 state:(unsigned long long)a2;
- (void)xrEngine:(id)a0 onVideoFrameSendStateChanged:(id)a1 state:(unsigned long long)a2;
- (void)xrEngine:(id)a0 didRemotePublish:(BOOL)a1 streamType:(unsigned long long)a2 byUid:(id)a3;
- (void)xrEngine:(id)a0 didSubscribeStream:(unsigned long long)a1 state:(long long)a2 reason:(long long)a3 uid:(id)a4;
- (id)nodeWithIdentifier:(id)a0;
- (void)startNodeIfNeededWithIdentifier:(id)a0;
- (void)finishNodeIfNeededWithIdentifier:(id)a0 error:(id)a1 extraMonitorInfo:(id)a2;
- (void)triggerAcceptionNodesWithExtraMonitorInfo:(id)a0;
- (void)__configMonitor;
- (void)__decideInitialSkippedNodes;
- (void)__skipReceiveVideoNodesIfNeeded;
- (void)__updateReceiveVideoNodesSkip:(BOOL)a0;
- (void)__skipReceiveAudioNodesIfNeeded;
- (void)__updateSendAudioNodesSkip:(BOOL)a0;
- (void)__updateSendVideoNodesSkip:(BOOL)a0;
- (id)__sendAudioNodeKeys;
- (void)__updateSendNodesSkip:(BOOL)a0 forNodes:(id)a1;
- (id)__sendVideoNodeKeys;
- (void)updateNodeSkippedWithIdentifier:(id)a0 skipped:(BOOL)a1;
- (BOOL)__isRemoteParticipantsAllMicOff;
- (id)__receiveAudioNodeKeys;
- (BOOL)__isRemoteParticipantsAllCameraOff;
- (id)__receiveVideoNodeKeys;
- (id)__extraMonitorInfoForUserID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
