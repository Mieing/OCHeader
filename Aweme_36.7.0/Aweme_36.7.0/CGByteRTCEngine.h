@class CGRTCEngineModel, ByteRTCEngine, NSHashTable, NSString;

@interface CGByteRTCEngine : NSObject <ByteRTCEngineDelegate, ByteRTCRoomDelegate, CGRTCEngine>

@property (retain, nonatomic) CGRTCEngineModel *model;
@property (retain, nonatomic) ByteRTCEngine *byteRtcEngine;
@property (retain, nonatomic) NSHashTable *roomsSet;
@property BOOL didPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSDKVersion;

- (void)startAudioCapture:(id)a0;
- (id)getVeGameEngineHandler;
- (id)getVeGameRoomHandler;
- (void)setupRoom:(id)a0;
- (void)setupCanvas:(id)a0 view:(id)a1;
- (int)setupCellularEnhancement:(id)a0;
- (void)setupVideoSink:(id)a0 room:(id)a1;
- (void)removeInternalRenderVideoSink:(id)a0;
- (void)pullAudioFrame:(id /* block */)a0;
- (void)setAudioRenderType:(long long)a0;
- (void)rtcEngine:(id)a0 onError:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstRemoteVideoFrameDecoded:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onFirstRemoteVideoFrameRendered:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onNetworkDetectionResult:(unsigned long long)a1 quality:(unsigned long long)a2 rtt:(int)a3 lostRate:(double)a4 bitrate:(int)a5 jitter:(int)a6;
- (void)rtcEngine:(id)a0 onNetworkDetectionStopped:(unsigned long long)a1;
- (void)rtcEngine:(id)a0 onRemoteVideoSizeChanged:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onRemoteVideoStateChanged:(id)a1 withVideoState:(long long)a2 withVideoStateReason:(long long)a3;
- (void)rtcEngine:(id)a0 onSEIMessageReceived:(id)a1 andMessage:(id)a2;
- (void)rtcRoom:(id)a0 onRemoteStreamStats:(id)a1;
- (void)rtcRoom:(id)a0 onRoomStateChangedWithReason:(id)a1 withUid:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onRoomStats:(id)a1;
- (void)rtcRoom:(id)a0 onUserBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onUserJoined:(id)a1;
- (void)rtcRoom:(id)a0 onUserLeave:(id)a1 reason:(unsigned long long)a2;
- (void)rtcRoom:(id)a0 onUserMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onUserMessageSendResult:(long long)a1 error:(long long)a2;
- (void)rtcRoom:(id)a0 onUserPublishStreamAudio:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void)rtcRoom:(id)a0 onUserPublishStreamVideo:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void)stopAudioCapture:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)preload;
- (void)dealloc;

@end
