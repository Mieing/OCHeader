@class NSString, NSMutableDictionary, BDPUniqueID;

@interface BDPPluginVoIP : BDPBridgeInstancePlugin <BDPRTCEngineDelegate, BDPWarmBootMessage, BDPContainerLifeCycleMessage, BDPPermissionChangeMessage>

@property (retain, nonatomic) NSMutableDictionary *engines;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)pluginMode;

- (long long)_getRenderViewMode:(id)a0;
- (long long)_getDevicePositionForString:(id)a0;
- (void)_setupStyle:(id)a0 style:(id)a1;
- (void)_joinRtcRoomWithParam:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_exitRtcRoomWithEngine:(id)a0 callback:(id /* block */)a1;
- (void)_changeVideoCaptureWithParam:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_changeAudioCaptureWithParam:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_switchCameraWithParam:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_updateTokenWithParam:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_changeUserVisibility:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_setVideoEncoderConfig:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_setAudioPlaybackDevice:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_changeStreamPublishState:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_changeStreamSubscribeState:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_changeScreenSubscribeState:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (void)_changeAnsMode:(id)a0 engine:(id)a1 callback:(id /* block */)a2;
- (id)errorTypeForErrCode:(unsigned long long)a0;
- (long long)errorCodeForErrCode:(unsigned long long)a0;
- (void)rtcEngine:(id)a0 chatMembersChanged:(id)a1;
- (void)rtcEngine:(id)a0 chatSpeakersmembersChanged:(id)a1;
- (void)rtcEngine:(id)a0 chatVideoMembersChanged:(id)a1;
- (void)rtcEngine:(id)a0 shareScreenMembersChanged:(id)a1;
- (void)rtcEngineOnRoomTokenWillExpire:(id)a0;
- (void)rtcEngine:(id)a0 onNetworkQuality:(id)a1 remoteQuality:(id)a2;
- (void)insertRtcRoomWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateRtcRoomWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeRtcRoomWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createRtcRoomContextWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateRtcRoomContextWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)onRtcChatInterrupted;
- (void)rtcEngine:(id)a0 onError:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
