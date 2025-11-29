@interface AWEHamletImpl.RTCWrapper : NSObject <ByteRTCRoomDelegate, ByteRTCEngineDelegate> {
    void /* unknown type, empty encoding */ engine;
    void /* unknown type, empty encoding */ room;
    void /* unknown type, empty encoding */ appId;
    void /* unknown type, empty encoding */ roomId;
    void /* unknown type, empty encoding */ userId;
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ isEnableLocalAudio;
    void /* unknown type, empty encoding */ hasJoinedRoom;
    void /* unknown type, empty encoding */ isMuteAllRemoteAudio;
    void /* unknown type, empty encoding */ isMuteLocalAudio;
}

- (void)rtcRoom:(id)a0 onLeaveRoom:(id)a1;
- (void)rtcRoom:(id)a0 onNetworkQuality:(id)a1 remoteQualities:(id)a2;
- (void)rtcRoom:(id)a0 onRoomStateChangedWithReason:(id)a1 withUid:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onUserJoined:(id)a1;
- (void)rtcRoom:(id)a0 onUserLeave:(id)a1 reason:(unsigned long long)a2;
- (void)rtcRoom:(id)a0 onUserPublishScreenAudio:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void)rtcEngine:(id)a0 onError:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstLocalAudioFrame:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstRemoteAudioFrame:(id)a1;
- (void)rtcEngine:(id)a0 onLocalAudioPropertiesReport:(id)a1;
- (void)rtcEngine:(id)a0 onUserStartAudioCapture:(id)a1 uid:(id)a2;
- (void)rtcEngine:(id)a0 onUserStopAudioCapture:(id)a1 uid:(id)a2;
- (void)rtcEngine:(id)a0 onWarning:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
