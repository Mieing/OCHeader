@class IESLiveLinkRTCEngineManager, IESLiveLinkRTCRoomManager, NSString, IESLiveLinkVideoParamsManager;
@protocol IESLiveLinkRTCInfoReceiverDelegate;

@interface IESLiveLinkRTCInfoReceiver : NSObject <ByteRTCEngineDelegate, ByteRTCRoomDelegate, IESLiveLinkRTCRoomManagerObserver>

@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (weak, nonatomic) IESLiveLinkRTCRoomManager *roomManager;
@property (weak, nonatomic) IESLiveLinkVideoParamsManager *videoParamsManager;
@property (weak, nonatomic) id<IESLiveLinkRTCInfoReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEngineManager:(id)a0 roomManager:(id)a1 videoParamsManager:(id)a2;
- (BOOL)isAuxRoom:(id)a0;
- (void)onRoomCreated:(id)a0 result:(BOOL)a1;
- (void)onRoomWillDestroy:(id)a0;
- (void)onRoomDidDestroy:(id)a0;
- (void)rtcEngine:(id)a0 onSEIMessageReceived:(id)a1 andMessage:(id)a2;
- (void)rtcEngine:(id)a0 onStreamSyncInfoReceived:(id)a1 streamType:(long long)a2 data:(id)a3;
- (void)rtcEngine:(id)a0 onUserMessageReceivedOutsideRoom:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onRoomBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onRoomMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onRoomMessageSendResult:(long long)a1 error:(long long)a2;
- (void)rtcRoom:(id)a0 onUserBinaryMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onUserMessageReceived:(id)a1 message:(id)a2;
- (void)rtcRoom:(id)a0 onUserMessageSendResult:(long long)a1 error:(long long)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
