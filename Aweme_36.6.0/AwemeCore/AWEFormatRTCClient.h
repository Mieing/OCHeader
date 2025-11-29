@class HTSFormatSpeechASRManager, ByteRTCEngine, AWEFormatRTCClientConfig, ByteRTCRoom, NSMutableDictionary, NSString;
@protocol AWEFormatRTCClientDelegate;

@interface AWEFormatRTCClient : NSObject <ByteRTCEngineDelegate, ByteRTCRoomDelegate, ByteRTCAudioFrameObserver, IESLiveFormatSpeechASRDelegate, AWEFormatRTCClientInterface>

@property (retain, nonatomic) HTSFormatSpeechASRManager *speechASRManager;
@property (retain, nonatomic) AWEFormatRTCClientConfig *config;
@property (retain, nonatomic) ByteRTCEngine *rtcEngine;
@property (retain, nonatomic) ByteRTCRoom *rtcRoom;
@property (retain, nonatomic) NSMutableDictionary *sendMsgCallbackMap;
@property (nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEFormatRTCClientDelegate> delegate;

- (void)setupWithConfig:(id)a0;
- (void)sendText:(id)a0 toUser:(id)a1 completion:(id /* block */)a2;
- (void)sendData:(id)a0 toUser:(id)a1 completion:(id /* block */)a2;
- (void)muteAllRemoteAudio:(BOOL)a0;
- (int)muteAllLocalAudio:(BOOL)a0;
- (void)setRemoteVolume:(long long)a0 user:(id)a1;
- (int)startAudioCaptureForASR;
- (int)stopAudioCaptureForASR;
- (void)bindRenderView:(id)a0 toUser:(id)a1;
- (void)joinRoom;
- (void)didReceiveRecordFrame:(id)a0;
- (void)didRecordFrameVolume:(id)a0;
- (void)joinRoomWithVisibility:(BOOL)a0;
- (BOOL)disableRtcMutePause;
- (void)ASREngineRecognizeResult:(id)a0 complete:(BOOL)a1;
- (void)leaveRoom;
- (void)subscribeStreamAudio:(id)a0 subscribe:(BOOL)a1;
- (void)subscribeScreenVideo:(id)a0 subscribe:(BOOL)a1;
- (void)onCaptureMixedAudioFrame:(id)a0;
- (void)onMixedAudioFrame:(id)a0;
- (void)onPlaybackAudioFrame:(id)a0;
- (void)onRecordAudioFrame:(id)a0;
- (void)onRemoteUserAudioFrame:(id)a0 audioFrame:(id)a1;
- (void)rtcEngine:(id)a0 onAudioDeviceStateChanged:(id)a1 device_type:(long long)a2 device_state:(long long)a3 device_error:(long long)a4;
- (void)rtcEngine:(id)a0 onError:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstRemoteVideoFrameDecoded:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onFirstRemoteVideoFrameRendered:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onSEIMessageReceived:(id)a1 andMessage:(id)a2;
- (void)rtcRoom:(id)a0 onLeaveRoom:(id)a1;
- (void)rtcRoom:(id)a0 onRoomBinaryMessageReceived:(long long)a1 uid:(id)a2 message:(id)a3;
- (void)rtcRoom:(id)a0 onRoomMessageReceived:(long long)a1 uid:(id)a2 message:(id)a3;
- (void)rtcRoom:(id)a0 onRoomStateChangedWithReason:(id)a1 withUid:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onUserBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onUserJoined:(id)a1;
- (void)rtcRoom:(id)a0 onUserLeave:(id)a1 reason:(unsigned long long)a2;
- (void)rtcRoom:(id)a0 onUserMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onUserMessageSendResult:(long long)a1 error:(long long)a2;
- (void).cxx_destruct;
- (void)destroy;
- (id)initWithConfig:(id)a0;

@end
