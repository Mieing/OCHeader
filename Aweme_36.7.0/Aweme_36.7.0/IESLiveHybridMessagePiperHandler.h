@class NSNumber, NSString, IESLiveHybridIMMessageHandler;
@protocol IESLivePiperProtocol;

@interface IESLiveHybridMessagePiperHandler : NSObject <HTSLiveMessageSubscriber, IESLivePiperHandlerProtocol, BDXBridgeConnectLongLinkServiceProtocol>

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (retain, nonatomic) IESLiveHybridIMMessageHandler *imHandler;
@property (copy, nonatomic) NSNumber *currentRoomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;

- (void)registerHandlerWithBridge:(id)a0;
- (void)connectWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)disconnectLongLinkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerLongLinkMessageTypeWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)connectLongLinkCallHandler;
- (id /* block */)disconnectLongLinkCallHandler;
- (id /* block */)registerLongLinkMessageTypeCallHandler;
- (void)connectWithParams:(id)a0 callback:(id /* block */)a1;
- (void)disconnectLongLinkWithParams:(id)a0 callback:(id /* block */)a1;
- (void)registerLongLinkMessageTypeWithParams:(id)a0 callback:(id /* block */)a1;
- (void)registerConnect:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
