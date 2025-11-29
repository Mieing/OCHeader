@class NSString, BDPUniqueID;
@protocol RtcEngineProtocol, BDPRTCPluginDelegate;

@interface BDPPluginRTC_HG : BDPBridgeInstancePlugin <BDPRtcEventCallbackProtocol, BDPContainerLifeCycleMessage>

@property (retain, nonatomic) id<BDPRTCPluginDelegate> rtcPlugin;
@property (weak, nonatomic) id<RtcEngineProtocol> rtcEngine;
@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onWarning:(int)a0;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)onJoinChannelSuccess:(int)a0;
- (void)onRejoinChannelSuccess:(int)a0;
- (void)onLeaveChannel;
- (void)onUserJoined:(id)a0 elapsed:(int)a1;
- (void)onUserOffline:(id)a0 reason:(int)a1;
- (void)onUserMuteAudio:(id)a0 muted:(BOOL)a1;
- (void)onNetworkQuality:(id)a0 txQuality:(int)a1 rxQuality:(int)a2;
- (void)onFirstLocalAudioFrame:(int)a0;
- (void)onFirstRemoteAudioFrame:(id)a0 elapsed:(int)a1;
- (void)onUserEnableLocalAudio:(id)a0 enabled:(BOOL)a1;
- (void)onAudioVolumeIndication:(id)a0 volume:(int)a1 speakerNumber:(int)a2;
- (void)onConnectionLost;
- (void)onConnectionInterrupted;
- (void)postMessage:(id)a0 param:(id)a1;
- (void)onUserEnableAudio:(id)a0 enabled:(BOOL)a1;
- (void)onLogReport:(id)a0 log_content:(id)a1;
- (void)onStreamPublishSucceed;
- (void)onExtraEvent:(id)a0;
- (void)onUserMuteAudio:(id)a0 elapsed:(int)a1;
- (void)onUserEnableAudio:(id)a0 elapsed:(int)a1;
- (void)onUserEnableLocalAudio:(id)a0 elapsed:(int)a1;
- (void)createRtcEngineWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateRtcEngineWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)onError:(int)a0;

@end
