@interface AWEFormatImpl.RTCClientManager : NSObject <AWEFormatRTCClientDelegate> {
    void /* unknown type, empty encoding */ serverUidHasJoin;
    void /* unknown type, empty encoding */ videoUidHasJoin;
    void /* unknown type, empty encoding */ rtcInfo;
    void /* unknown type, empty encoding */ roomId;
    void /* unknown type, empty encoding */ rtcClient;
    void /* unknown type, empty encoding */ enterScene;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ pingTimer;
    void /* unknown type, empty encoding */ currentPingInterval;
    void /* unknown type, empty encoding */ context;
}

- (void)rtcClient:(id)a0 onError:(id)a1;
- (void)rtcClient:(id)a0 onJoinRoomFinish:(id)a1;
- (void)rtcClientOnLeaveRoomFinish:(id)a0 reason:(long long)a1;
- (void)rtcClient:(id)a0 onUserLeaved:(id)a1 reason:(unsigned long long)a2;
- (void)rtcClient:(id)a0 onSEIReceived:(id)a1 fromUserID:(id)a2;
- (void)rtcClient:(id)a0 onUserJoined:(id)a1;
- (void)rtcClient:(id)a0 onFirstRemoteVideoFrameFromUserID:(id)a1;
- (void)rtcClient:(id)a0 onFirstRemoteVideoFrameRenderedFromUserID:(id)a1;
- (void)rtcClient:(id)a0 onUserMessageReceived:(id)a1 from:(id)a2;
- (void)rtcClient:(id)a0 onUserBinaryMessageReceived:(id)a1 from:(id)a2;
- (void)rtcClient:(id)a0 onRoomMessageReceived:(id)a1 from:(id)a2;
- (void)rtcClient:(id)a0 onRoomBinaryMessageReceived:(id)a1 from:(id)a2;
- (void)rtcClient:(id)a0 onAudioDeviceStateChanged:(id)a1 deviceType:(long long)a2 deviceState:(long long)a3 deviceError:(long long)a4;
- (void)rtcClient:(id)a0 onAudioText:(id)a1 complete:(BOOL)a2;
- (void)rtcClient:(id)a0 onAudioVolume:(double)a1;
- (void)rtcClient:(id)a0 onAudioError:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
