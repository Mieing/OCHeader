@class TTBridgeRegister, NSString;
@protocol TTBridgeEngine, BDXBridgeContainerProtocol;

@interface TTBridgeUnifyExecutor : NSObject <BDXBridgeExecutorProtocol>

@property (weak, nonatomic) TTBridgeRegister *reg;
@property (weak, nonatomic) id<TTBridgeEngine> engine;
@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)statusMessageWithStatusCode:(long long)a0;

- (BOOL)canHandleMessage:(id)a0;
- (void)handleMessage:(id)a0 resultHandler:(id /* block */)a1;
- (id)convertWithCallMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
