@class NSString, ByteRTCEngine, ByteRTCRoom;
@protocol BDPRtcEventCallbackProtocol;

@interface AWERTCEngine : NSObject <RtcEngineProtocol, ByteRTCRoomDelegate>

@property (weak, nonatomic) id<BDPRtcEventCallbackProtocol> cb;
@property (retain, nonatomic) ByteRTCEngine *rtcKit;
@property (retain, nonatomic) ByteRTCRoom *rtcRoom;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *bid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)setEnableAudio:(BOOL)a0;
- (void)RTCRequestInstanceNotification:(id)a0;
- (void)releaseRtcEngine;
- (int)leaveChannel;
- (int)joinChannel:(id)a0 uid:(id)a1 accessToken:(id)a2;
- (int)setEnableLocalAudio:(BOOL)a0;
- (int)muteLocalAudioStream:(BOOL)a0;
- (int)muteRemoteAudioStream:(id)a0 mute:(BOOL)a1;
- (int)muteAllRemoteAudioStream:(BOOL)a0;
- (int)adjustPlaybackSignalVolume:(int)a0;
- (int)adjustRecordingSignalVolume:(int)a0;
- (int)enableAudioVolumeIndication:(int)a0;
- (int)extraEvent:(id)a0;
- (void)rtcRoom:(id)a0 onLocalStreamStats:(id)a1;
- (void)rtcRoom:(id)a0 onRemoteStreamStats:(id)a1;
- (void)rtcRoom:(id)a0 onRoomStateChangedWithReason:(id)a1 withUid:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onUserJoined:(id)a1;
- (void)rtcRoom:(id)a0 onUserLeave:(id)a1 reason:(unsigned long long)a2;
- (void)rtcRoom:(id)a0 onUserPublishStreamAudio:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (int)destroy;
- (void)dealloc;

@end
