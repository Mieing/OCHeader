@class NSString, BDLynxBridge;
@protocol BDXBridgeContainerProtocol;

@interface BDXBridgeLynxBridgeExecutor : NSObject <BDXBridgeExecutorProtocol>

@property (weak, nonatomic) BDLynxBridge *lynxBridge;
@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandleMessage:(id)a0;
- (void)handleMessage:(id)a0 resultHandler:(id /* block */)a1;
- (id)convertWithCallMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
