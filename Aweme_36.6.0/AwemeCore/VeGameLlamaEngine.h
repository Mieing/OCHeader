@class UIView, NSString, VePlayerTouchView, VeCoreConfigObject, VeLlamaProxy, NSObject, LMVideoEncoderConfig, LMEngine;
@protocol VeGameEngineDelegate;

@interface VeGameLlamaEngine : NSObject <VePlayerTouchViewDelegate, VeGameEngine, LMEngineEventHandler>

@property (nonatomic) BOOL isConnected;
@property (retain, nonatomic) LMEngine *llamaEngine;
@property (retain, nonatomic) VePlayerTouchView *touchView;
@property (retain, nonatomic) LMVideoEncoderConfig *videoEncoder;
@property (retain, nonatomic) VeLlamaProxy *llamaEngineProxy;
@property (weak, nonatomic) NSObject<VeGameEngineDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *customTouchView;
@property (retain, nonatomic) VeCoreConfigObject *config;
@property (nonatomic) long long localAudioPlaybackVolume;
@property (nonatomic) unsigned long long audioPlaybackDevice;

- (void)muteVideo:(BOOL)a0;
- (void)createEngineWithAppId:(id)a0;
- (void)setContainerView:(id)a0 touchView:(id)a1;
- (void)sendMessageWithData:(id)a0 messageType:(int)a1 messageSubType:(int)a2;
- (void)sendMessageWithEventType:(long long)a0 data:(id)a1;
- (BOOL)getEnvParam;
- (void)muteAudio:(BOOL)a0;
- (void)handleFirstRemoteVideoFrame:(id)a0 withFrameInfo:(id)a1;
- (void)operationView:(id)a0 onTouchEvent:(id)a1;
- (void)switchPaused:(BOOL)a0;
- (void)startAudioStream;
- (void)lmEngine:(id)a0 onAudioRouteChanged:(long long)a1;
- (void)lmEngine:(id)a0 onConnectionStateChanged:(id)a1 state:(long long)a2 reason:(long long)a3;
- (void)lmEngine:(id)a0 onError:(id)a1 errorType:(int)a2 errorCode:(long long)a3;
- (void)lmEngine:(id)a0 onFirstRemoteVideoFrameDecoded:(id)a1 info:(id)a2;
- (void)lmEngine:(id)a0 onFirstRemoteVideoFrameRendered:(id)a1 info:(id)a2;
- (void)lmEngine:(id)a0 onLogReport:(id)a1 logData:(id)a2;
- (void)lmEngine:(id)a0 onRemoteStreamStats:(id)a1 stats:(id)a2;
- (void)lmEngine:(id)a0 onRemoteVideoSizeChanged:(id)a1 info:(id)a2;
- (void)lmEngine:(id)a0 onRoomStateChangedWithReason:(id)a1 state:(long long)a2 reason:(long long)a3;
- (void)lmEngine:(id)a0 onSeiMessageReceived:(id)a1 message:(id)a2;
- (void)lmEngine:(id)a0 onUserBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)lmEngine:(id)a0 onUserJoined:(id)a1 elapsed:(int)a2;
- (void)lmEngine:(id)a0 onUserLeave:(id)a1 reason:(long long)a2;
- (void)publishStream:(unsigned long long)a0;
- (void)unpublishStream:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithDelegate:(id)a0;
- (void)destroyEngine;
- (void)start;
- (void)stopAudioStream;

@end
