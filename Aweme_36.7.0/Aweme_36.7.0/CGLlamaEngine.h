@class CGRTCEngineModel, NSString, NSHashTable, LMEngine;

@interface CGLlamaEngine : NSObject <LMEngineEventHandler, CGRTCEngine>

@property (retain, nonatomic) CGRTCEngineModel *model;
@property (retain, nonatomic) LMEngine *lmEngine;
@property (retain, nonatomic) NSHashTable *roomsSet;
@property (nonatomic) BOOL enableLLamaLogReport;
@property BOOL didPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSDKVersion;

- (void)setupRoom:(id)a0;
- (void)setupCanvas:(id)a0 view:(id)a1;
- (void)setupVideoSink:(id)a0 room:(id)a1;
- (void)removeInternalRenderVideoSink:(id)a0;
- (void)pullAudioFrame:(id /* block */)a0;
- (void)setupLlamaEnvIfNeeded;
- (id)getVeGameLlamaHandler;
- (void)lmEngine:(id)a0 onAudioRouteChanged:(long long)a1;
- (void)lmEngine:(id)a0 onConnectionStateChanged:(id)a1 state:(long long)a2 reason:(long long)a3;
- (void)lmEngine:(id)a0 onError:(id)a1 errorType:(int)a2 errorCode:(long long)a3;
- (void)lmEngine:(id)a0 onFirstLocalAudioFrameCaptured:(id)a1;
- (void)lmEngine:(id)a0 onFirstLocalVideoFrameCaptured:(id)a1;
- (void)lmEngine:(id)a0 onFirstRemoteAudioFrame:(id)a1 info:(id)a2;
- (void)lmEngine:(id)a0 onFirstRemoteVideoFrameDecoded:(id)a1 info:(id)a2;
- (void)lmEngine:(id)a0 onFirstRemoteVideoFrameRendered:(id)a1 info:(id)a2;
- (void)lmEngine:(id)a0 onLeaveRoom:(id)a1;
- (void)lmEngine:(id)a0 onLocalAudioPropertiesReport:(id)a1;
- (void)lmEngine:(id)a0 onLocalAudioStateChanged:(long long)a1 error:(long long)a2;
- (void)lmEngine:(id)a0 onLocalStreamStats:(id)a1;
- (void)lmEngine:(id)a0 onLocalVideoStateChanged:(long long)a1 error:(long long)a2;
- (void)lmEngine:(id)a0 onLogReport:(id)a1 logData:(id)a2;
- (void)lmEngine:(id)a0 onNetworkDetectionResult:(long long)a1 quality:(long long)a2 rtt:(int)a3 lostRate:(double)a4 bitrate:(int)a5 jitter:(int)a6;
- (void)lmEngine:(id)a0 onNetworkDetectionStopped:(long long)a1;
- (void)lmEngine:(id)a0 onNetworkTypeChanged:(long long)a1;
- (void)lmEngine:(id)a0 onRemoteAudioStateChanged:(id)a1 state:(long long)a2 reason:(long long)a3;
- (void)lmEngine:(id)a0 onRemoteStreamStats:(id)a1 stats:(id)a2;
- (void)lmEngine:(id)a0 onRemoteVideoSizeChanged:(id)a1 info:(id)a2;
- (void)lmEngine:(id)a0 onRemoteVideoStateChanged:(id)a1 state:(long long)a2 reason:(long long)a3;
- (void)lmEngine:(id)a0 onRoomStateChangedWithReason:(id)a1 state:(long long)a2 reason:(long long)a3;
- (void)lmEngine:(id)a0 onRoomStats:(id)a1;
- (void)lmEngine:(id)a0 onSeiMessageReceived:(id)a1 message:(id)a2;
- (void)lmEngine:(id)a0 onStreamSubscribed:(id)a1 state:(long long)a2 info:(id)a3;
- (void)lmEngine:(id)a0 onUserBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)lmEngine:(id)a0 onUserJoined:(id)a1 elapsed:(int)a2;
- (void)lmEngine:(id)a0 onUserLeave:(id)a1 reason:(long long)a2;
- (void)lmEngine:(id)a0 onUserMessageReceived:(id)a1 message:(id)a2;
- (void)lmEngine:(id)a0 onUserMessageSendResult:(id)a1 messageId:(long long)a2 sendResult:(long long)a3;
- (void)lmEngine:(id)a0 onUserPublishStream:(id)a1 type:(long long)a2 info:(id)a3;
- (void)lmEngine:(id)a0 onUserUnPublishStream:(id)a1 type:(long long)a2 reason:(long long)a3;
- (void)lmEngine:(id)a0 onVideoFramePlayStateChanged:(id)a1 metaData:(id)a2 state:(long long)a3;
- (void)lmEngine:(id)a0 onVideoFrameSendStateChanged:(long long)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)preload;
- (void)dealloc;

@end
