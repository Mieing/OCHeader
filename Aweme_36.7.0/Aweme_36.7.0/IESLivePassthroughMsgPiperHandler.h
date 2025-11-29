@class NSArray, NSString, NSHashTable;
@protocol IESLivePiperProtocol;

@interface IESLivePassthroughMsgPiperHandler : NSObject <HTSLiveMessageSubscriber, IESLivePreStreamIMMessageSubscriber, IESLiveSearchPreStreamMessageSubscriber, IESLivePiperHandlerProtocol>

@property (retain, nonatomic) NSArray *messageTypes;
@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (retain, nonatomic) NSHashTable *registeredMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;

- (void)didSetAttachingDIContext;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)registerHandlerWithBridge:(id)a0;
- (void)onMessageReceivce:(id)a0 messageStr:(id)a1;
- (void)setupMessage;
- (id /* block */)registerMessageCallHandler;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
