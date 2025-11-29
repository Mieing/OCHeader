@class NSString;

@interface CGXByteRTCRoomHandler : NSObject <ByteRTCRoomDelegate> {
    struct shared_ptr<xplay::bytertc::IByteRTCRoomEventHandler> { struct IByteRTCRoomEventHandler *__ptr_; struct __shared_weak_count *__cntrl_; } _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtcRoom:(id)a0 onStreamStateChanged:(id)a1 withUid:(id)a2 state:(long long)a3 extraInfo:(id)a4;
- (void)rtcRoom:(id)a0 onAVSyncStateChange:(long long)a1;
- (void)rtcRoom:(id)a0 onAVSyncEvent:(id)a1 userId:(id)a2 eventCode:(long long)a3;
- (void)rtcRoom:(id)a0 onScreenAudioSubscribeStateChanged:(id)a1 userId:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onScreenVideoSubscribeStateChanged:(id)a1 userId:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)onPublishPrivilegeTokenWillExpire:(id)a0;
- (void)onSubscribePrivilegeTokenWillExpire:(id)a0;
- (void)onTokenWillExpire:(id)a0;
- (void)rtcRoom:(id)a0 onAudioPublishStateChanged:(id)a1 userId:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onAudioStreamBanned:(id)a1 isBanned:(BOOL)a2;
- (void)rtcRoom:(id)a0 onAudioSubscribeStateChanged:(id)a1 userId:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onForwardStreamEvent:(id)a1;
- (void)rtcRoom:(id)a0 onForwardStreamStateChanged:(id)a1;
- (void)rtcRoom:(id)a0 onLeaveRoom:(id)a1;
- (void)rtcRoom:(id)a0 onLocalStreamStats:(id)a1;
- (void)rtcRoom:(id)a0 onNetworkQuality:(id)a1 remoteQualities:(id)a2;
- (void)rtcRoom:(id)a0 onRemoteStreamStats:(id)a1;
- (void)rtcRoom:(id)a0 onRoomBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onRoomEvent:(id)a1 uid:(id)a2 state:(long long)a3 info:(id)a4;
- (void)rtcRoom:(id)a0 onRoomExtraInfoUpdate:(id)a1 value:(id)a2 lastUpdateUserId:(id)a3 lastUpdateTimeMs:(long long)a4;
- (void)rtcRoom:(id)a0 onRoomMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onRoomMessageSendResult:(long long)a1 error:(long long)a2;
- (void)rtcRoom:(id)a0 onRoomStateChanged:(id)a1 withUid:(id)a2 state:(long long)a3 extraInfo:(id)a4;
- (void)rtcRoom:(id)a0 onRoomStateChangedWithReason:(id)a1 withUid:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onRoomStats:(id)a1;
- (void)rtcRoom:(id)a0 onScreenAudioPublishStateChanged:(id)a1 userId:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onScreenVideoPublishStateChanged:(id)a1 userId:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onSetRoomExtraInfoResult:(long long)a1 result:(long long)a2;
- (void)rtcRoom:(id)a0 onStreamPublishSuccess:(id)a1 isScreen:(BOOL)a2;
- (void)rtcRoom:(id)a0 onUserBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onUserJoined:(id)a1;
- (void)rtcRoom:(id)a0 onUserLeave:(id)a1 reason:(unsigned long long)a2;
- (void)rtcRoom:(id)a0 onUserMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onUserMessageSendResult:(long long)a1 error:(long long)a2;
- (void)rtcRoom:(id)a0 onUserPublishScreenAudio:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void)rtcRoom:(id)a0 onUserPublishScreenVideo:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void)rtcRoom:(id)a0 onUserPublishStreamAudio:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void)rtcRoom:(id)a0 onUserPublishStreamVideo:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void)rtcRoom:(id)a0 onUserVisibilityChanged:(BOOL)a1 errorCode:(long long)a2;
- (void)rtcRoom:(id)a0 onVideoPublishStateChanged:(id)a1 userId:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onVideoStreamBanned:(id)a1 isBanned:(BOOL)a2;
- (void)rtcRoom:(id)a0 onVideoSubscribeStateChanged:(id)a1 userId:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void).cxx_destruct;
- (id)initWithHandler:(struct shared_ptr<xplay::bytertc::IByteRTCRoomEventHandler> { struct IByteRTCRoomEventHandler *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (void)dealloc;

@end
