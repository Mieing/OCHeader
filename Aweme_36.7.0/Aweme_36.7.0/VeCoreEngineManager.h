@class NSString, NSTimer, NSMutableDictionary, VeCoreConfigObject, NSMutableSet, NSObject;
@protocol VeCoreEngineManagerDelegate, ByteRTCEngineDelegate, VeGameEngine, LMEngineEventHandler, ByteRTCRoomDelegate;

@interface VeCoreEngineManager : NSObject <VeGameEngineDelegate>

@property (retain, nonatomic) NSTimer *seiTimer;
@property (retain, nonatomic) NSTimer *MCCHeartTimer;
@property (copy, nonatomic) NSString *podMccVersion;
@property (retain, nonatomic) NSMutableDictionary *mccStatusDict;
@property (retain, nonatomic) NSMutableDictionary *mcclHeartbeatNumDict;
@property (retain, nonatomic) VeCoreConfigObject *config;
@property (retain, nonatomic) NSMutableSet *delayDetectSet;
@property (retain, nonatomic) id<VeGameEngine> gameEngine;
@property (weak, nonatomic) NSObject<VeCoreEngineManagerDelegate> *delegate;
@property (weak, nonatomic) NSObject<ByteRTCEngineDelegate> *rtcEngineDelegate;
@property (weak, nonatomic) NSObject<ByteRTCRoomDelegate> *rtcRoomDelegate;
@property (weak, nonatomic) NSObject<LMEngineEventHandler> *llamaDelegate;
@property (nonatomic) double seiInterval;
@property (nonatomic) BOOL vibratorEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportTouchDelay:(id)a0;
- (void)createEngineWithConfig:(id)a0;
- (void)startDelayDetect;
- (void)receiveAppDidEnterBackgroundNotification:(id)a0;
- (void)receiveAppWillEnterForegroundNotification:(id)a0;
- (void)receiveAppWillTerminateNotification:(id)a0;
- (void)cancleTimer:(id)a0;
- (id)sendMessageWithText:(id)a0 data:(id)a1 type:(unsigned long long)a2 ackId:(id)a3 channelId:(id)a4;
- (void)onMccRemoteOffline:(id)a0 channelStatus:(long long)a1;
- (void)onMccRemoteOnline:(id)a0 channelStatus:(long long)a1;
- (void)onMccReceiveHeartbeat:(id)a0;
- (void)firstRemoteVideoFrameRenderedFromEngine:(id)a0;
- (void)gameEngine:(id)a0 onAudioRouteChanged:(unsigned long long)a1;
- (void)gameEngine:(id)a0 receivedBinaryMessage:(id)a1 fromUser:(id)a2;
- (void)gameEngine:(id)a0 connectionChangedToState:(unsigned long long)a1;
- (void)gameEngine:(id)a0 onRemoteStreamStats:(id)a1;
- (void)gameEngine:(id)a0 seiData:(id)a1;
- (void)gameEngine:(id)a0 onUserLeave:(unsigned long long)a1;
- (void)gameEngine:(id)a0 mediaStreamError:(unsigned long long)a1;
- (void)startWithContainerView:(id)a0 touchView:(id)a1;
- (id)currentEngine;
- (id)sendTextMessage:(id)a0 type:(unsigned long long)a1;
- (id)sendBinaryMessage:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)stop:(BOOL)a0;
- (id)init;
- (void)destroyEngine;

@end
