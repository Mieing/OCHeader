@class NSString, BDLynxBridge;
@protocol IESHYHybridViewProtocol, BDXBridgeContainerProtocol;

@interface PuzzleLynxBridgeEngine : NSObject <BDLynxBridgeExecutor, BDXBridgeExecutorProtocol>

@property (weak, nonatomic) id<IESHYHybridViewProtocol> hybridView;
@property (weak, nonatomic) BDLynxBridge *lynxBridge;
@property (copy, nonatomic) id /* block */ willRegisterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (nonatomic) long long priority;

+ (id)bridgeEngineWithHybridView:(id)a0;

- (BOOL)canHandleMessage:(id)a0;
- (void)handleMessage:(id)a0 resultHandler:(id /* block */)a1;
- (id)convertWithCallMessage:(id)a0;
- (BOOL)executeMethodWithMessage:(id)a0 onBridge:(id)a1 callback:(id /* block */)a2;
- (void)resetBridgeAndViewIfNeeded;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
