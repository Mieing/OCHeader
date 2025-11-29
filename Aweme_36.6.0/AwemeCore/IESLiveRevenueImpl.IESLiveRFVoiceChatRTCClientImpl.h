@interface IESLiveRevenueImpl.IESLiveRFVoiceChatRTCClientImpl : NSObject <ByteRTCRoomDelegate, ByteRTCEngineDelegate> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ rtcEngine;
    void /* unknown type, empty encoding */ rtcRoom;
    void /* unknown type, empty encoding */ aiUserID;
    void /* unknown type, empty encoding */ delegate;
}

- (void)rtcRoom:(id)a0 onRoomMessageReceived:(long long)a1 uid:(id)a2 message:(id)a3;
- (void)rtcRoom:(id)a0 onRoomMessageSendResult:(long long)a1 error:(long long)a2;
- (void)rtcRoom:(id)a0 onRoomStateChangedWithReason:(id)a1 withUid:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onUserJoined:(id)a1;
- (void)rtcRoom:(id)a0 onUserLeave:(id)a1 reason:(unsigned long long)a2;
- (void)rtcEngine:(id)a0 onError:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstRemoteAudioFrame:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
