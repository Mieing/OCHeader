@class NSString;

@interface KryptonByteRTCDelegate : NSObject <ByteRTCEngineDelegate, ByteRTCRoomDelegate> {
    struct RtcEventHandler { void /* function */ **x0; struct RtcEventDelegate *x1; } *_handler;
    NSString *_userId;
}

@property BOOL destroyed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtcEngine:(id)a0 onError:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstLocalAudioFrame:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstRemoteAudioFrame:(id)a1;
- (void)rtcEngine:(id)a0 onLocalAudioPropertiesReport:(id)a1;
- (void)rtcEngine:(id)a0 onRemoteAudioPropertiesReport:(id)a1 totalRemoteVolume:(long long)a2;
- (void)rtcEngine:(id)a0 onUserStartAudioCapture:(id)a1 uid:(id)a2;
- (void)rtcEngine:(id)a0 onUserStopAudioCapture:(id)a1 uid:(id)a2;
- (void)rtcEngine:(id)a0 onWarning:(long long)a1;
- (void)rtcRoom:(id)a0 onNetworkQuality:(id)a1 remoteQualities:(id)a2;
- (void)rtcRoom:(id)a0 onRoomStateChangedWithReason:(id)a1 withUid:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onUserJoined:(id)a1;
- (void)rtcRoom:(id)a0 onUserLeave:(id)a1 reason:(unsigned long long)a2;
- (void)rtcRoom:(id)a0 onUserPublishStreamAudio:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithHandler:(struct RtcEventHandler { void /* function */ **x0; struct RtcEventDelegate *x1; } *)a0;
- (void)destroy;

@end
