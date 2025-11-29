@class NSString, RTVVoipEventHandler, NSMutableSet;
@protocol RTVVoipRoomService, RTVVoipConfigureManagerInterface, RTVVoIPReceiver, RxInjector, RTVVoipManagerInterface, RTVVoipService;

@interface RTVVoipLongConnectionNotifyHandler : NSObject <RTVJetWebNotifyMessageHandlerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipService> voipService;
@property (readonly, nonatomic) id<RTVVoIPReceiver> voipReceiver;
@property (readonly, nonatomic) RTVVoipEventHandler *eventHandler;
@property (readonly, nonatomic) id<RTVVoipRoomService> roomInfoService;
@property (readonly, nonatomic) NSMutableSet *receivedPushSequenceIDs;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) BOOL isAppActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__didBecomeActive;
- (void)__addObserver;
- (void)__handlePushMessage:(id)a0;
- (id)__sequenceIDWithPushMessage:(id)a0;
- (void)__ackWithPushMessage:(id)a0;
- (id)__pushMessageDataDic:(id)a0;
- (BOOL)handleReceivedMessage:(id)a0;
- (void)__willResignActive;
- (void)__handleVoipPushMessage:(id)a0;
- (void)__handleCommandPushMessage:(id)a0;
- (void)__handleRoomInfoPushMessage:(id)a0;
- (BOOL)__shouldUseAckV2WithPushMessage:(id)a0;
- (id)__traceInfoWithPushMessage:(id)a0;
- (void).cxx_destruct;

@end
