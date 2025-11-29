@class NSString, RTVVoipEventHandler, NSMutableSet;
@protocol RxInjector, RTVVoipService, IESLCConnectManagerProtocol, RTVVoipConfigureManagerInterface, IESLCMessageHandlerProtocol, RTVPushDataSourceComponentInterface, RTVVoipManagerInterface, RTVVoipRoomService;

@interface RTVPushDataSourceComponent_WebSocket : RTVComponentBase <RTVPushDataSourceComponent_WebSocketInterface, IESLCMessageHandlerService, IESLCConnectService>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipService> voipService;
@property (readonly, nonatomic) RTVVoipEventHandler *eventHandler;
@property (readonly, nonatomic) id<RTVVoipRoomService> roomInfoService;
@property (readonly, nonatomic) NSMutableSet *receivedPushSequenceIDs;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (nonatomic) unsigned long long connectionState;
@property (readonly, nonatomic) id<RTVPushDataSourceComponentInterface> dataSourceComponent;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) BOOL isAppActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)__didBecomeActive;
- (void)__addObserver;
- (id)__sequenceIDWithPushMessage:(id)a0;
- (id)__pushMessageDataDic:(id)a0;
- (void)__willResignActive;
- (void)__handleVoipPushMessage:(id)a0;
- (void)__handleCommandPushMessage:(id)a0;
- (void)__handleRoomInfoPushMessage:(id)a0;
- (void)__handleExtraEventItem:(id)a0;
- (void)__ackWithPushMessageIfNeed:(id)a0;
- (id)__methodDescribeWithPushMessage:(id)a0;
- (void)__handleWebSocketMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
