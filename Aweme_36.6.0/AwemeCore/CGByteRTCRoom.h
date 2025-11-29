@class CGRTCRoomModel, ByteRTCRoom, NSString, CGByteRTCEngine;
@protocol CGRTCRoomDelegate, CGRTCSEIMessageDelegate, CGRTCDataChannelDelegate;

@interface CGByteRTCRoom : NSObject <ByteRTCVideoSinkDelegate, CGRTCRoom>

@property (nonatomic) BOOL destroyVeGameWhenStop;
@property (nonatomic) BOOL didSubscribeAudio;
@property (retain, nonatomic) CGRTCRoomModel *model;
@property (retain, nonatomic) CGByteRTCEngine *engine;
@property (weak, nonatomic) id<CGRTCRoomDelegate> delegate;
@property (weak, nonatomic) id<CGRTCSEIMessageDelegate> seiMessageDelegate;
@property (weak, nonatomic) id<CGRTCDataChannelDelegate> dataChannelDelegate;
@property (retain, nonatomic) ByteRTCRoom *byteRtcRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)publishVideoStream:(BOOL)a0;
- (void)sendMessageWithData:(id)a0;
- (void)sendMessageWithString:(id)a0;
- (void)pullAudioFrame;
- (void)onSEIMessageReceived:(id)a0 uid:(id)a1;
- (void)setupVideoSink:(id)a0;
- (void)setupCanvas:(id)a0;
- (void)setExternalRenderFinishedResult:(id)a0;
- (void)removeInternalRenderVideoSink;
- (void)onErrorWithCode:(long long)a0;
- (void)onFirstRemoteVideoFrameDecoded:(id)a0 uid:(id)a1;
- (void)onFirstRemoteVideoFrameRendered:(id)a0 uid:(id)a1;
- (void)onRemoteVideoSizeChanged:(id)a0 uid:(id)a1;
- (void)onRemoteVideoStateChanged:(long long)a0 withVideoStateReason:(long long)a1 uid:(id)a2;
- (void)onUserJoinedWithUid:(id)a0;
- (void)onUserLeave:(unsigned long long)a0 uid:(id)a1;
- (void)onUserPublishStreamVideo:(BOOL)a0 uid:(id)a1;
- (void)onUserPublishStreamAudio:(BOOL)a0 uid:(id)a1;
- (void)onRemoteStreamStats:(id)a0;
- (void)onRoomStateChangedWithUid:(id)a0 state:(long long)a1 reason:(long long)a2;
- (void)onRoomStats:(id)a0;
- (void)onUserMessageReceived:(id)a0 message:(id)a1;
- (void)onUserBinaryMessageReceived:(id)a0 message:(id)a1;
- (void)onUserMessageSendResult:(long long)a0 error:(long long)a1;
- (int)setupCellularEnhancement:(id)a0;
- (long long)rtcVideoRotationFromXPlayRotation:(long long)a0;
- (long long)castingByteRTCRotation:(long long)a0;
- (void)subscribeVideo:(BOOL)a0;
- (void)subscribeAudio:(BOOL)a0;
- (int)setRemoteSimulcastStreamTypeWithUserID:(id)a0 streamType:(long long)a1;
- (void)setEngineRuntimeParameters:(id)a0;
- (id)initWithModel:(id)a0 engine:(id)a1;
- (void)onFrame:(id)a0;
- (int)pushExternalVideoFrame:(id)a0;
- (void)setAudioRenderType:(long long)a0;
- (int)setVideoEncoderConfig:(id)a0;
- (void)setVideoRenderType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)leave;
- (void)startAudioCapture;
- (void)setVolume:(int)a0;
- (void)preload;
- (void)dealloc;
- (void)stopAudioCapture;
- (void)join:(BOOL)a0;

@end
