@class VeRTCRoomProxy, NSString, VePlayerTouchView, VeRTCEngineProxy, UIView, VeCoreConfigObject, NSObject, ByteRTCEngine, ByteRTCRoom;
@protocol VeGameEngineDelegate;

@interface VeGameRtcEngine : NSObject <ByteRTCRoomDelegate, ByteRTCEngineDelegate, VePlayerTouchViewDelegate, VeGameEngine>

@property (nonatomic) BOOL isFirstFrameArrived;
@property (retain, nonatomic) VePlayerTouchView *touchView;
@property (retain, nonatomic) VeRTCEngineProxy *rtcEngineProxy;
@property (retain, nonatomic) VeRTCRoomProxy *rtcRoomProxy;
@property (retain, nonatomic) ByteRTCEngine *rtcEngine;
@property (retain, nonatomic) ByteRTCRoom *rtcRoom;
@property (weak, nonatomic) NSObject<VeGameEngineDelegate> *delegate;
@property (nonatomic) unsigned long long userJoinedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *customTouchView;
@property (retain, nonatomic) VeCoreConfigObject *config;
@property (nonatomic) long long localAudioPlaybackVolume;
@property (nonatomic) unsigned long long audioPlaybackDevice;

- (void)rtcRoom:(id)a0 onStreamStateChanged:(id)a1 withUid:(id)a2 state:(long long)a3 extraInfo:(id)a4;
- (void)muteVideo:(BOOL)a0;
- (void)createEngineWithAppId:(id)a0;
- (void)setContainerView:(id)a0 touchView:(id)a1;
- (void)sendMessageWithData:(id)a0 messageType:(int)a1 messageSubType:(int)a2;
- (void)sendMessageWithEventType:(long long)a0 data:(id)a1;
- (void)muteAudio:(BOOL)a0;
- (void)handleFirstRemoteVideoFrame:(id)a0 withFrameInfo:(id)a1;
- (void)operationView:(id)a0 onTouchEvent:(id)a1;
- (void)switchPaused:(BOOL)a0;
- (void)startAudioStream;
- (void)publishStream:(unsigned long long)a0;
- (void)unpublishStream:(unsigned long long)a0;
- (void)rtcEngine:(id)a0 onAudioRouteChanged:(long long)a1;
- (void)rtcEngine:(id)a0 onConnectionStateChanged:(long long)a1;
- (void)rtcEngine:(id)a0 onError:(long long)a1;
- (void)rtcEngine:(id)a0 onFirstRemoteVideoFrameDecoded:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onFirstRemoteVideoFrameRendered:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onRemoteVideoSizeChanged:(id)a1 withFrameInfo:(id)a2;
- (void)rtcEngine:(id)a0 onSEIMessageReceived:(id)a1 andMessage:(id)a2;
- (void)rtcEngine:(id)a0 onWarning:(long long)a1;
- (void)rtcRoom:(id)a0 onRemoteStreamStats:(id)a1;
- (void)rtcRoom:(id)a0 onRoomStateChangedWithReason:(id)a1 withUid:(id)a2 state:(long long)a3 reason:(long long)a4;
- (void)rtcRoom:(id)a0 onUserBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onUserJoined:(id)a1;
- (void)rtcRoom:(id)a0 onUserLeave:(id)a1 reason:(unsigned long long)a2;
- (void)rtcRoom:(id)a0 onUserMessageSendResult:(long long)a1 error:(long long)a2;
- (void)rtcRoom:(id)a0 onUserPublishStreamAudio:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void)rtcRoom:(id)a0 onUserPublishStreamVideo:(id)a1 uid:(id)a2 isPublish:(BOOL)a3;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithDelegate:(id)a0;
- (void)destroyEngine;
- (void)start;
- (void)stopAudioStream;

@end
