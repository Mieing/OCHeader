@class NSMutableDictionary;
@protocol BDXBridgeContainerProtocol;

@interface AWEOFGBridge : NSObject

@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (weak, nonatomic) id engine;
@property (retain, nonatomic) NSMutableDictionary *messageMap;

+ (BOOL)canHandleMessage:(id)a0;
+ (void)registerBridgeMethod:(id)a0;
+ (id)defaultBridgeMethodClasses;
+ (void)registerBridgeMethodWithClass:(Class)a0;
+ (void)registerBridgeMethodWithClass:(Class)a0 usingBlock:(id /* block */)a1;
+ (void)registerDefaultBridgeMethods;
+ (void)registerBridgeMethodUsingHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1;

- (id /* block */)responseHandlerWithMessage:(id)a0;
- (id)initWithContainer:(id)a0 engine:(id)a1;
- (void)handleBridgeMessage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
